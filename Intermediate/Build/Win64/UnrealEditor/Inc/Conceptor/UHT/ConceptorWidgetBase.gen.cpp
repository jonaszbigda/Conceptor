// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conceptor/Public/ConceptorWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConceptorWidgetBase() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
CONCEPTOR_API UClass* Z_Construct_UClass_UConceptorWidgetBase();
CONCEPTOR_API UClass* Z_Construct_UClass_UConceptorWidgetBase_NoRegister();
CONCEPTOR_API UFunction* Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature();
CONCEPTOR_API UFunction* Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Conceptor();
// End Cross Module References

// Begin Delegate FReceivedUrl
struct Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics
{
	struct _Script_Conceptor_eventReceivedUrl_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Conceptor_eventReceivedUrl_Parms, Url), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Conceptor, nullptr, "ReceivedUrl__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::_Script_Conceptor_eventReceivedUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::_Script_Conceptor_eventReceivedUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReceivedUrl_DelegateWrapper(const FMulticastScriptDelegate& ReceivedUrl, const FString& Url)
{
	struct _Script_Conceptor_eventReceivedUrl_Parms
	{
		FString Url;
	};
	_Script_Conceptor_eventReceivedUrl_Parms Parms;
	Parms.Url=Url;
	ReceivedUrl.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FReceivedUrl

// Begin Delegate FReceivedStatus
struct Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics
{
	struct _Script_Conceptor_eventReceivedStatus_Parms
	{
		FString Status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Conceptor_eventReceivedStatus_Parms, Status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Conceptor, nullptr, "ReceivedStatus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::_Script_Conceptor_eventReceivedStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::_Script_Conceptor_eventReceivedStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReceivedStatus_DelegateWrapper(const FMulticastScriptDelegate& ReceivedStatus, const FString& Status)
{
	struct _Script_Conceptor_eventReceivedStatus_Parms
	{
		FString Status;
	};
	_Script_Conceptor_eventReceivedStatus_Parms Parms;
	Parms.Status=Status;
	ReceivedStatus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FReceivedStatus

// Begin Class UConceptorWidgetBase Function Connect
struct Z_Construct_UFunction_UConceptorWidgetBase_Connect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "Connect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_Connect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function Connect

// Begin Class UConceptorWidgetBase Function Disconnect
struct Z_Construct_UFunction_UConceptorWidgetBase_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function Disconnect

// Begin Class UConceptorWidgetBase Function DownloadAndSetTexture
struct Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics
{
	struct ConceptorWidgetBase_eventDownloadAndSetTexture_Parms
	{
		UImage* TargetImage;
		FString ImageURL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetImage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::NewProp_TargetImage = { "TargetImage", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventDownloadAndSetTexture_Parms, TargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetImage_MetaData), NewProp_TargetImage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::NewProp_ImageURL = { "ImageURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventDownloadAndSetTexture_Parms, ImageURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::NewProp_TargetImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::NewProp_ImageURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "DownloadAndSetTexture", nullptr, nullptr, Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::ConceptorWidgetBase_eventDownloadAndSetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::ConceptorWidgetBase_eventDownloadAndSetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execDownloadAndSetTexture)
{
	P_GET_OBJECT(UImage,Z_Param_TargetImage);
	P_GET_PROPERTY(FStrProperty,Z_Param_ImageURL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadAndSetTexture(Z_Param_TargetImage,Z_Param_ImageURL);
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function DownloadAndSetTexture

// Begin Class UConceptorWidgetBase Function FetchAssetURL
struct Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "FetchAssetURL", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execFetchAssetURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FetchAssetURL();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function FetchAssetURL

// Begin Class UConceptorWidgetBase Function GetFilenameFromHistory
struct Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics
{
	struct ConceptorWidgetBase_eventGetFilenameFromHistory_Parms
	{
		FString RawJson;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RawJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::NewProp_RawJson = { "RawJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventGetFilenameFromHistory_Parms, RawJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventGetFilenameFromHistory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::NewProp_RawJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "GetFilenameFromHistory", nullptr, nullptr, Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::ConceptorWidgetBase_eventGetFilenameFromHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::ConceptorWidgetBase_eventGetFilenameFromHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execGetFilenameFromHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RawJson);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFilenameFromHistory(Z_Param_RawJson);
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function GetFilenameFromHistory

// Begin Class UConceptorWidgetBase Function HandleMessageRecieved
struct Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics
{
	struct ConceptorWidgetBase_eventHandleMessageRecieved_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventHandleMessageRecieved_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "HandleMessageRecieved", nullptr, nullptr, Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::ConceptorWidgetBase_eventHandleMessageRecieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::ConceptorWidgetBase_eventHandleMessageRecieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execHandleMessageRecieved)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMessageRecieved(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function HandleMessageRecieved

// Begin Class UConceptorWidgetBase Function LoadWorkflow
struct Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics
{
	struct ConceptorWidgetBase_eventLoadWorkflow_Parms
	{
		FString Workflow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Workflow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_Workflow = { "Workflow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConceptorWidgetBase_eventLoadWorkflow_Parms, Workflow), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConceptorWidgetBase_eventLoadWorkflow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConceptorWidgetBase_eventLoadWorkflow_Parms), &Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_Workflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "LoadWorkflow", nullptr, nullptr, Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::ConceptorWidgetBase_eventLoadWorkflow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::ConceptorWidgetBase_eventLoadWorkflow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execLoadWorkflow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Workflow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadWorkflow(Z_Param_Workflow);
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function LoadWorkflow

// Begin Class UConceptorWidgetBase Function OnModelsUpdated
static FName NAME_UConceptorWidgetBase_OnModelsUpdated = FName(TEXT("OnModelsUpdated"));
void UConceptorWidgetBase::OnModelsUpdated()
{
	ProcessEvent(FindFunctionChecked(NAME_UConceptorWidgetBase_OnModelsUpdated),NULL);
}
struct Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "OnModelsUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execOnModelsUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnModelsUpdated_Implementation();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function OnModelsUpdated

// Begin Class UConceptorWidgetBase Function OnScreenshotTaken
static FName NAME_UConceptorWidgetBase_OnScreenshotTaken = FName(TEXT("OnScreenshotTaken"));
void UConceptorWidgetBase::OnScreenshotTaken()
{
	ProcessEvent(FindFunctionChecked(NAME_UConceptorWidgetBase_OnScreenshotTaken),NULL);
}
struct Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "OnScreenshotTaken", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execOnScreenshotTaken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScreenshotTaken_Implementation();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function OnScreenshotTaken

// Begin Class UConceptorWidgetBase Function SendPrompt
struct Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "SendPrompt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execSendPrompt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPrompt();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function SendPrompt

// Begin Class UConceptorWidgetBase Function SetupViewportAccess
struct Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "SetupViewportAccess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execSetupViewportAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupViewportAccess();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function SetupViewportAccess

// Begin Class UConceptorWidgetBase Function SetupWebSocket
struct Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "SetupWebSocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execSetupWebSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWebSocket();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function SetupWebSocket

// Begin Class UConceptorWidgetBase Function TakeScreenshot
struct Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "TakeScreenshot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execTakeScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeScreenshot();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function TakeScreenshot

// Begin Class UConceptorWidgetBase Function UpdateModels
struct Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConceptorWidgetBase, nullptr, "UpdateModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConceptorWidgetBase::execUpdateModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateModels();
	P_NATIVE_END;
}
// End Class UConceptorWidgetBase Function UpdateModels

// Begin Class UConceptorWidgetBase
void UConceptorWidgetBase::StaticRegisterNativesUConceptorWidgetBase()
{
	UClass* Class = UConceptorWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UConceptorWidgetBase::execConnect },
		{ "Disconnect", &UConceptorWidgetBase::execDisconnect },
		{ "DownloadAndSetTexture", &UConceptorWidgetBase::execDownloadAndSetTexture },
		{ "FetchAssetURL", &UConceptorWidgetBase::execFetchAssetURL },
		{ "GetFilenameFromHistory", &UConceptorWidgetBase::execGetFilenameFromHistory },
		{ "HandleMessageRecieved", &UConceptorWidgetBase::execHandleMessageRecieved },
		{ "LoadWorkflow", &UConceptorWidgetBase::execLoadWorkflow },
		{ "OnModelsUpdated", &UConceptorWidgetBase::execOnModelsUpdated },
		{ "OnScreenshotTaken", &UConceptorWidgetBase::execOnScreenshotTaken },
		{ "SendPrompt", &UConceptorWidgetBase::execSendPrompt },
		{ "SetupViewportAccess", &UConceptorWidgetBase::execSetupViewportAccess },
		{ "SetupWebSocket", &UConceptorWidgetBase::execSetupWebSocket },
		{ "TakeScreenshot", &UConceptorWidgetBase::execTakeScreenshot },
		{ "UpdateModels", &UConceptorWidgetBase::execUpdateModels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConceptorWidgetBase);
UClass* Z_Construct_UClass_UConceptorWidgetBase_NoRegister()
{
	return UConceptorWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UConceptorWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConceptorWidgetBase.h" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUrlReceived_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatusReceived_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositivePrompt_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativePrompt_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CfgScale_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Denoise_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlNetStrength_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlNet_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Checkpoints_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlNets_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Workflows_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueueRemaining_MetaData[] = {
		{ "Category", "Conceptor" },
		{ "ModuleRelativePath", "Public/ConceptorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusReceived;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UMGWidget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PositivePrompt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NegativePrompt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CfgScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Denoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlNetStrength;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ControlNet;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Checkpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Checkpoints;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ControlNets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlNets;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Workflows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Workflows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueueRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConceptorWidgetBase_Connect, "Connect" }, // 4231296941
		{ &Z_Construct_UFunction_UConceptorWidgetBase_Disconnect, "Disconnect" }, // 347685477
		{ &Z_Construct_UFunction_UConceptorWidgetBase_DownloadAndSetTexture, "DownloadAndSetTexture" }, // 3303693
		{ &Z_Construct_UFunction_UConceptorWidgetBase_FetchAssetURL, "FetchAssetURL" }, // 1911850380
		{ &Z_Construct_UFunction_UConceptorWidgetBase_GetFilenameFromHistory, "GetFilenameFromHistory" }, // 3131247454
		{ &Z_Construct_UFunction_UConceptorWidgetBase_HandleMessageRecieved, "HandleMessageRecieved" }, // 546958587
		{ &Z_Construct_UFunction_UConceptorWidgetBase_LoadWorkflow, "LoadWorkflow" }, // 3245449052
		{ &Z_Construct_UFunction_UConceptorWidgetBase_OnModelsUpdated, "OnModelsUpdated" }, // 1589511715
		{ &Z_Construct_UFunction_UConceptorWidgetBase_OnScreenshotTaken, "OnScreenshotTaken" }, // 1831788710
		{ &Z_Construct_UFunction_UConceptorWidgetBase_SendPrompt, "SendPrompt" }, // 1614668513
		{ &Z_Construct_UFunction_UConceptorWidgetBase_SetupViewportAccess, "SetupViewportAccess" }, // 1787729265
		{ &Z_Construct_UFunction_UConceptorWidgetBase_SetupWebSocket, "SetupWebSocket" }, // 1215424274
		{ &Z_Construct_UFunction_UConceptorWidgetBase_TakeScreenshot, "TakeScreenshot" }, // 48602139
		{ &Z_Construct_UFunction_UConceptorWidgetBase_UpdateModels, "UpdateModels" }, // 1639203776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConceptorWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_IsConnected_SetBit(void* Obj)
{
	((UConceptorWidgetBase*)Obj)->IsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConceptorWidgetBase), &Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsConnected_MetaData), NewProp_IsConnected_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_OnUrlReceived = { "OnUrlReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, OnUrlReceived), Z_Construct_UDelegateFunction_Conceptor_ReceivedUrl__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUrlReceived_MetaData), NewProp_OnUrlReceived_MetaData) }; // 1381916472
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_OnStatusReceived = { "OnStatusReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, OnStatusReceived), Z_Construct_UDelegateFunction_Conceptor_ReceivedStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatusReceived_MetaData), NewProp_OnStatusReceived_MetaData) }; // 4164097318
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, UMGWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UMGWidget_MetaData), NewProp_UMGWidget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_url_MetaData), NewProp_url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_PositivePrompt = { "PositivePrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, PositivePrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositivePrompt_MetaData), NewProp_PositivePrompt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_NegativePrompt = { "NegativePrompt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, NegativePrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativePrompt_MetaData), NewProp_NegativePrompt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_CfgScale = { "CfgScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, CfgScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CfgScale_MetaData), NewProp_CfgScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Denoise = { "Denoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Denoise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Denoise_MetaData), NewProp_Denoise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNetStrength = { "ControlNetStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, ControlNetStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlNetStrength_MetaData), NewProp_ControlNetStrength_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNet = { "ControlNet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, ControlNet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlNet_MetaData), NewProp_ControlNet_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Checkpoints_Inner = { "Checkpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Checkpoints = { "Checkpoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Checkpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Checkpoints_MetaData), NewProp_Checkpoints_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNets_Inner = { "ControlNets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNets = { "ControlNets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, ControlNets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlNets_MetaData), NewProp_ControlNets_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Workflows_Inner = { "Workflows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Workflows = { "Workflows", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, Workflows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Workflows_MetaData), NewProp_Workflows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_QueueRemaining = { "QueueRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConceptorWidgetBase, QueueRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueueRemaining_MetaData), NewProp_QueueRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConceptorWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_IsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_OnUrlReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_OnStatusReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_UMGWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_PositivePrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_NegativePrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_CfgScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Denoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNetStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Checkpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Checkpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_ControlNets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Workflows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_Workflows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConceptorWidgetBase_Statics::NewProp_QueueRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConceptorWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConceptorWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Conceptor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConceptorWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConceptorWidgetBase_Statics::ClassParams = {
	&UConceptorWidgetBase::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConceptorWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConceptorWidgetBase_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConceptorWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UConceptorWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConceptorWidgetBase()
{
	if (!Z_Registration_Info_UClass_UConceptorWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConceptorWidgetBase.OuterSingleton, Z_Construct_UClass_UConceptorWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConceptorWidgetBase.OuterSingleton;
}
template<> CONCEPTOR_API UClass* StaticClass<UConceptorWidgetBase>()
{
	return UConceptorWidgetBase::StaticClass();
}
UConceptorWidgetBase::UConceptorWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConceptorWidgetBase);
UConceptorWidgetBase::~UConceptorWidgetBase() {}
// End Class UConceptorWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConceptorWidgetBase, UConceptorWidgetBase::StaticClass, TEXT("UConceptorWidgetBase"), &Z_Registration_Info_UClass_UConceptorWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConceptorWidgetBase), 1606137074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_2838394755(TEXT("/Script/Conceptor"),
	Z_CompiledInDeferFile_FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
