// Created by Bankai Software @2025


#include "ConceptorWidgetBase.h"

void UConceptorWidgetBase::NativeDestruct()
{
	if (EditorViewportWidget.IsValid() && SlateWidget.IsValid())
	{
		EditorViewportWidget->RemoveOverlayWidget(SlateWidget.ToSharedRef());
		SlateWidget.Reset();
	}
	if (IsValid(UMGWidget)) {
		UMGWidget->RemoveFromParent();
		UMGWidget = nullptr;
	}

	EditorViewportWidget.Reset();

	Super::NativeDestruct();
}

void UConceptorWidgetBase::SetupWebSocket() {
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets"))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	// Create socket
	Socket = FWebSocketsModule::Get().CreateWebSocket(url, TEXT("ws"));

	// Binds
	Socket->OnConnected().AddLambda([this]() -> void {
		IsConnected = true;
		UE_LOG(LogTemp, Warning, TEXT("Connected to WebSocket"));
	});

	Socket->OnClosed().AddLambda([this](int32 StatusCode, const FString& Reason, bool bWasClean) -> void {
		IsConnected = false;
		UE_LOG(LogTemp, Warning, TEXT("Connection Closed - Reason: %s"), *Reason);
	});

	Socket->OnConnectionError().AddLambda([this](const FString & Error) -> void {
		IsConnected = true;
		UE_LOG(LogTemp, Warning, TEXT("Connection Failed - Reason: %s"), *Error);
	});

	Socket->OnMessage().AddLambda([this](const FString& Message) -> void {
		UConceptorWidgetBase::HandleMessageRecieved(Message);
	});

	// Connect

	Socket->Connect();
}

void UConceptorWidgetBase::Connect() {
	if (!IsConnected) {
		UpdateWorkflows();
		SetupWebSocket();
		SetupViewportAccess();
		FString ScreenshotsDir = FPaths::ProjectSavedDir() / TEXT("Screenshots/");
		ScreenshotPath = ScreenshotsDir + TEXT("screenshot");
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Already connected"));
	}

}

void UConceptorWidgetBase::Disconnect() {
	if(IsConnected)	Socket->Close();
}

void UConceptorWidgetBase::HandleMessageRecieved(FString Message) {
	FString MessageType = "ok";
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Message);
	TSharedPtr<FJsonValue> OutValue;
	TSharedPtr<FJsonObject> MainObject;

	if (FJsonSerializer::Deserialize(JsonReader, OutValue)) {
		MainObject = OutValue->AsObject();
		MainObject->TryGetStringField(TEXT("type"), MessageType);
	}

	if (MessageType == TEXT("progress"))
	{
		int32 CurrentStep = MainObject->GetObjectField("data")->GetNumberField("value");
		int32 LastStep = MainObject->GetObjectField("data")->GetNumberField("max");
		Progress = 1.0f * CurrentStep / LastStep;
		UE_LOG(LogTemp, Warning, TEXT("Progress: %f"), Progress);
		OnStatusReceived.Broadcast(TEXT("progress"));
		FString PromptId = MainObject->GetObjectField("data")->GetStringField("prompt_id");
		if (!PromptId.Equals(LastPromptId)) {
			LastPromptId = PromptId;
			UE_LOG(LogTemp, Warning, TEXT("LastPromptId updated to: %s"), *LastPromptId);
		}
	}
	else if (MessageType == TEXT("status")) {
		QueueRemaining = MainObject->GetObjectField("data")->GetObjectField("status")->GetObjectField("exec_info")->GetNumberField("queue_remaining");
		OnStatusReceived.Broadcast(TEXT("status"));
		UE_LOG(LogTemp, Warning, TEXT("QueueRemainig: %d"), QueueRemaining);
		if (QueueRemaining == 0) {
			FetchAssetURL();
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Unknown message"));
	}
}

