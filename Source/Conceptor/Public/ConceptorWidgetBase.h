// Created by Bankai Software @2025

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilitySubsystem.h"
#include "EditorViewportClient.h"
#include "Blueprint/UserWidget.h"
#include "SLevelViewport.h"
#include "Widgets/SOverlay.h"
#include "Engine/Texture2D.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Components/Image.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "IWebSocket.h"
#include "WebSocketsModule.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "ConceptorWidgetBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedUrl, FString, Url);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedStatus, FString, Status);
/**
 * 
 */
UCLASS()
class CONCEPTOR_API UConceptorWidgetBase : public UEditorUtilityWidget
{
	GENERATED_BODY()

protected:

	TSharedPtr<IWebSocket> Socket;

	virtual void NativeDestruct() override;

	UFUNCTION()
	void SetupWebSocket();

public:

	UPROPERTY(BlueprintReadOnly, Category = "Conceptor")
	bool IsConnected = false;

	UPROPERTY(BlueprintAssignable, Category = "Conceptor")
	FReceivedUrl OnUrlReceived;

	UPROPERTY(BlueprintAssignable, Category = "Conceptor")
	FReceivedStatus OnStatusReceived;

	UPROPERTY(BlueprintReadWrite, Category = "Conceptor")
	float Progress = 0.0f;

	FString LastPromptId = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Conceptor")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Conceptor")
	UUserWidget* UMGWidget;

	FString ScreenshotPath;

	TSharedPtr<SLevelViewport> EditorViewportWidget;
	TSharedPtr<SWidget> SlateWidget;
	UWorld* World;

	UPROPERTY()
	FString url = TEXT("ws://127.0.0.1:8188/ws?clientId=0");

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	FString PositivePrompt = "best quality, cyberpunk, city, cinematic";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	FString NegativePrompt = "worst quality, watermark";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	int32 Steps = 6;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	float CfgScale = 6.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	float Denoise = 0.8f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	float ControlNetStrength = 0.8f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	FString Model = "dreamshaper_8.safetensors";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Conceptor")
	FString ControlNet = "diffusion_pytorch_model.fp16.safetensors";

	UPROPERTY()
	FString JsonString;

	UPROPERTY(BlueprintReadOnly, Category = "Conceptor")
	TArray<FString> Checkpoints;

	UPROPERTY(BlueprintReadOnly, Category = "Conceptor")
	TArray<FString> ControlNets;

	UPROPERTY(BlueprintReadOnly, Category = "Conceptor")
	TArray<FString> Workflows;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Conceptor")
	int32 QueueRemaining = 0;

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void Disconnect();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void Connect();

	UFUNCTION()
	void HandleMessageRecieved(FString Message);

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void SendPrompt();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	FString GetFilenameFromHistory(FString RawJson);

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void FetchAssetURL();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void DownloadAndSetTexture(UImage* TargetImage, FString ImageURL);

	UTexture2D* LoadTextureFromByteArray(const TArray<uint8>& ImageData);

	void UpdateWorkflows();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	bool LoadWorkflow(FString Workflow);

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void TakeScreenshot();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void SetupViewportAccess();

	void SetWorkflowValues();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void UpdateModels();

	UFUNCTION(BlueprintCallable, Category = "Conceptor")
	void UpdateControlNets();

	UFUNCTION(BlueprintNativeEvent, Category = "Conceptor")
	void OnModelsUpdated();
	virtual void OnModelsUpdated_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Conceptor")
	void OnScreenshotTaken();
	virtual void OnScreenshotTaken_Implementation();
	
};
