// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AudioMixer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AudioMixer() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API class UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	ENGINE_API class UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API class UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundWaveProcedural();
	ENGINE_API class UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API class UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API class UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();

	AUDIOMIXER_API class UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	AUDIOMIXER_API class UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary();
	AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectReverbPreset();
	AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
	AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthSound_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthSound();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USynthComponent_Start();
	AUDIOMIXER_API class UFunction* Z_Construct_UFunction_USynthComponent_Stop();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthComponent_NoRegister();
	AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthComponent();
	AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsPeakMode(ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsPeakMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsPeakMode"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESubmixEffectDynamicsPeakMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsPeakMode::MeanSquared"), 0);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsPeakMode::RootMeanSquared"), 1);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsPeakMode::Peak"), 2);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsPeakMode::Count"), 3);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsPeakMode::ESubmixEffectDynamicsPeakMode_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESubmixEffectDynamicsPeakMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Count.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_CRC() { return 3929648014U; }
static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsProcessorType(ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsProcessorType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsProcessorType"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESubmixEffectDynamicsProcessorType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::Compressor"), 0);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::Limiter"), 1);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::Expander"), 2);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::Gate"), 3);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::Count"), 4);
			EnumNames.Emplace(TEXT("ESubmixEffectDynamicsProcessorType::ESubmixEffectDynamicsProcessorType_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESubmixEffectDynamicsProcessorType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Count.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_CRC() { return 3947259290U; }
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings(FSubmixEffectDynamicsProcessorSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectDynamicsProcessorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDynamicsProcessorSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubmixEffectDynamicsProcessorSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAnalogMode, FSubmixEffectDynamicsProcessorSettings, uint8);
			UProperty* NewProp_bAnalogMode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAnalogMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAnalogMode, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAnalogMode, FSubmixEffectDynamicsProcessorSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bChannelLinked, FSubmixEffectDynamicsProcessorSettings, uint8);
			UProperty* NewProp_bChannelLinked = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bChannelLinked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bChannelLinked, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bChannelLinked, FSubmixEffectDynamicsProcessorSettings), sizeof(uint8), false);
			UProperty* NewProp_OutputGainDb = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OutputGainDb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OutputGainDb, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_InputGainDb = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InputGainDb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InputGainDb, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_KneeBandwidthDb = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KneeBandwidthDb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(KneeBandwidthDb, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_Ratio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Ratio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Ratio, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_ThresholdDb = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ThresholdDb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ThresholdDb, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_ReleaseTimeMsec = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReleaseTimeMsec"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReleaseTimeMsec, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_AttackTimeMsec = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AttackTimeMsec"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AttackTimeMsec, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_LookAheadMsec = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LookAheadMsec"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LookAheadMsec, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005);
			UProperty* NewProp_PeakMode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PeakMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PeakMode, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode());
			UProperty* NewProp_PeakMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PeakMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_DynamicsProcessorType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DynamicsProcessorType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(DynamicsProcessorType, FSubmixEffectDynamicsProcessorSettings), 0x0010000000000005, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType());
			UProperty* NewProp_DynamicsProcessorType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DynamicsProcessorType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A submix dynamics processor"));
			MetaData->SetValue(NewProp_bAnalogMode, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_bAnalogMode, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_bAnalogMode, TEXT("ToolTip"), TEXT("Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower."));
			MetaData->SetValue(NewProp_bChannelLinked, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_bChannelLinked, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_bChannelLinked, TEXT("ToolTip"), TEXT("Whether or not to average all channels of audio before inputing into the dynamics processor"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("ToolTip"), TEXT("The output gain of the dynamics processor in dB"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("UIMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_OutputGainDb, TEXT("UIMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("ClampMin"), TEXT("-12.0"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("ToolTip"), TEXT("The input gain of the dynamics processor in dB"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("UIMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_InputGainDb, TEXT("UIMin"), TEXT("-12.0"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("ToolTip"), TEXT("The knee bandwidth of the compressor to use in dB"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("UIMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_KneeBandwidthDb, TEXT("UIMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Ratio, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_Ratio, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_Ratio, TEXT("ClampMin"), TEXT("1.0"));
			MetaData->SetValue(NewProp_Ratio, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_Ratio, TEXT("ToolTip"), TEXT("The dynamics processor ratio -- has different meaning depending on the processor type."));
			MetaData->SetValue(NewProp_Ratio, TEXT("UIMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_Ratio, TEXT("UIMin"), TEXT("1.0"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("ClampMax"), TEXT("0.0"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("ClampMin"), TEXT("-60.0"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("ToolTip"), TEXT("The threshold at which to perform a dynamics processing operation"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("UIMax"), TEXT("0.0"));
			MetaData->SetValue(NewProp_ThresholdDb, TEXT("UIMin"), TEXT("-60.0"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("ClampMax"), TEXT("5000.0"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("ClampMin"), TEXT("20.0"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("ToolTip"), TEXT("The amount of time to release the dynamics processing effect in milliseconds"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("UIMax"), TEXT("5000.0"));
			MetaData->SetValue(NewProp_ReleaseTimeMsec, TEXT("UIMin"), TEXT("20.0"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("ClampMax"), TEXT("300.0"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("ClampMin"), TEXT("1.0"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("ToolTip"), TEXT("The amount of time to ramp into any dynamics processing effect in milliseconds."));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("UIMax"), TEXT("200.0"));
			MetaData->SetValue(NewProp_AttackTimeMsec, TEXT("UIMin"), TEXT("1.0"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("ClampMax"), TEXT("50.0"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("ToolTip"), TEXT("The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing."));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("UIMax"), TEXT("50.0"));
			MetaData->SetValue(NewProp_LookAheadMsec, TEXT("UIMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_PeakMode, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_PeakMode, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_DynamicsProcessorType, TEXT("Category"), TEXT("SourceEffect|Preset"));
			MetaData->SetValue(NewProp_DynamicsProcessorType, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC() { return 2647571082U; }
	void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
	{
		UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetSettings", (Native)&USubmixEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSubmixEffectDynamicsProcessorSettings InSettings;
		};
		UObject* Outer=Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms));
			UProperty* NewProp_InSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InSettings, SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
			MetaData->SetValue(NewProp_InSettings, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USoundEffectSubmixPreset();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = USubmixEffectDynamicsProcessorPreset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20101080;

				OuterClass->LinkChild(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, USubmixEffectDynamicsProcessorPreset), 0x0010000000000005, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings(), "SetSettings"); // 3949654204
				static TCppClassTypeInfo<TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("AudioSourceEffect"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
				MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("SubmixEffectPreset"));
				MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectDynamicsProcessorPreset, 2489575277);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectDynamicsProcessorPreset(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, &USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectDynamicsProcessorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
	void UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary()
	{
		UClass* Class = UAudioMixerBlueprintLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddMasterSubmixEffect", (Native)&UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect },
			{ "AddSourceEffectToPresetChain", (Native)&UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain },
			{ "ClearMasterSubmixEffects", (Native)&UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects },
			{ "GetNumberOfEntriesInSourceEffectChain", (Native)&UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain },
			{ "RemoveMasterSubmixEffect", (Native)&UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect },
			{ "RemoveSourceEffectFromPresetChain", (Native)&UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain },
			{ "SetBypassSourceEffectChainEntry", (Native)&UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 7);
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect()
	{
		struct AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddMasterSubmixEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms));
			UProperty* NewProp_SubmixEffectPreset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubmixEffectPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SubmixEffectPreset, AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds a submix effect preset to the master submix."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain()
	{
		struct AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			FSourceEffectChainEntry Entry;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddSourceEffectToPresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms));
			UProperty* NewProp_Entry = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Entry"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Entry, AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSourceEffectChainEntry());
			UProperty* NewProp_PresetChain = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PresetChain, AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds source effect entry to preset chain. Only effects the instance of the preset chain"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects()
	{
		struct AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearMasterSubmixEffects"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears all master submix effects."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain()
	{
		struct AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumberOfEntriesInSourceEffectChain"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), 0x0010000000000580);
			UProperty* NewProp_PresetChain = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PresetChain, AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the number of effect chain entries in the given source effect chain."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect()
	{
		struct AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveMasterSubmixEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms));
			UProperty* NewProp_SubmixEffectPreset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SubmixEffectPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SubmixEffectPreset, AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Removes a submix effect preset from the master submix."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain()
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveSourceEffectFromPresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms));
			UProperty* NewProp_EntryIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EntryIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(EntryIndex, AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), 0x0010000000000080);
			UProperty* NewProp_PresetChain = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PresetChain, AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds source effect entry to preset chain. Only affects the instance of preset chain."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry()
	{
		struct AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
			bool bBypassed;
		};
		UObject* Outer=Z_Construct_UClass_UAudioMixerBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBypassSourceEffectChainEntry"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBypassed, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, bool);
			UProperty* NewProp_bBypassed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBypassed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBypassed, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBypassed, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), sizeof(bool), true);
			UProperty* NewProp_EntryIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EntryIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(EntryIndex, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), 0x0010000000000080);
			UProperty* NewProp_PresetChain = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PresetChain"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PresetChain, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), 0x0010000000000080, Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set whether or not to bypass the effect at the source effect chain index."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = UAudioMixerBlueprintLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain());
				OuterClass->LinkChild(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect(), "AddMasterSubmixEffect"); // 2606797452
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain(), "AddSourceEffectToPresetChain"); // 2751535594
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects(), "ClearMasterSubmixEffects"); // 3283780561
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain(), "GetNumberOfEntriesInSourceEffectChain"); // 1347642684
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect(), "RemoveMasterSubmixEffect"); // 4043667003
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain(), "RemoveSourceEffectFromPresetChain"); // 3010207951
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry(), "SetBypassSourceEffectChainEntry"); // 3226657582
				static TCppClassTypeInfo<TCppClassTypeTraits<UAudioMixerBlueprintLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AudioMixerBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AudioMixerBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioMixerBlueprintLibrary, 1910400730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioMixerBlueprintLibrary(Z_Construct_UClass_UAudioMixerBlueprintLibrary, &UAudioMixerBlueprintLibrary::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UAudioMixerBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerBlueprintLibrary);
class UScriptStruct* FSubmixEffectReverbSettings::StaticStruct()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings();
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectReverbSettings(FSubmixEffectReverbSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectReverbSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubmixEffectReverbSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>, EStructFlags(0x00000201));
			UProperty* NewProp_WetLevel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WetLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WetLevel, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_AirAbsorptionGainHF = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AirAbsorptionGainHF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AirAbsorptionGainHF, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_LateDelay = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LateDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LateDelay, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_LateGain = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LateGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LateGain, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_ReflectionsDelay = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReflectionsDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReflectionsDelay, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_ReflectionsGain = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReflectionsGain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReflectionsGain, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_DecayHFRatio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DecayHFRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecayHFRatio, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_DecayTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DecayTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecayTime, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_GainHF = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GainHF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GainHF, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_Gain = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Gain"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Gain, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_Diffusion = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Diffusion"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Diffusion, FSubmixEffectReverbSettings), 0x0010000000000005);
			UProperty* NewProp_Density = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Density"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Density, FSubmixEffectReverbSettings), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_WetLevel, TEXT("Category"), TEXT("Reverb"));
			MetaData->SetValue(NewProp_WetLevel, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_WetLevel, TEXT("ToolTip"), TEXT("Overall wetlevel of the reverb effect"));
			MetaData->SetValue(NewProp_AirAbsorptionGainHF, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_AirAbsorptionGainHF, TEXT("ClampMax"), TEXT("1.0"));
			MetaData->SetValue(NewProp_AirAbsorptionGainHF, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_AirAbsorptionGainHF, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_AirAbsorptionGainHF, TEXT("ToolTip"), TEXT("Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption"));
			MetaData->SetValue(NewProp_LateDelay, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_LateDelay, TEXT("ClampMax"), TEXT("0.1"));
			MetaData->SetValue(NewProp_LateDelay, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_LateDelay, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_LateDelay, TEXT("ToolTip"), TEXT("Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections"));
			MetaData->SetValue(NewProp_LateGain, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_LateGain, TEXT("ClampMax"), TEXT("10.0"));
			MetaData->SetValue(NewProp_LateGain, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_LateGain, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_LateGain, TEXT("ToolTip"), TEXT("Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb"));
			MetaData->SetValue(NewProp_ReflectionsDelay, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_ReflectionsDelay, TEXT("ClampMax"), TEXT("0.3"));
			MetaData->SetValue(NewProp_ReflectionsDelay, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_ReflectionsDelay, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_ReflectionsDelay, TEXT("ToolTip"), TEXT("Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection"));
			MetaData->SetValue(NewProp_ReflectionsGain, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_ReflectionsGain, TEXT("ClampMax"), TEXT("3.16"));
			MetaData->SetValue(NewProp_ReflectionsGain, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_ReflectionsGain, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_ReflectionsGain, TEXT("ToolTip"), TEXT("Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections"));
			MetaData->SetValue(NewProp_DecayHFRatio, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_DecayHFRatio, TEXT("ClampMax"), TEXT("2.0"));
			MetaData->SetValue(NewProp_DecayHFRatio, TEXT("ClampMin"), TEXT("0.1"));
			MetaData->SetValue(NewProp_DecayHFRatio, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_DecayHFRatio, TEXT("ToolTip"), TEXT("Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies."));
			MetaData->SetValue(NewProp_DecayTime, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_DecayTime, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_DecayTime, TEXT("ClampMin"), TEXT("0.1"));
			MetaData->SetValue(NewProp_DecayTime, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_DecayTime, TEXT("ToolTip"), TEXT("Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb"));
			MetaData->SetValue(NewProp_GainHF, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_GainHF, TEXT("ClampMax"), TEXT("1.0"));
			MetaData->SetValue(NewProp_GainHF, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_GainHF, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_GainHF, TEXT("ToolTip"), TEXT("Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound"));
			MetaData->SetValue(NewProp_Gain, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_Gain, TEXT("ClampMax"), TEXT("1.0"));
			MetaData->SetValue(NewProp_Gain, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Gain, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_Gain, TEXT("ToolTip"), TEXT("Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control"));
			MetaData->SetValue(NewProp_Diffusion, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_Diffusion, TEXT("ClampMax"), TEXT("1.0"));
			MetaData->SetValue(NewProp_Diffusion, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Diffusion, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_Diffusion, TEXT("ToolTip"), TEXT("Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy"));
			MetaData->SetValue(NewProp_Density, TEXT("Category"), TEXT("ReverbParameters"));
			MetaData->SetValue(NewProp_Density, TEXT("ClampMax"), TEXT("1.0"));
			MetaData->SetValue(NewProp_Density, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Density, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_Density, TEXT("ToolTip"), TEXT("Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC() { return 2308279499U; }
	void USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset()
	{
		UClass* Class = USubmixEffectReverbPreset::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetSettings", (Native)&USubmixEffectReverbPreset::execSetSettings },
			{ "SetSettingsWithReverbEffect", (Native)&USubmixEffectReverbPreset::execSetSettingsWithReverbEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings()
	{
		struct SubmixEffectReverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectReverbSettings InSettings;
		};
		UObject* Outer=Z_Construct_UClass_USubmixEffectReverbPreset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(SubmixEffectReverbPreset_eventSetSettings_Parms));
			UProperty* NewProp_InSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InSettings, SubmixEffectReverbPreset_eventSetSettings_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FSubmixEffectReverbSettings());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_InSettings, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect()
	{
		struct SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms
		{
			const UReverbEffect* InReverbEffect;
			float WetLevel;
		};
		UObject* Outer=Z_Construct_UClass_USubmixEffectReverbPreset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSettingsWithReverbEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms));
			UProperty* NewProp_WetLevel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WetLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WetLevel, SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms), 0x0010000000000082);
			UProperty* NewProp_InReverbEffect = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InReverbEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InReverbEffect, SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms), 0x0010000000000082, Z_Construct_UClass_UReverbEffect_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
			MetaData->SetValue(NewProp_WetLevel, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_InReverbEffect, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister()
	{
		return USubmixEffectReverbPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USoundEffectSubmixPreset();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = USubmixEffectReverbPreset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20101080;

				OuterClass->LinkChild(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings());
				OuterClass->LinkChild(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, USubmixEffectReverbPreset), 0x0010000000000005, Z_Construct_UScriptStruct_FSubmixEffectReverbSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings(), "SetSettings"); // 3324314533
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect(), "SetSettingsWithReverbEffect"); // 343192893
				static TCppClassTypeInfo<TCppClassTypeTraits<USubmixEffectReverbPreset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubmixEffects/AudioMixerSubmixEffectReverb.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
				MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("SubmixEffectPreset"));
				MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectReverbPreset, 2498654720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectReverbPreset(Z_Construct_UClass_USubmixEffectReverbPreset, &USubmixEffectReverbPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectReverbPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbPreset);