void UConceptorWidgetBase::TakeScreenshot() {
	if (IsConnected) {
		FLevelEditorViewportClient* ViewportClient = GCurrentLevelEditingViewportClient;
		if (ViewportClient)
		{
			ViewportClient->bDrawAxes = false;
			ViewportClient->RedrawRequested(ViewportClient->Viewport);
			ViewportClient->Invalidate();
		}
		FScreenshotRequest::RequestScreenshot(ScreenshotPath, false, false);
		FScreenshotRequest::OnScreenshotRequestProcessed().AddLambda([&]() {
			OnScreenshotTaken();
			FScreenshotRequest::OnScreenshotRequestProcessed().Clear();
		});
		UE_LOG(LogTemp, Warning, TEXT("Screenshot requested"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Unable to take a screenshot - please connect first"));
	}
}

void UConceptorWidgetBase::OnScreenshotTaken_Implementation() {
	// EMPTY
	UE_LOG(LogTemp, Warning, TEXT("Screenshot saved to: %s"), *ScreenshotPath);
}

void UConceptorWidgetBase::SetWorkflowValues() {
	if (JsonString.IsEmpty()) {
		UE_LOG(LogTemp, Error, TEXT("No workflow loaded."));
		return;
	}
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(Reader, JsonObject)) {
		for (const auto& KeyValuePair : JsonObject->Values) {
			const FString& Key = KeyValuePair.Key;
			TSharedPtr<FJsonObject> SubObject = KeyValuePair.Value->AsObject();

			if (SubObject.IsValid()) {
				FString ClassType = SubObject->GetStringField("class_type");
				
				if (ClassType.Equals("KSampler")) {
					// KSampler
					TSharedPtr<FJsonObject> InputsObject = SubObject->GetObjectField("inputs");
					int32 RandomSeed = FMath::Rand();
					InputsObject->SetNumberField("seed", RandomSeed);
					InputsObject->SetNumberField("steps", Steps);
					InputsObject->SetNumberField("cfg", CfgScale);
					InputsObject->SetNumberField("denoise", Denoise);
				}

				if (ClassType.Equals("CheckpointLoaderSimple")) {
					// Model loader
					TSharedPtr<FJsonObject> InputsObject = SubObject->GetObjectField("inputs");
					InputsObject->SetStringField("ckpt_name", *Model);
				}

				if (ClassType.Equals("ControlNetLoader")) {
					// ControlNet loader
					TSharedPtr<FJsonObject> InputsObject = SubObject->GetObjectField("inputs");
					InputsObject->SetStringField("control_net_name", *ControlNet);
				}

				if (ClassType.Equals("ControlNetApplyAdvanced")) {
					// ControlNetStrength
					TSharedPtr<FJsonObject> InputsObject = SubObject->GetObjectField("inputs");
					InputsObject->SetNumberField("strength", ControlNetStrength);
				}

				if (ClassType.Equals("LoadImageFromPath")) {
					// LoadImageFromPath
					TSharedPtr<FJsonObject> InputsObject = SubObject->GetObjectField("inputs");
					FString ScreenshotPathWithExt = ScreenshotPath + TEXT(".png");
					InputsObject->SetStringField("image", *ScreenshotPathWithExt);
				}
			}
		}
		TSharedPtr<FJsonObject> OuterObject = MakeShareable(new FJsonObject());
		OuterObject->SetNumberField("clientId", 0);
		OuterObject->SetObjectField("prompt", JsonObject);
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
		if (!FJsonSerializer::Serialize(OuterObject.ToSharedRef(), Writer)) {
			UE_LOG(LogTemp, Error, TEXT("JSON Serialize error"));
			return;
		}

		JsonString = JsonString.Replace(TEXT("positiveprompt"), *PositivePrompt, ESearchCase::CaseSensitive);
		JsonString = JsonString.Replace(TEXT("negativeprompt"), *NegativePrompt, ESearchCase::CaseSensitive);
		UE_LOG(LogTemp, Warning, TEXT("Workflow injection successful"));
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("JSON Deserialize error"));
	}
}

void UConceptorWidgetBase::SendPrompt() {
	if (IsConnected) {
		FHttpModule& httpModule = FHttpModule::Get();
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = httpModule.CreateRequest();
		pRequest->SetVerb(TEXT("POST"));
		pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

		SetWorkflowValues();
		pRequest->SetContentAsString(JsonString);
		pRequest->SetURL("http://127.0.0.1:8188/prompt");

		pRequest->ProcessRequest();
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Couldn't process - Not connected to WebSocket service."));
	}
}

