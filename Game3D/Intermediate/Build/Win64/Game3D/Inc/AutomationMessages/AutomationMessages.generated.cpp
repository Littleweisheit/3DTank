// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AutomationMessages.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AutomationMessages() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationEvent();

	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
	AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
	AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
class UScriptStruct* FAutomationWorkerImageComparisonResults::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerImageComparisonResults(FAutomationWorkerImageComparisonResults::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerImageComparisonResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerImageComparisonResults")),new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerImageComparisonResults"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>, EStructFlags(0x00000001));
			UProperty* NewProp_ErrorMessage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ErrorMessage"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ErrorMessage, FAutomationWorkerImageComparisonResults), 0x0010000000000001);
			UProperty* NewProp_GlobalDifference = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GlobalDifference"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(GlobalDifference, FAutomationWorkerImageComparisonResults), 0x0010000000000001);
			UProperty* NewProp_MaxLocalDifference = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxLocalDifference"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(MaxLocalDifference, FAutomationWorkerImageComparisonResults), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSimilar, FAutomationWorkerImageComparisonResults, bool);
			UProperty* NewProp_bSimilar = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSimilar"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSimilar, FAutomationWorkerImageComparisonResults), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bSimilar, FAutomationWorkerImageComparisonResults), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNew, FAutomationWorkerImageComparisonResults, bool);
			UProperty* NewProp_bNew = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bNew"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNew, FAutomationWorkerImageComparisonResults), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bNew, FAutomationWorkerImageComparisonResults), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is sent in containing a screen shot run during performance test."));
			MetaData->SetValue(NewProp_ErrorMessage, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ErrorMessage, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_GlobalDifference, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_GlobalDifference, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_MaxLocalDifference, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_MaxLocalDifference, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bSimilar, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bSimilar, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bSimilar, TEXT("ToolTip"), TEXT("Were the images similar?  If they're not you should log an error."));
			MetaData->SetValue(NewProp_bNew, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bNew, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bNew, TEXT("ToolTip"), TEXT("Was this a new image we've never seen before and have no ground truth for?"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC() { return 3386164110U; }
class UScriptStruct* FAutomationWorkerScreenImage::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerScreenImage(FAutomationWorkerScreenImage::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerScreenImage"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerScreenImage")),new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerScreenImage"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>, EStructFlags(0x00000001));
			UProperty* NewProp_Metadata = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Metadata"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Metadata, FAutomationWorkerScreenImage), 0x0010000000000001, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata());
			UProperty* NewProp_ScreenShotName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ScreenShotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ScreenShotName, FAutomationWorkerScreenImage), 0x0010000000000001);
			UProperty* NewProp_ScreenImage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ScreenImage"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ScreenImage, FAutomationWorkerScreenImage), 0x0010000000000001);
			UProperty* NewProp_ScreenImage_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ScreenImage, TEXT("ScreenImage"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is sent in containing a screen shot run during performance test."));
			MetaData->SetValue(NewProp_Metadata, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Metadata, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ScreenShotName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ScreenShotName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ScreenShotName, TEXT("ToolTip"), TEXT("The screen shot name."));
			MetaData->SetValue(NewProp_ScreenImage, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ScreenImage, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ScreenImage, TEXT("ToolTip"), TEXT("The screen shot data."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC() { return 567667119U; }
class UScriptStruct* FAutomationScreenshotMetadata::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationScreenshotMetadata(FAutomationScreenshotMetadata::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationScreenshotMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationScreenshotMetadata")),new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationScreenshotMetadata"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreColors, FAutomationScreenshotMetadata, bool);
			UProperty* NewProp_bIgnoreColors = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreColors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreColors, FAutomationScreenshotMetadata), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreColors, FAutomationScreenshotMetadata), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreAntiAliasing, FAutomationScreenshotMetadata, bool);
			UProperty* NewProp_bIgnoreAntiAliasing = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreAntiAliasing"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreAntiAliasing, FAutomationScreenshotMetadata), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreAntiAliasing, FAutomationScreenshotMetadata), sizeof(bool), true);
			UProperty* NewProp_MaximumGlobalError = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaximumGlobalError"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaximumGlobalError, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_MaximumLocalError = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaximumLocalError"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaximumLocalError, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceMaxBrightness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceMaxBrightness"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceMaxBrightness, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceMinBrightness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceMinBrightness"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceMinBrightness, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceAlpha = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceAlpha"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceAlpha, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceBlue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceBlue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceBlue, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceGreen = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceGreen"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceGreen, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ToleranceRed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToleranceRed"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ToleranceRed, FAutomationScreenshotMetadata), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasComparisonRules, FAutomationScreenshotMetadata, bool);
			UProperty* NewProp_bHasComparisonRules = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bHasComparisonRules"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasComparisonRules, FAutomationScreenshotMetadata), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bHasComparisonRules, FAutomationScreenshotMetadata), sizeof(bool), true);
			UProperty* NewProp_FoliageQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FoliageQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FoliageQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_EffectsQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EffectsQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(EffectsQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_TextureQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextureQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TextureQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_PostProcessQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PostProcessQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PostProcessQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ShadowQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShadowQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ShadowQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_AntiAliasingQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AntiAliasingQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AntiAliasingQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ViewDistanceQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ViewDistanceQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ViewDistanceQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_ResolutionQuality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ResolutionQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ResolutionQuality, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_UniqueDeviceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UniqueDeviceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UniqueDeviceId, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_AdapterUserDriverVersion = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdapterUserDriverVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AdapterUserDriverVersion, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_AdapterInternalDriverVersion = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdapterInternalDriverVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AdapterInternalDriverVersion, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_AdapterName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdapterName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AdapterName, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Vendor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Vendor"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Vendor, FAutomationScreenshotMetadata), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsStereo, FAutomationScreenshotMetadata, bool);
			UProperty* NewProp_bIsStereo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsStereo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsStereo, FAutomationScreenshotMetadata), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIsStereo, FAutomationScreenshotMetadata), sizeof(bool), true);
			UProperty* NewProp_FeatureLevel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FeatureLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FeatureLevel, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Platform = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Platform"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Platform, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Rhi = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rhi"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Rhi, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Height = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Height"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Height, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Width, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Commit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Commit"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Commit, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Id = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Id"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Id, FAutomationScreenshotMetadata), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_Context = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Context"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Context, FAutomationScreenshotMetadata), 0x0010000000000001);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FAutomationScreenshotMetadata), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bIgnoreColors, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bIgnoreColors, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bIgnoreAntiAliasing, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bIgnoreAntiAliasing, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_MaximumGlobalError, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_MaximumGlobalError, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_MaximumLocalError, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_MaximumLocalError, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceMaxBrightness, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceMaxBrightness, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceMinBrightness, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceMinBrightness, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceAlpha, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceAlpha, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceBlue, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceBlue, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceGreen, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceGreen, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ToleranceRed, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ToleranceRed, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bHasComparisonRules, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bHasComparisonRules, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bHasComparisonRules, TEXT("ToolTip"), TEXT("Comparison Requests"));
			MetaData->SetValue(NewProp_FoliageQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_FoliageQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_EffectsQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_EffectsQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TextureQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TextureQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_PostProcessQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_PostProcessQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ShadowQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ShadowQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_AntiAliasingQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AntiAliasingQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ViewDistanceQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ViewDistanceQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ResolutionQuality, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ResolutionQuality, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ResolutionQuality, TEXT("ToolTip"), TEXT("Quality Levels"));
			MetaData->SetValue(NewProp_UniqueDeviceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_UniqueDeviceId, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_AdapterUserDriverVersion, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AdapterUserDriverVersion, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_AdapterInternalDriverVersion, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AdapterInternalDriverVersion, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_AdapterName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AdapterName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Vendor, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Vendor, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Vendor, TEXT("ToolTip"), TEXT("Hardware Details"));
			MetaData->SetValue(NewProp_bIsStereo, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bIsStereo, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_FeatureLevel, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_FeatureLevel, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Platform, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Platform, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Rhi, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Rhi, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Rhi, TEXT("ToolTip"), TEXT("RHI Details"));
			MetaData->SetValue(NewProp_Height, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Height, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Width, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Width, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Commit, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Commit, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Id, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Id, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Context, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Context, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC() { return 1284002269U; }
class UScriptStruct* FAutomationWorkerNextNetworkCommandReply::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply(FAutomationWorkerNextNetworkCommandReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerNextNetworkCommandReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerNextNetworkCommandReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerNextNetworkCommandReply"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC() { return 1205967843U; }
class UScriptStruct* FAutomationWorkerRequestNextNetworkCommand::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand(FAutomationWorkerRequestNextNetworkCommand::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestNextNetworkCommand"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestNextNetworkCommand")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRequestNextNetworkCommand"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>, EStructFlags(0x00000001));
			UProperty* NewProp_ExecutionCount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExecutionCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(ExecutionCount, FAutomationWorkerRequestNextNetworkCommand), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC() { return 1619715539U; }
class UScriptStruct* FAutomationWorkerRunTestsReply::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTestsReply(FAutomationWorkerRunTestsReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTestsReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTestsReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRunTestsReply"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Success, FAutomationWorkerRunTestsReply, bool);
			UProperty* NewProp_Success = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Success, FAutomationWorkerRunTestsReply), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(Success, FAutomationWorkerRunTestsReply), sizeof(bool), true);
			UProperty* NewProp_ExecutionCount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExecutionCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(ExecutionCount, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			UProperty* NewProp_Duration = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Duration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Duration, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			UProperty* NewProp_ErrorTotal = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ErrorTotal"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ErrorTotal, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			UProperty* NewProp_WarningTotal = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WarningTotal"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WarningTotal, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAutomationEvent());
			UProperty* NewProp_TestName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TestName, FAutomationWorkerRunTestsReply), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is sent in response to FAutomationWorkerRunTests."));
			MetaData->SetValue(NewProp_Success, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Success, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Duration, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Duration, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ErrorTotal, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ErrorTotal, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_WarningTotal, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_WarningTotal, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Events, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Events, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TestName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TestName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC() { return 820899652U; }
class UScriptStruct* FAutomationWorkerRunTests::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTests(FAutomationWorkerRunTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRunTests"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSendAnalytics, FAutomationWorkerRunTests, bool);
			UProperty* NewProp_bSendAnalytics = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSendAnalytics"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSendAnalytics, FAutomationWorkerRunTests), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bSendAnalytics, FAutomationWorkerRunTests), sizeof(bool), true);
			UProperty* NewProp_BeautifiedTestName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BeautifiedTestName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BeautifiedTestName, FAutomationWorkerRunTests), 0x0010000000000000);
			UProperty* NewProp_TestName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TestName, FAutomationWorkerRunTests), 0x0010000000000001);
			UProperty* NewProp_RoleIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoleIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RoleIndex, FAutomationWorkerRunTests), 0x0010000000000001);
			UProperty* NewProp_ExecutionCount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExecutionCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(ExecutionCount, FAutomationWorkerRunTests), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message to request the running of automation tests on a worker."));
			MetaData->SetValue(NewProp_bSendAnalytics, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_bSendAnalytics, TEXT("ToolTip"), TEXT("If true, send results to analytics when complete"));
			MetaData->SetValue(NewProp_BeautifiedTestName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_BeautifiedTestName, TEXT("ToolTip"), TEXT("Holds the name of the test to run."));
			MetaData->SetValue(NewProp_TestName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TestName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TestName, TEXT("ToolTip"), TEXT("Holds the name of the test to run."));
			MetaData->SetValue(NewProp_RoleIndex, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_RoleIndex, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ExecutionCount, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC() { return 2378562738U; }
class UScriptStruct* FAutomationWorkerRequestTestsReplyComplete::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete(FAutomationWorkerRequestTestsReplyComplete::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTestsReplyComplete"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTestsReplyComplete")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRequestTestsReplyComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC() { return 1836674576U; }
class UScriptStruct* FAutomationWorkerRequestTestsReply::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReply"), sizeof(FAutomationWorkerRequestTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTestsReply(FAutomationWorkerRequestTestsReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTestsReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTestsReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTestsReply"), sizeof(FAutomationWorkerRequestTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRequestTestsReply"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReply>, EStructFlags(0x00000001));
			UProperty* NewProp_TotalNumTests = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TotalNumTests"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TotalNumTests, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_NumParticipantsRequired = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NumParticipantsRequired"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(NumParticipantsRequired, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_TestFlags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(TestFlags, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_OpenCommand = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OpenCommand"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(OpenCommand, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_AssetPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssetPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AssetPath, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_SourceFileLine = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SourceFileLine"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SourceFileLine, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_SourceFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SourceFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SourceFile, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_TestParameter = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TestParameter, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_TestName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TestName, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_FullTestPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FullTestPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FullTestPath, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			UProperty* NewProp_DisplayName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DisplayName, FAutomationWorkerRequestTestsReply), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is sent in response to FAutomationWorkerRequestTests."));
			MetaData->SetValue(NewProp_TotalNumTests, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TotalNumTests, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TotalNumTests, TEXT("ToolTip"), TEXT("Holds the total number of tests returned."));
			MetaData->SetValue(NewProp_NumParticipantsRequired, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_NumParticipantsRequired, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TestFlags, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TestFlags, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_OpenCommand, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_OpenCommand, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_AssetPath, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AssetPath, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_SourceFileLine, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SourceFileLine, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_SourceFile, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SourceFile, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TestParameter, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TestParameter, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_TestName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TestName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_FullTestPath, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_FullTestPath, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_DisplayName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReply_CRC() { return 1985541376U; }
class UScriptStruct* FAutomationWorkerRequestTests::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTests(FAutomationWorkerRequestTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerRequestTests"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>, EStructFlags(0x00000001));
			UProperty* NewProp_RequestedTestFlags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RequestedTestFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(RequestedTestFlags, FAutomationWorkerRequestTests), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(DeveloperDirectoryIncluded, FAutomationWorkerRequestTests, bool);
			UProperty* NewProp_DeveloperDirectoryIncluded = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeveloperDirectoryIncluded"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DeveloperDirectoryIncluded, FAutomationWorkerRequestTests), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(DeveloperDirectoryIncluded, FAutomationWorkerRequestTests), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message for requesting available automation tests from a worker."));
			MetaData->SetValue(NewProp_RequestedTestFlags, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_RequestedTestFlags, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_RequestedTestFlags, TEXT("ToolTip"), TEXT("Holds a flag indicating which tests we'd like to request."));
			MetaData->SetValue(NewProp_DeveloperDirectoryIncluded, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_DeveloperDirectoryIncluded, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_DeveloperDirectoryIncluded, TEXT("ToolTip"), TEXT("Holds a flag indicating whether the developer directory should be included."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC() { return 1848453496U; }
class UScriptStruct* FAutomationWorkerPong::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPong, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPong(FAutomationWorkerPong::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPong"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPong")),new UScriptStruct::TCppStructOps<FAutomationWorkerPong>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerPong"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerPong>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC() { return 2733308157U; }
class UScriptStruct* FAutomationWorkerResetTests::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerResetTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerResetTests(FAutomationWorkerResetTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerResetTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerResetTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerResetTests"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC() { return 3781175634U; }
class UScriptStruct* FAutomationWorkerPing::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPing, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPing(FAutomationWorkerPing::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPing"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPing")),new UScriptStruct::TCppStructOps<FAutomationWorkerPing>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerPing"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerPing>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC() { return 2445158427U; }
class UScriptStruct* FAutomationWorkerWorkerOffline::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerWorkerOffline(FAutomationWorkerWorkerOffline::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerWorkerOffline"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerWorkerOffline")),new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerWorkerOffline"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that notifies automation controllers that a worker went off-line."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC() { return 4238107428U; }
class UScriptStruct* FAutomationWorkerFindWorkersResponse::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkersResponse(FAutomationWorkerFindWorkersResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkersResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerFindWorkersResponse"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>, EStructFlags(0x00000001));
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FAutomationWorkerFindWorkersResponse), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_RenderModeName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RenderModeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RenderModeName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_RAMInGB = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RAMInGB"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(RAMInGB, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_CPUModelName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CPUModelName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CPUModelName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_GPUName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GPUName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GPUName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_ModelName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ModelName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ModelName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_OSVersionName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OSVersionName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(OSVersionName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_Platform = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Platform"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Platform, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_InstanceName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(InstanceName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			UProperty* NewProp_DeviceName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeviceName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DeviceName, FAutomationWorkerFindWorkersResponse), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is sent in response to FAutomationWorkerFindWorkers."));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ToolTip"), TEXT("Holds the worker's application session identifier."));
			MetaData->SetValue(NewProp_RenderModeName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_RenderModeName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_RenderModeName, TEXT("ToolTip"), TEXT("Holds the name of the current render mode."));
			MetaData->SetValue(NewProp_RAMInGB, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_RAMInGB, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_RAMInGB, TEXT("ToolTip"), TEXT("Holds the amount of RAM this device has in gigabytes."));
			MetaData->SetValue(NewProp_CPUModelName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_CPUModelName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_CPUModelName, TEXT("ToolTip"), TEXT("Holds the name of the CPU model."));
			MetaData->SetValue(NewProp_GPUName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_GPUName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_GPUName, TEXT("ToolTip"), TEXT("Holds the name of the GPU."));
			MetaData->SetValue(NewProp_ModelName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ModelName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ModelName, TEXT("ToolTip"), TEXT("Holds the name of the device model."));
			MetaData->SetValue(NewProp_OSVersionName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_OSVersionName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_OSVersionName, TEXT("ToolTip"), TEXT("Holds the name of the operating system version."));
			MetaData->SetValue(NewProp_Platform, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Platform, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Platform, TEXT("ToolTip"), TEXT("Holds the name of the platform that the worker is running on."));
			MetaData->SetValue(NewProp_InstanceName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_InstanceName, TEXT("ToolTip"), TEXT("Holds the name of the worker's application instance."));
			MetaData->SetValue(NewProp_DeviceName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_DeviceName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_DeviceName, TEXT("ToolTip"), TEXT("Holds the name of the device that the worker is running on."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC() { return 1568577035U; }
class UScriptStruct* FAutomationWorkerFindWorkers::StaticStruct()
{
	extern AUTOMATIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkers(FAutomationWorkerFindWorkers::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkers"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkers")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationWorkerFindWorkers"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>, EStructFlags(0x00000001));
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FAutomationWorkerFindWorkers), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_ProcessName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ProcessName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ProcessName, FAutomationWorkerFindWorkers), 0x0010000000000001);
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GameName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GameName, FAutomationWorkerFindWorkers), 0x0010000000000001);
			UProperty* NewProp_Changelist = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Changelist"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Changelist, FAutomationWorkerFindWorkers), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is published to find automation workers."));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ToolTip"), TEXT("Holds the session identifier to find workers for."));
			MetaData->SetValue(NewProp_ProcessName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ProcessName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_ProcessName, TEXT("ToolTip"), TEXT("The name of the process."));
			MetaData->SetValue(NewProp_GameName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_GameName, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_GameName, TEXT("ToolTip"), TEXT("The name of the game."));
			MetaData->SetValue(NewProp_Changelist, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Changelist, TEXT("ModuleRelativePath"), TEXT("Classes/AutomationWorkerMessages.h"));
			MetaData->SetValue(NewProp_Changelist, TEXT("ToolTip"), TEXT("Holds the change list number to find workers for."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC() { return 4288938261U; }
	UPackage* Z_Construct_UPackage__Script_AutomationMessages()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AutomationMessages")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x1386B66A;
			Guid.B = 0xDB61FF9C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