class UScriptStruct* FSubmixEffectSubmixEQSettings::StaticStruct()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectSubmixEQSettings(FSubmixEffectSubmixEQSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectSubmixEQSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectSubmixEQSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubmixEffectSubmixEQSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_EQBands = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EQBands"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EQBands, FSubmixEffectSubmixEQSettings), 0x0010000000000005);
			UProperty* NewProp_EQBands_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EQBands, TEXT("EQBands"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSubmixEffectEQBand());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("EQ submix effect"));
			MetaData->SetValue(NewProp_EQBands, TEXT("Category"), TEXT("SubmixEffect|Preset"));
			MetaData->SetValue(NewProp_EQBands, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_EQBands, TEXT("ToolTip"), TEXT("The EQ bands to use."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC() { return 3041971122U; }
class UScriptStruct* FSubmixEffectEQBand::StaticStruct()
{
	extern AUDIOMIXER_API class UPackage* Z_Construct_UPackage__Script_AudioMixer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectEQBand(FSubmixEffectEQBand::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectEQBand"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectEQBand")),new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubmixEffectEQBand"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FSubmixEffectEQBand, uint8);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FSubmixEffectEQBand), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FSubmixEffectEQBand), sizeof(uint8), false);
			UProperty* NewProp_GainDb = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GainDb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GainDb, FSubmixEffectEQBand), 0x0010000000000005);
			UProperty* NewProp_Bandwidth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bandwidth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Bandwidth, FSubmixEffectEQBand), 0x0010000000000005);
			UProperty* NewProp_Frequency = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Frequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Frequency, FSubmixEffectEQBand), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A multiband EQ submix effect."));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("SubmixEffect|Preset"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_GainDb, TEXT("Category"), TEXT("SubmixEffect|Preset"));
			MetaData->SetValue(NewProp_GainDb, TEXT("ClampMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_GainDb, TEXT("ClampMin"), TEXT("-90.0"));
			MetaData->SetValue(NewProp_GainDb, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_GainDb, TEXT("UIMax"), TEXT("20.0"));
			MetaData->SetValue(NewProp_GainDb, TEXT("UIMin"), TEXT("-90.0"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("Category"), TEXT("SubmixEffect|Preset"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("ClampMax"), TEXT("10.0"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("UIMax"), TEXT("10.0"));
			MetaData->SetValue(NewProp_Bandwidth, TEXT("UIMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Frequency, TEXT("Category"), TEXT("SubmixEffect|Preset"));
			MetaData->SetValue(NewProp_Frequency, TEXT("ClampMax"), TEXT("20000.0"));
			MetaData->SetValue(NewProp_Frequency, TEXT("ClampMin"), TEXT("0.0"));
			MetaData->SetValue(NewProp_Frequency, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_Frequency, TEXT("UIMax"), TEXT("15000.0"));
			MetaData->SetValue(NewProp_Frequency, TEXT("UIMin"), TEXT("0.0"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC() { return 4079001265U; }
	void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset()
	{
		UClass* Class = USubmixEffectSubmixEQPreset::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetSettings", (Native)&USubmixEffectSubmixEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings()
	{
		struct SubmixEffectSubmixEQPreset_eventSetSettings_Parms
		{
			FSubmixEffectSubmixEQSettings InSettings;
		};
		UObject* Outer=Z_Construct_UClass_USubmixEffectSubmixEQPreset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(SubmixEffectSubmixEQPreset_eventSetSettings_Parms));
			UProperty* NewProp_InSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InSettings, SubmixEffectSubmixEQPreset_eventSetSettings_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Effects"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
			MetaData->SetValue(NewProp_InSettings, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USoundEffectSubmixPreset();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = USubmixEffectSubmixEQPreset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20101080;

				OuterClass->LinkChild(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, USubmixEffectSubmixEQPreset), 0x0010000000000005, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings(), "SetSettings"); // 2649702914
				static TCppClassTypeInfo<TCppClassTypeTraits<USubmixEffectSubmixEQPreset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("AudioSourceEffect"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubmixEffects/AudioMixerSubmixEffectEQ.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
				MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("SubmixEffectPreset"));
				MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectSubmixEQPreset, 1717248748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectSubmixEQPreset(Z_Construct_UClass_USubmixEffectSubmixEQPreset, &USubmixEffectSubmixEQPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectSubmixEQPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectSubmixEQPreset);
	void USynthSound::StaticRegisterNativesUSynthSound()
	{
	}
	UClass* Z_Construct_UClass_USynthSound_NoRegister()
	{
		return USynthSound::StaticClass();
	}
	UClass* Z_Construct_UClass_USynthSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USoundWaveProcedural();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = USynthSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20901080;


				static TCppClassTypeInfo<TCppClassTypeTraits<USynthSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Components/SynthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthSound, 1130969506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthSound(Z_Construct_UClass_USynthSound, &USynthSound::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSound);
	void USynthComponent::StaticRegisterNativesUSynthComponent()
	{
		UClass* Class = USynthComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsPlaying", (Native)&USynthComponent::execIsPlaying },
			{ "SetSubmixSend", (Native)&USynthComponent::execSetSubmixSend },
			{ "Start", (Native)&USynthComponent::execStart },
			{ "Stop", (Native)&USynthComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying()
	{
		struct SynthComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_USynthComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(SynthComponent_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SynthComponent_eventIsPlaying_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SynthComponent_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SynthComponent_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Synth|Components|Audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if this component is currently playing."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend()
	{
		struct SynthComponent_eventSetSubmixSend_Parms
		{
			USoundSubmix* Submix;
			float SendLevel;
		};
		UObject* Outer=Z_Construct_UClass_USynthComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSubmixSend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(SynthComponent_eventSetSubmixSend_Parms));
			UProperty* NewProp_SendLevel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SendLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SendLevel, SynthComponent_eventSetSubmixSend_Parms), 0x0010000000000080);
			UProperty* NewProp_Submix = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Submix"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Submix, SynthComponent_eventSetSubmixSend_Parms), 0x0010000000000080, Z_Construct_UClass_USoundSubmix_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|Components|Audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets how much audio the sound should send to the given submix."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_Start()
	{
		UObject* Outer=Z_Construct_UClass_USynthComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Synth|Components|Audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts the synth generating audio."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_Stop()
	{
		UObject* Outer=Z_Construct_UClass_USynthComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Synth|Components|Audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops the synth generating audio."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthComponent_NoRegister()
	{
		return USynthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USynthComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AudioMixer();
			OuterClass = USynthComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_USynthComponent_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_USynthComponent_SetSubmixSend());
				OuterClass->LinkChild(Z_Construct_UFunction_USynthComponent_Start());
				OuterClass->LinkChild(Z_Construct_UFunction_USynthComponent_Stop());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AudioComponent, USynthComponent), 0x0040000000082008, Z_Construct_UClass_UAudioComponent_NoRegister());
				UProperty* NewProp_Synth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Synth"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Synth, USynthComponent), 0x0040000000002000, Z_Construct_UClass_USynthSound_NoRegister());
				UProperty* NewProp_SoundSubmixSends = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundSubmixSends"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SoundSubmixSends, USynthComponent), 0x0010000000000005);
				UProperty* NewProp_SoundSubmixSends_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SoundSubmixSends, TEXT("SoundSubmixSends"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSoundSubmixSendInfo());
				UProperty* NewProp_SoundSubmix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundSubmix"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundSubmix, USynthComponent), 0x0010000000000001, Z_Construct_UClass_USoundSubmix_NoRegister());
				UProperty* NewProp_DefaultMasterReverbSendAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultMasterReverbSendAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultMasterReverbSendAmount, USynthComponent), 0x0010000000000005);
				UProperty* NewProp_SourceEffectChain = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SourceEffectChain"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SourceEffectChain, USynthComponent), 0x0010000000000001, Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister());
				UProperty* NewProp_SoundClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundClass, USynthComponent), 0x0010000000000001, Z_Construct_UClass_USoundClass_NoRegister());
				UProperty* NewProp_ConcurrencySettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ConcurrencySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcurrencySettings, USynthComponent), 0x0010000000000005, Z_Construct_UClass_USoundConcurrency_NoRegister());
				UProperty* NewProp_AttenuationOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AttenuationOverrides, USynthComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FSoundAttenuationSettings());
				UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, USynthComponent), 0x0010000000000005, Z_Construct_UClass_USoundAttenuation_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAttenuation, USynthComponent, uint8);
				UProperty* NewProp_bOverrideAttenuation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAttenuation, USynthComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverrideAttenuation, USynthComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowSpatialization, USynthComponent, uint8);
				UProperty* NewProp_bAllowSpatialization = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowSpatialization"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowSpatialization, USynthComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAllowSpatialization, USynthComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenOwnerDestroyed, USynthComponent, uint8);
				UProperty* NewProp_bStopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenOwnerDestroyed, USynthComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bStopWhenOwnerDestroyed, USynthComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoDestroy, USynthComponent, uint8);
				UProperty* NewProp_bAutoDestroy = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoDestroy, USynthComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bAutoDestroy, USynthComponent), sizeof(uint8), false);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USynthComponent_IsPlaying(), "IsPlaying"); // 2681463872
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USynthComponent_SetSubmixSend(), "SetSubmixSend"); // 2612918677
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USynthComponent_Start(), "Start"); // 3621112799
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USynthComponent_Stop(), "Stop"); // 2277591951
				static TCppClassTypeInfo<TCppClassTypeTraits<USynthComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Synth"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Components/SynthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_Synth, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_SoundSubmixSends, TEXT("Category"), TEXT("Effects"));
				MetaData->SetValue(NewProp_SoundSubmixSends, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_SoundSubmixSends, TEXT("ToolTip"), TEXT("An array of submix sends. Audio from this sound will send a portion of its audio to these effects."));
				MetaData->SetValue(NewProp_SoundSubmix, TEXT("Category"), TEXT("Effects"));
				MetaData->SetValue(NewProp_SoundSubmix, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_SoundSubmix, TEXT("ToolTip"), TEXT("Submix this sound belongs to"));
				MetaData->SetValue(NewProp_DefaultMasterReverbSendAmount, TEXT("Category"), TEXT("Effects"));
				MetaData->SetValue(NewProp_DefaultMasterReverbSendAmount, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_DefaultMasterReverbSendAmount, TEXT("ToolTip"), TEXT("The default send level to the master rerverb."));
				MetaData->SetValue(NewProp_SourceEffectChain, TEXT("Category"), TEXT("Effects"));
				MetaData->SetValue(NewProp_SourceEffectChain, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_SourceEffectChain, TEXT("ToolTip"), TEXT("The source effect chain to use for this sound."));
				MetaData->SetValue(NewProp_SoundClass, TEXT("Category"), TEXT("SoundClass"));
				MetaData->SetValue(NewProp_SoundClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_SoundClass, TEXT("ToolTip"), TEXT("Sound class this sound belongs to"));
				MetaData->SetValue(NewProp_ConcurrencySettings, TEXT("Category"), TEXT("Concurrency"));
				MetaData->SetValue(NewProp_ConcurrencySettings, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_ConcurrencySettings, TEXT("ToolTip"), TEXT("What sound concurrency to use for sounds generated by this audio component"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("EditCondition"), TEXT("bOverrideAttenuation"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("ToolTip"), TEXT("If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("EditCondition"), TEXT("!bOverrideAttenuation"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("ToolTip"), TEXT("If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("ToolTip"), TEXT("Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties"));
				MetaData->SetValue(NewProp_bAllowSpatialization, TEXT("Category"), TEXT("Attenuation"));
				MetaData->SetValue(NewProp_bAllowSpatialization, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_bAllowSpatialization, TEXT("ToolTip"), TEXT("Is this audio component allowed to be spatialized?"));
				MetaData->SetValue(NewProp_bStopWhenOwnerDestroyed, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_bStopWhenOwnerDestroyed, TEXT("ToolTip"), TEXT("Stop sound when owner is destroyed"));
				MetaData->SetValue(NewProp_bAutoDestroy, TEXT("ModuleRelativePath"), TEXT("Public/Components/SynthComponent.h"));
				MetaData->SetValue(NewProp_bAutoDestroy, TEXT("ToolTip"), TEXT("Auto destroy this component on completion"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthComponent, 1201879898);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthComponent(Z_Construct_UClass_USynthComponent, &USynthComponent::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponent);
	UPackage* Z_Construct_UPackage__Script_AudioMixer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AudioMixer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xE8F3071D;
			Guid.B = 0x52D95969;
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