void UConceptorWidgetBase::FetchAssetURL() {
	FHttpModule& httpModule = FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = httpModule.CreateRequest();
	pRequest->SetVerb(TEXT("GET"));
	pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	pRequest->SetURL("http://127.0.0.1:8188/history");

	pRequest->OnProcessRequestComplete().BindLambda(
		[&](
			FHttpRequestPtr pRequest,
			FHttpResponsePtr pResponse,
			bool connectedSuccessfully) mutable {

		if (connectedSuccessfully) {
			FString ParsedUrl = GetFilenameFromHistory(pResponse->GetContentAsString());
			OnUrlReceived.Broadcast(ParsedUrl);
		}
		else {
			switch (pRequest->GetStatus()) {
			case EHttpRequestStatus::Failed_ConnectionError:
				UE_LOG(LogTemp, Error, TEXT("Connection failed."));
			default:
				UE_LOG(LogTemp, Error, TEXT("Request failed."));
			}
		}
	});

	pRequest->ProcessRequest();
}

void UConceptorWidgetBase::DownloadAndSetTexture(UImage* TargetImage, FString ImageURL)
{
	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

	Request->OnProcessRequestComplete().BindLambda([TargetImage, this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		if (bWasSuccessful && Response.IsValid())
		{
			TArray<uint8> ImageData = Response->GetContent();
			UTexture2D* Texture = LoadTextureFromByteArray(ImageData);

			if (Texture && TargetImage)
			{
				TargetImage->SetBrushFromTexture(Texture);
			}
		}
	});

	Request->SetURL(ImageURL);
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

UTexture2D* UConceptorWidgetBase::LoadTextureFromByteArray(const TArray<uint8>& ImageData)
{
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
	{
		TArray<uint8> UncompressedRGBA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRGBA))
		{
			UTexture2D* NewTexture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight());
			if (!NewTexture) return nullptr;

			void* TextureData = NewTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedRGBA.GetData(), UncompressedRGBA.Num());
			NewTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

			NewTexture->UpdateResource();
			return NewTexture;
		}
	}
	return nullptr;
}

FString UConceptorWidgetBase::GetFilenameFromHistory(FString RawJson) {
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(RawJson);
	TSharedPtr<FJsonValue> OutValue;
	TSharedPtr<FJsonObject> MainObject;
	FString Filename = "None";

	if (FJsonSerializer::Deserialize(JsonReader, OutValue) && Progress == 1.0f) {
		MainObject = OutValue->AsObject();
		TSharedPtr<FJsonObject> OutputsObject = MainObject->GetObjectField(LastPromptId)->GetObjectField("outputs");

		for (const auto& KeyValuePair : OutputsObject->Values) {
			const FString& Key = KeyValuePair.Key;
			if (!KeyValuePair.Value->AsObject()->GetArrayField("images").IsEmpty()) {
				TSharedPtr<FJsonObject> SubObject = KeyValuePair.Value->AsObject()->GetArrayField("images")[0]->AsObject();
				if (SubObject->GetStringField("type").Equals("output")) {
					Filename = SubObject->GetStringField("filename");
					break;
				}
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("Filename: %s"), *Filename);
		Progress = 0.0f;
	}
	
	return Filename;
}

void UConceptorWidgetBase::SetupViewportAccess() {
	FLevelEditorViewportClient* ViewportClient = GCurrentLevelEditingViewportClient;
	if (ViewportClient) {
		EditorViewportWidget = StaticCastSharedPtr<SLevelViewport>(ViewportClient->GetEditorViewportWidget());
		if (!EditorViewportWidget.IsValid()) {
			UE_LOG(LogTemp, Error, TEXT("EditorViewportWidget INVALID"));
			return;
		}

		World = GEditor->GetEditorWorldContext().World();
		if (!World) {
			UE_LOG(LogTemp, Error, TEXT("World INVALID"));
			return;
		}

		if (!WidgetClass)
		{
			UE_LOG(LogTemp, Error, TEXT("UMG Widget Class INVALID"));
			return;
		}

		UMGWidget = CreateWidget<UUserWidget>(World, WidgetClass);
		if (!UMGWidget)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create UMG widget."));
			return;
		}

		SlateWidget = UMGWidget->TakeWidget();
		EditorViewportWidget->AddOverlayWidget(SlateWidget.ToSharedRef());

		UE_LOG(LogTemp, Warning, TEXT("Viewport Setup Successful"));
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Couldn't get ViewportClient"));
	}
}

