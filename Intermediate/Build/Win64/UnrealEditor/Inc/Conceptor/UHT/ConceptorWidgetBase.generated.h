// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConceptorWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImage;
#ifdef CONCEPTOR_ConceptorWidgetBase_generated_h
#error "ConceptorWidgetBase.generated.h already included, missing '#pragma once' in ConceptorWidgetBase.h"
#endif
#define CONCEPTOR_ConceptorWidgetBase_generated_h

#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_29_DELEGATE \
CONCEPTOR_API void FReceivedUrl_DelegateWrapper(const FMulticastScriptDelegate& ReceivedUrl, const FString& Url);


#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_30_DELEGATE \
CONCEPTOR_API void FReceivedStatus_DelegateWrapper(const FMulticastScriptDelegate& ReceivedStatus, const FString& Status);


#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnScreenshotTaken); \
	DECLARE_FUNCTION(execOnModelsUpdated); \
	DECLARE_FUNCTION(execUpdateModels); \
	DECLARE_FUNCTION(execSetupViewportAccess); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execLoadWorkflow); \
	DECLARE_FUNCTION(execDownloadAndSetTexture); \
	DECLARE_FUNCTION(execFetchAssetURL); \
	DECLARE_FUNCTION(execGetFilenameFromHistory); \
	DECLARE_FUNCTION(execSendPrompt); \
	DECLARE_FUNCTION(execHandleMessageRecieved); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execSetupWebSocket);


#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_CALLBACK_WRAPPERS
#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConceptorWidgetBase(); \
	friend struct Z_Construct_UClass_UConceptorWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UConceptorWidgetBase, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Conceptor"), NO_API) \
	DECLARE_SERIALIZER(UConceptorWidgetBase)


#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConceptorWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConceptorWidgetBase(UConceptorWidgetBase&&); \
	UConceptorWidgetBase(const UConceptorWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConceptorWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConceptorWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConceptorWidgetBase) \
	NO_API virtual ~UConceptorWidgetBase();


#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_34_PROLOG
#define FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_CALLBACK_WRAPPERS \
	FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_INCLASS_NO_PURE_DECLS \
	FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCEPTOR_API UClass* StaticClass<class UConceptorWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ConceptSD_Plugins_Conceptor_Source_Conceptor_Public_ConceptorWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