void UConceptorWidgetBase::UpdateWorkflows() {
	FString PluginDir = FPaths::ProjectPluginsDir() + TEXT("Conceptor/Content/Data/");
	UE_LOG(LogTemp, Warning, TEXT("Checking for workflows under: %s"), *PluginDir);
	IFileManager::Get().FindFiles(Workflows, *PluginDir, TEXT("*.json"));
}

bool UConceptorWidgetBase::LoadWorkflow(FString Workflow) {
	FString FileDir = FPaths::ProjectPluginsDir() + TEXT("Conceptor/Content/Data/") + Workflow;
	if (FFileHelper::LoadFileToString(JsonString, *FileDir)) {
		UE_LOG(LogTemp, Warning, TEXT("Workflow: %s - loaded"), *Workflow);
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Workflow loading failed"));
		return false;
	}
}

void UConceptorWidgetBase::UpdateModels() {
	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Checkpoints.Empty();

	Request->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		if (bWasSuccessful && Response.IsValid())
		{
			TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
			TSharedPtr<FJsonValue> OutValue;
			TSharedPtr<FJsonObject> MainObject;

			if (FJsonSerializer::Deserialize(JsonReader, OutValue)) {
				MainObject = OutValue->AsObject();
				TSharedPtr<FJsonObject> CheckpointLoader = MainObject->GetObjectField("CheckpointLoaderSimple");
				TSharedPtr<FJsonObject> InputField = CheckpointLoader->GetObjectField("input");
				TSharedPtr<FJsonObject> RequiredField = InputField->GetObjectField("required");
				TArray<TSharedPtr<FJsonValue>> CkeckpointsArray = RequiredField->GetArrayField("ckpt_name");

				for (TSharedPtr<FJsonValue>& Checkpoint : CkeckpointsArray) {
					TArray<TSharedPtr<FJsonValue>> FileObject = Checkpoint->AsArray();
					if (FileObject.IsEmpty()) continue;

					FString FileName = FileObject[0]->AsString();

					if (FileName.Contains(".safetensors") || FileName.Contains(".pth")) {
						Checkpoints.Add(FileName);
						UE_LOG(LogTemp, Warning, TEXT("%s added to Checkpoints"), *FileName);
					}
				}
			}
		}
		OnModelsUpdated();
	});

	Request->SetURL("http://127.0.0.1:8188/api/object_info");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void UConceptorWidgetBase::UpdateControlNets() {
	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	ControlNets.Empty();

	Request->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
		{
			if (bWasSuccessful && Response.IsValid())
			{
				TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
				TSharedPtr<FJsonValue> OutValue;
				TSharedPtr<FJsonObject> MainObject;

				if (FJsonSerializer::Deserialize(JsonReader, OutValue)) {
					MainObject = OutValue->AsObject();
					TSharedPtr<FJsonObject> CNLoader = MainObject->GetObjectField("ControlNetLoader");
					TSharedPtr<FJsonObject> InputField = CNLoader->GetObjectField("input");
					TSharedPtr<FJsonObject> RequiredField = InputField->GetObjectField("required");
					TArray<TSharedPtr<FJsonValue>> CNArray = RequiredField->GetArrayField("control_net_name");
					TArray<TSharedPtr<FJsonValue>> FilenameArray = CNArray[0]->AsArray();

					for (TSharedPtr<FJsonValue>& ControlNet : FilenameArray) {
						FString FileName = ControlNet->AsString();

						if (FileName.Contains(".safetensors") || FileName.Contains(".pth")) {
							ControlNets.Add(FileName);
							UE_LOG(LogTemp, Warning, TEXT("%s added to ControlNets"), *FileName);
						}
					}
				}
			}
			OnModelsUpdated();
		});

	Request->SetURL("http://127.0.0.1:8188/api/object_info");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void UConceptorWidgetBase::OnModelsUpdated_Implementation() {
	//
}