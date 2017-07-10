// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Localization.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Localization() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
	LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy();
	LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath();
	LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTarget();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationTargetSet();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister();
	LOCALIZATION_API class UClass* Z_Construct_UClass_ULocalizationSettings();
	LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
static UEnum* ELocalizedTextCollapseMode_StaticEnum()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizedTextCollapseMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizedTextCollapseMode(ELocalizedTextCollapseMode_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizedTextCollapseMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizedTextCollapseMode"), 0, Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ELocalizedTextCollapseMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ELocalizedTextCollapseMode::IdenticalTextIdAndSource"), 0);
			EnumNames.Emplace(TEXT("ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource"), 1);
			EnumNames.Emplace(TEXT("ELocalizedTextCollapseMode::IdenticalNamespaceAndSource"), 2);
			EnumNames.Emplace(TEXT("ELocalizedTextCollapseMode::ELocalizedTextCollapseMode_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ELocalizedTextCollapseMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalNamespaceAndSource.DisplayName"), TEXT("Identical Namespace and Source Text"));
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalNamespaceAndSource.ToolTip"), TEXT("Collapse texts with the same namespace and source text (legacy pre-4.14 behavior)."));
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalPackageIdTextIdAndSource.DisplayName"), TEXT("Identical Package ID, Text Identity (Namespace + Key) and Source Text"));
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalPackageIdTextIdAndSource.ToolTip"), TEXT("Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior)."));
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalTextIdAndSource.DisplayName"), TEXT("Identical Text Identity (Namespace + Key) and Source Text"));
			MetaData->SetValue(ReturnEnum, TEXT("IdenticalTextIdAndSource.ToolTip"), TEXT("Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior)."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/PortableObjectPipeline.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_CRC() { return 300254850U; }
static UEnum* ELocalizationTargetLoadingPolicy_StaticEnum()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetLoadingPolicy"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetLoadingPolicy(ELocalizationTargetLoadingPolicy_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetLoadingPolicy"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetLoadingPolicy"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ELocalizationTargetLoadingPolicy"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::Never"), 0);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::Always"), 1);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::Editor"), 2);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::Game"), 3);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::PropertyNames"), 4);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::ToolTips"), 5);
			EnumNames.Emplace(TEXT("ELocalizationTargetLoadingPolicy::ELocalizationTargetLoadingPolicy_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ELocalizationTargetLoadingPolicy");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Always.ToolTip"), TEXT("This target's localization data will always be loaded automatically."));
			MetaData->SetValue(ReturnEnum, TEXT("Editor.ToolTip"), TEXT("This target's localization data will only be loaded when running the editor. Use if this target localizes the editor."));
			MetaData->SetValue(ReturnEnum, TEXT("Game.ToolTip"), TEXT("This target's localization data will only be loaded when running the game. Use if this target localizes your game."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Never.ToolTip"), TEXT("This target's localization data will never be loaded automatically."));
			MetaData->SetValue(ReturnEnum, TEXT("PropertyNames.ToolTip"), TEXT("This target's localization data will only be loaded if the editor is displaying localized property names."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTips.ToolTip"), TEXT("This target's localization data will only be loaded if the editor is displaying localized tool tips."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_CRC() { return 2776788199U; }
static UEnum* ELocalizationTargetConflictStatus_StaticEnum()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetConflictStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetConflictStatus(ELocalizationTargetConflictStatus_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetConflictStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetConflictStatus"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ELocalizationTargetConflictStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ELocalizationTargetConflictStatus::Unknown"), 0);
			EnumNames.Emplace(TEXT("ELocalizationTargetConflictStatus::ConflictsPresent"), 1);
			EnumNames.Emplace(TEXT("ELocalizationTargetConflictStatus::Clear"), 2);
			EnumNames.Emplace(TEXT("ELocalizationTargetConflictStatus::ELocalizationTargetConflictStatus_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ELocalizationTargetConflictStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Clear.ToolTip"), TEXT("The localization target is clear of conflicts."));
			MetaData->SetValue(ReturnEnum, TEXT("ConflictsPresent.ToolTip"), TEXT("The are outstanding conflicts present in this localization target."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Unknown.ToolTip"), TEXT("The status of conflicts in this localization target could not be determined."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_CRC() { return 2361414995U; }
class UScriptStruct* FLocalizationTargetSettings::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationTargetSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationTargetSettings(FLocalizationTargetSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationTargetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationTargetSettings")),new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LocalizationTargetSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_SupportedCulturesStatistics = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SupportedCulturesStatistics"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SupportedCulturesStatistics, FLocalizationTargetSettings), 0x0010000000004001);
			UProperty* NewProp_SupportedCulturesStatistics_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SupportedCulturesStatistics, TEXT("SupportedCulturesStatistics"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FCultureStatistics());
			UProperty* NewProp_NativeCultureIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NativeCultureIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NativeCultureIndex, FLocalizationTargetSettings), 0x0010000000004001);
			UProperty* NewProp_ImportDialogueSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ImportDialogueSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ImportDialogueSettings, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings());
			UProperty* NewProp_CompileSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CompileSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CompileSettings, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLocalizationCompilationSettings());
			UProperty* NewProp_ExportSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExportSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ExportSettings, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLocalizationExportingSettings());
			UProperty* NewProp_GatherFromMetaData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GatherFromMetaData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GatherFromMetaData, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration());
			UProperty* NewProp_GatherFromPackages = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GatherFromPackages"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GatherFromPackages, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration());
			UProperty* NewProp_GatherFromTextFiles = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GatherFromTextFiles"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GatherFromTextFiles, FLocalizationTargetSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration());
			UProperty* NewProp_RequiredModuleNames = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RequiredModuleNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RequiredModuleNames, FLocalizationTargetSettings), 0x0010040000004001);
			UProperty* NewProp_RequiredModuleNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RequiredModuleNames, TEXT("RequiredModuleNames"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
			UProperty* NewProp_AdditionalManifestDependencies = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdditionalManifestDependencies"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalManifestDependencies, FLocalizationTargetSettings), 0x0010040000004001);
			UProperty* NewProp_AdditionalManifestDependencies_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalManifestDependencies, TEXT("AdditionalManifestDependencies"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FFilePath());
			UProperty* NewProp_TargetDependencies = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetDependencies"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TargetDependencies, FLocalizationTargetSettings), 0x0010000000004001);
			UProperty* NewProp_TargetDependencies_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TargetDependencies, TEXT("TargetDependencies"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_ConflictStatus = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ConflictStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ConflictStatus, FLocalizationTargetSettings), 0x0010000000002001, Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus());
			UProperty* NewProp_ConflictStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ConflictStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Guid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Guid, FLocalizationTargetSettings), 0x0010000000004000, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FLocalizationTargetSettings), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SupportedCulturesStatistics, TEXT("Category"), TEXT("Cultures"));
			MetaData->SetValue(NewProp_SupportedCulturesStatistics, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SupportedCulturesStatistics, TEXT("ToolTip"), TEXT("Cultures for which the source text is being localized for."));
			MetaData->SetValue(NewProp_NativeCultureIndex, TEXT("Category"), TEXT("Cultures"));
			MetaData->SetValue(NewProp_NativeCultureIndex, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_NativeCultureIndex, TEXT("ToolTip"), TEXT("The index of the native culture among the supported cultures."));
			MetaData->SetValue(NewProp_ImportDialogueSettings, TEXT("Category"), TEXT("Import Dialogue"));
			MetaData->SetValue(NewProp_ImportDialogueSettings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ImportDialogueSettings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
			MetaData->SetValue(NewProp_ImportDialogueSettings, TEXT("ToolTip"), TEXT("Settings for importing dialogue from WAV files."));
			MetaData->SetValue(NewProp_CompileSettings, TEXT("Category"), TEXT("Compile Text"));
			MetaData->SetValue(NewProp_CompileSettings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_CompileSettings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
			MetaData->SetValue(NewProp_CompileSettings, TEXT("ToolTip"), TEXT("Settings for compiling translations."));
			MetaData->SetValue(NewProp_ExportSettings, TEXT("Category"), TEXT("Export Text"));
			MetaData->SetValue(NewProp_ExportSettings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ExportSettings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
			MetaData->SetValue(NewProp_ExportSettings, TEXT("ToolTip"), TEXT("Settings for exporting translations."));
			MetaData->SetValue(NewProp_GatherFromMetaData, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_GatherFromMetaData, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_GatherFromMetaData, TEXT("ToolTip"), TEXT("Parameters for defining what text is gathered from metadata and how."));
			MetaData->SetValue(NewProp_GatherFromPackages, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_GatherFromPackages, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_GatherFromPackages, TEXT("ToolTip"), TEXT("Parameters for defining what text is gathered from packages and how."));
			MetaData->SetValue(NewProp_GatherFromTextFiles, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_GatherFromTextFiles, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_GatherFromTextFiles, TEXT("ToolTip"), TEXT("Parameters for defining what text is gathered from text files and how."));
			MetaData->SetValue(NewProp_RequiredModuleNames, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_RequiredModuleNames, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_RequiredModuleNames, TEXT("ToolTip"), TEXT("The names of modules which must be loaded when gathering text. Use to gather from packages or metadata sourced from a module that isn't the primary game module."));
			MetaData->SetValue(NewProp_AdditionalManifestDependencies, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_AdditionalManifestDependencies, TEXT("FilePathFilter"), TEXT("manifest"));
			MetaData->SetValue(NewProp_AdditionalManifestDependencies, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_AdditionalManifestDependencies, TEXT("ToolTip"), TEXT("Text present in these manifests will not be duplicated in this target."));
			MetaData->SetValue(NewProp_TargetDependencies, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_TargetDependencies, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_TargetDependencies, TEXT("ToolTip"), TEXT("Text present in these targets will not be duplicated in this target."));
			MetaData->SetValue(NewProp_ConflictStatus, TEXT("Category"), TEXT("Target"));
			MetaData->SetValue(NewProp_ConflictStatus, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ConflictStatus, TEXT("ToolTip"), TEXT("Whether the target has outstanding conflicts that require resolution."));
			MetaData->SetValue(NewProp_Guid, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("Target"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Unique name for the target."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC() { return 2471416704U; }
class UScriptStruct* FCultureStatistics::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCultureStatistics, Z_Construct_UPackage__Script_Localization(), TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCultureStatistics(FCultureStatistics::StaticStruct, TEXT("/Script/Localization"), TEXT("CultureStatistics"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics
{
	FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CultureStatistics")),new UScriptStruct::TCppStructOps<FCultureStatistics>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFCultureStatistics;
	UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CultureStatistics"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCultureStatistics>, EStructFlags(0x00000001));
			UProperty* NewProp_WordCount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WordCount"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(WordCount, FCultureStatistics), 0x0010000000002001);
			UProperty* NewProp_CultureName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CultureName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CultureName, FCultureStatistics), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_WordCount, TEXT("Category"), TEXT("Statistics"));
			MetaData->SetValue(NewProp_WordCount, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_WordCount, TEXT("ToolTip"), TEXT("The estimated number of words that have been localized for this culture."));
			MetaData->SetValue(NewProp_CultureName, TEXT("Category"), TEXT("Culture"));
			MetaData->SetValue(NewProp_CultureName, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_CultureName, TEXT("ToolTip"), TEXT("The ISO name for this culture."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC() { return 1109215450U; }
class UScriptStruct* FLocalizationImportDialogueSettings::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationImportDialogueSettings(FLocalizationImportDialogueSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationImportDialogueSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationImportDialogueSettings")),new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LocalizationImportDialogueSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bImportNativeAsSource, FLocalizationImportDialogueSettings, bool);
			UProperty* NewProp_bImportNativeAsSource = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bImportNativeAsSource"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bImportNativeAsSource, FLocalizationImportDialogueSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bImportNativeAsSource, FLocalizationImportDialogueSettings), sizeof(bool), true);
			UProperty* NewProp_ImportedDialogueFolder = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ImportedDialogueFolder"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ImportedDialogueFolder, FLocalizationImportDialogueSettings), 0x0010000000004001);
			UProperty* NewProp_RawAudioPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RawAudioPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RawAudioPath, FLocalizationImportDialogueSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FDirectoryPath());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_bImportNativeAsSource, TEXT("Category"), TEXT("Dialogue"));
			MetaData->SetValue(NewProp_bImportNativeAsSource, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_bImportNativeAsSource, TEXT("ToolTip"), TEXT("Should the dialogue for the native culture be imported as if it were source audio? If false, the native culture dialogue will be imported as localized data for the native culture."));
			MetaData->SetValue(NewProp_ImportedDialogueFolder, TEXT("Category"), TEXT("Dialogue"));
			MetaData->SetValue(NewProp_ImportedDialogueFolder, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ImportedDialogueFolder, TEXT("ToolTip"), TEXT("Folder in which to create the generated sound waves. This is relative to the root of the L10N culture folder (or the root content folder if importing native dialogue as source dialogue)."));
			MetaData->SetValue(NewProp_RawAudioPath, TEXT("Category"), TEXT("Dialogue"));
			MetaData->SetValue(NewProp_RawAudioPath, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_RawAudioPath, TEXT("ToolTip"), TEXT("Path to the folder to import the audio from. This folder is expected to contain culture sub-folders, which in turn contain the raw WAV files to import."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC() { return 2816945947U; }
class UScriptStruct* FLocalizationCompilationSettings::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationCompilationSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationCompilationSettings(FLocalizationCompilationSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationCompilationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationCompilationSettings")),new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LocalizationCompilationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SkipSourceCheck, FLocalizationCompilationSettings, bool);
			UProperty* NewProp_SkipSourceCheck = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SkipSourceCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SkipSourceCheck, FLocalizationCompilationSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(SkipSourceCheck, FLocalizationCompilationSettings), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SkipSourceCheck, TEXT("Category"), TEXT("Source"));
			MetaData->SetValue(NewProp_SkipSourceCheck, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SkipSourceCheck, TEXT("ToolTip"), TEXT("Should we skip the source check when compiling translations? This will allow translations whose source no longer matches the active source to still be used by the game at runtime."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC() { return 3361142871U; }
class UScriptStruct* FLocalizationExportingSettings::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationExportingSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationExportingSettings(FLocalizationExportingSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationExportingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationExportingSettings")),new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LocalizationExportingSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShouldAddSourceLocationsAsComments, FLocalizationExportingSettings, bool);
			UProperty* NewProp_ShouldAddSourceLocationsAsComments = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShouldAddSourceLocationsAsComments"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShouldAddSourceLocationsAsComments, FLocalizationExportingSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(ShouldAddSourceLocationsAsComments, FLocalizationExportingSettings), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShouldPersistCommentsOnExport, FLocalizationExportingSettings, bool);
			UProperty* NewProp_ShouldPersistCommentsOnExport = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShouldPersistCommentsOnExport"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShouldPersistCommentsOnExport, FLocalizationExportingSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(ShouldPersistCommentsOnExport, FLocalizationExportingSettings), sizeof(bool), true);
			UProperty* NewProp_CollapseMode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CollapseMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CollapseMode, FLocalizationExportingSettings), 0x0010000000004001, Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode());
			UProperty* NewProp_CollapseMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CollapseMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldAddSourceLocationsAsComments, TEXT("Category"), TEXT("Comments"));
			MetaData->SetValue(NewProp_ShouldAddSourceLocationsAsComments, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldAddSourceLocationsAsComments, TEXT("ToolTip"), TEXT("Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location."));
			MetaData->SetValue(NewProp_ShouldPersistCommentsOnExport, TEXT("Category"), TEXT("Comments"));
			MetaData->SetValue(NewProp_ShouldPersistCommentsOnExport, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldPersistCommentsOnExport, TEXT("ToolTip"), TEXT("Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields."));
			MetaData->SetValue(NewProp_CollapseMode, TEXT("Category"), TEXT("Collapsing"));
			MetaData->SetValue(NewProp_CollapseMode, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_CollapseMode, TEXT("ToolTip"), TEXT("How should we collapse down text when exporting to PO?"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC() { return 258410642U; }
class UScriptStruct* FGatherTextFromMetaDataConfiguration::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromMetaDataConfiguration(FGatherTextFromMetaDataConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromMetaDataConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromMetaDataConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextFromMetaDataConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShouldGatherFromEditorOnlyData, FGatherTextFromMetaDataConfiguration, bool);
			UProperty* NewProp_ShouldGatherFromEditorOnlyData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShouldGatherFromEditorOnlyData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShouldGatherFromEditorOnlyData, FGatherTextFromMetaDataConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(ShouldGatherFromEditorOnlyData, FGatherTextFromMetaDataConfiguration), sizeof(bool), true);
			UProperty* NewProp_KeySpecifications = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KeySpecifications"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KeySpecifications, FGatherTextFromMetaDataConfiguration), 0x0010000000004001);
			UProperty* NewProp_KeySpecifications_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KeySpecifications, TEXT("KeySpecifications"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification());
			UProperty* NewProp_ExcludePathWildcards = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExcludePathWildcards, FGatherTextFromMetaDataConfiguration), 0x0010000000004001);
			UProperty* NewProp_ExcludePathWildcards_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExcludePathWildcards, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextExcludePath());
			UProperty* NewProp_IncludePathWildcards = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IncludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(IncludePathWildcards, FGatherTextFromMetaDataConfiguration), 0x0010000000004001);
			UProperty* NewProp_IncludePathWildcards_Inner = new(EC_InternalUseOnlyConstructor, NewProp_IncludePathWildcards, TEXT("IncludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextIncludePath());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsEnabled, FGatherTextFromMetaDataConfiguration, bool);
			UProperty* NewProp_IsEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsEnabled, FGatherTextFromMetaDataConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(IsEnabled, FGatherTextFromMetaDataConfiguration), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ToolTip"), TEXT("If enabled, data that is specified as editor-only may be processed for gathering."));
			MetaData->SetValue(NewProp_KeySpecifications, TEXT("Category"), TEXT("MetaData"));
			MetaData->SetValue(NewProp_KeySpecifications, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_KeySpecifications, TEXT("ToolTip"), TEXT("Specifications for how to gather text from specific metadata keys."));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ToolTip"), TEXT("Metadata from source files whose paths match these wildcard patterns will be excluded from gathering."));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("ToolTip"), TEXT("Metadata from source files whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering."));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("Category"), TEXT("Execution"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ToolTip"), TEXT("If enabled, metadata will be gathered according to this configuration."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC() { return 1442733709U; }
class UScriptStruct* FMetaDataKeyGatherSpecification::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyGatherSpecification(FMetaDataKeyGatherSpecification::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyGatherSpecification"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyGatherSpecification")),new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MetaDataKeyGatherSpecification"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>, EStructFlags(0x00000001));
			UProperty* NewProp_TextKeyPattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextKeyPattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TextKeyPattern, FMetaDataKeyGatherSpecification), 0x0010000000004001, Z_Construct_UScriptStruct_FMetaDataTextKeyPattern());
			UProperty* NewProp_TextNamespace = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextNamespace"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TextNamespace, FMetaDataKeyGatherSpecification), 0x0010000000004001);
			UProperty* NewProp_MetaDataKey = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MetaDataKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MetaDataKey, FMetaDataKeyGatherSpecification), 0x0010000000004001, Z_Construct_UScriptStruct_FMetaDataKeyName());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_TextKeyPattern, TEXT("Category"), TEXT("Output"));
			MetaData->SetValue(NewProp_TextKeyPattern, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_TextKeyPattern, TEXT("ToolTip"), TEXT("The pattern which will be formatted to form the localization key for the metadata value gathered as text.\n      Placeholder - Description\n      {FieldPath} - The fully qualified name of the object upon which the metadata resides.\n      {MetaDataValue} - The value associated with the metadata key."));
			MetaData->SetValue(NewProp_TextNamespace, TEXT("Category"), TEXT("Output"));
			MetaData->SetValue(NewProp_TextNamespace, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_TextNamespace, TEXT("ToolTip"), TEXT("The localization namespace in which the gathered text will be output."));
			MetaData->SetValue(NewProp_MetaDataKey, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_MetaDataKey, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_MetaDataKey, TEXT("ToolTip"), TEXT("The metadata key for which values will be gathered as text."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC() { return 1397966176U; }
class UScriptStruct* FMetaDataKeyName::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyName, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyName(FMetaDataKeyName::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyName"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyName")),new UScriptStruct::TCppStructOps<FMetaDataKeyName>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MetaDataKeyName"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMetaDataKeyName>, EStructFlags(0x00000001));
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FMetaDataKeyName), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("Name"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC() { return 1667337459U; }
class UScriptStruct* FMetaDataTextKeyPattern::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataTextKeyPattern(FMetaDataTextKeyPattern::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataTextKeyPattern"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataTextKeyPattern")),new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MetaDataTextKeyPattern"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>, EStructFlags(0x00000001));
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Pattern, FMetaDataTextKeyPattern), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC() { return 1577304622U; }
class UScriptStruct* FGatherTextFromPackagesConfiguration::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromPackagesConfiguration(FGatherTextFromPackagesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromPackagesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromPackagesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextFromPackagesConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SkipGatherCache, FGatherTextFromPackagesConfiguration, bool);
			UProperty* NewProp_SkipGatherCache = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SkipGatherCache"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SkipGatherCache, FGatherTextFromPackagesConfiguration), 0x0010040000004001, CPP_BOOL_PROPERTY_BITMASK(SkipGatherCache, FGatherTextFromPackagesConfiguration), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShouldGatherFromEditorOnlyData, FGatherTextFromPackagesConfiguration, bool);
			UProperty* NewProp_ShouldGatherFromEditorOnlyData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShouldGatherFromEditorOnlyData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShouldGatherFromEditorOnlyData, FGatherTextFromPackagesConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(ShouldGatherFromEditorOnlyData, FGatherTextFromPackagesConfiguration), sizeof(bool), true);
			UProperty* NewProp_Collections = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Collections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Collections, FGatherTextFromPackagesConfiguration), 0x0010000000004001);
			UProperty* NewProp_Collections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Collections, TEXT("Collections"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
			UProperty* NewProp_FileExtensions = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FileExtensions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FileExtensions, FGatherTextFromPackagesConfiguration), 0x0010000000004001);
			UProperty* NewProp_FileExtensions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FileExtensions, TEXT("FileExtensions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextFileExtension());
			UProperty* NewProp_ExcludePathWildcards = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExcludePathWildcards, FGatherTextFromPackagesConfiguration), 0x0010000000004001);
			UProperty* NewProp_ExcludePathWildcards_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExcludePathWildcards, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextExcludePath());
			UProperty* NewProp_IncludePathWildcards = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IncludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(IncludePathWildcards, FGatherTextFromPackagesConfiguration), 0x0010000000004001);
			UProperty* NewProp_IncludePathWildcards_Inner = new(EC_InternalUseOnlyConstructor, NewProp_IncludePathWildcards, TEXT("IncludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextIncludePath());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsEnabled, FGatherTextFromPackagesConfiguration, bool);
			UProperty* NewProp_IsEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsEnabled, FGatherTextFromPackagesConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(IsEnabled, FGatherTextFromPackagesConfiguration), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SkipGatherCache, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_SkipGatherCache, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SkipGatherCache, TEXT("ToolTip"), TEXT("Should we ignore the cached text in the package header and perform a full package load instead?"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("Category"), TEXT("Gather Text"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ToolTip"), TEXT("If enabled, data that is specified as editor-only may be processed for gathering."));
			MetaData->SetValue(NewProp_Collections, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_Collections, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Collections, TEXT("ToolTip"), TEXT("Packages in these collections may be processed for gathering."));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("ToolTip"), TEXT("Packages whose names match these wildcard patterns may be processed for text to gather."));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ToolTip"), TEXT("Packages whose paths match these wildcard patterns will be excluded from gathering."));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_IncludePathWildcards, TEXT("ToolTip"), TEXT("Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering."));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("Category"), TEXT("Execution"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ToolTip"), TEXT("If enabled, text from packages will be gathered according to this configuration."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC() { return 1799492707U; }
class UScriptStruct* FGatherTextFromTextFilesConfiguration::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromTextFilesConfiguration(FGatherTextFromTextFilesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromTextFilesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromTextFilesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextFromTextFilesConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShouldGatherFromEditorOnlyData, FGatherTextFromTextFilesConfiguration, bool);
			UProperty* NewProp_ShouldGatherFromEditorOnlyData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShouldGatherFromEditorOnlyData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShouldGatherFromEditorOnlyData, FGatherTextFromTextFilesConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(ShouldGatherFromEditorOnlyData, FGatherTextFromTextFilesConfiguration), sizeof(bool), true);
			UProperty* NewProp_FileExtensions = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FileExtensions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FileExtensions, FGatherTextFromTextFilesConfiguration), 0x0010000000004001);
			UProperty* NewProp_FileExtensions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FileExtensions, TEXT("FileExtensions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextFileExtension());
			UProperty* NewProp_ExcludePathWildcards = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExcludePathWildcards, FGatherTextFromTextFilesConfiguration), 0x0010000000004001);
			UProperty* NewProp_ExcludePathWildcards_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExcludePathWildcards, TEXT("ExcludePathWildcards"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextExcludePath());
			UProperty* NewProp_SearchDirectories = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SearchDirectories"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SearchDirectories, FGatherTextFromTextFilesConfiguration), 0x0010000000004001);
			UProperty* NewProp_SearchDirectories_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SearchDirectories, TEXT("SearchDirectories"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGatherTextSearchDirectory());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsEnabled, FGatherTextFromTextFilesConfiguration, bool);
			UProperty* NewProp_IsEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsEnabled, FGatherTextFromTextFilesConfiguration), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(IsEnabled, FGatherTextFromTextFilesConfiguration), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ShouldGatherFromEditorOnlyData, TEXT("ToolTip"), TEXT("If enabled, data that is specified as editor-only may be processed for gathering."));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_FileExtensions, TEXT("ToolTip"), TEXT("Text files whose names match these wildcard patterns may be parsed for text to gather."));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_ExcludePathWildcards, TEXT("ToolTip"), TEXT("Text files whose paths match these wildcard patterns will be excluded from gathering."));
			MetaData->SetValue(NewProp_SearchDirectories, TEXT("Category"), TEXT("Filter"));
			MetaData->SetValue(NewProp_SearchDirectories, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_SearchDirectories, TEXT("ToolTip"), TEXT("The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather."));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("Category"), TEXT("Execution"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_IsEnabled, TEXT("ToolTip"), TEXT("If enabled, text from text files will be gathered according to this configuration."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC() { return 108142765U; }
class UScriptStruct* FGatherTextFileExtension::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFileExtension, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFileExtension(FGatherTextFileExtension::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFileExtension"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFileExtension")),new UScriptStruct::TCppStructOps<FGatherTextFileExtension>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextFileExtension"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextFileExtension>, EStructFlags(0x00000001));
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Pattern, FGatherTextFileExtension), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC() { return 2893179423U; }
class UScriptStruct* FGatherTextExcludePath::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextExcludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextExcludePath(FGatherTextExcludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextExcludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextExcludePath")),new UScriptStruct::TCppStructOps<FGatherTextExcludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextExcludePath"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextExcludePath>, EStructFlags(0x00000001));
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Pattern, FGatherTextExcludePath), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC() { return 2054530596U; }
class UScriptStruct* FGatherTextIncludePath::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextIncludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextIncludePath(FGatherTextIncludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextIncludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextIncludePath")),new UScriptStruct::TCppStructOps<FGatherTextIncludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextIncludePath"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextIncludePath>, EStructFlags(0x00000001));
			UProperty* NewProp_Pattern = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Pattern"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Pattern, FGatherTextIncludePath), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Pattern, TEXT("Category"), TEXT("Pattern"));
			MetaData->SetValue(NewProp_Pattern, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC() { return 1673072516U; }
class UScriptStruct* FGatherTextSearchDirectory::StaticStruct()
{
	extern LOCALIZATION_API class UPackage* Z_Construct_UPackage__Script_Localization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory();
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextSearchDirectory, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextSearchDirectory(FGatherTextSearchDirectory::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextSearchDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextSearchDirectory")),new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GatherTextSearchDirectory"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>, EStructFlags(0x00000001));
			UProperty* NewProp_Path = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Path"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Path, FGatherTextSearchDirectory), 0x0010000000004001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
			MetaData->SetValue(NewProp_Path, TEXT("Category"), TEXT("Path"));
			MetaData->SetValue(NewProp_Path, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC() { return 548115878U; }
	void ULocalizationTarget::StaticRegisterNativesULocalizationTarget()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister()
	{
		return ULocalizationTarget::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizationTarget()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Localization();
			OuterClass = ULocalizationTarget::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, ULocalizationTarget), 0x0010000000000001, Z_Construct_UScriptStruct_FLocalizationTargetSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ULocalizationTarget> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LocalizationTargetTypes.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
				MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("Target"));
				MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
				MetaData->SetValue(NewProp_Settings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationTarget, 2996192043);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTarget(Z_Construct_UClass_ULocalizationTarget, &ULocalizationTarget::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTarget);
	void ULocalizationTargetSet::StaticRegisterNativesULocalizationTargetSet()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister()
	{
		return ULocalizationTargetSet::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizationTargetSet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Localization();
			OuterClass = ULocalizationTargetSet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TargetObjects = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetObjects"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TargetObjects, ULocalizationTargetSet), 0x0010000000000001);
				UProperty* NewProp_TargetObjects_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TargetObjects, TEXT("TargetObjects"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ULocalizationTarget_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ULocalizationTargetSet> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LocalizationTargetTypes.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
				MetaData->SetValue(NewProp_TargetObjects, TEXT("Category"), TEXT("Targets"));
				MetaData->SetValue(NewProp_TargetObjects, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationTargetTypes.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationTargetSet, 2597608758);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTargetSet(Z_Construct_UClass_ULocalizationTargetSet, &ULocalizationTargetSet::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTargetSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTargetSet);
	void ULocalizationSettings::StaticRegisterNativesULocalizationSettings()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister()
	{
		return ULocalizationSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizationSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Localization();
			OuterClass = ULocalizationSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_GameTargetsSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameTargetsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(GameTargetsSettings, ULocalizationSettings), 0x0040000000004000);
				UProperty* NewProp_GameTargetsSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_GameTargetsSettings, TEXT("GameTargetsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FLocalizationTargetSettings());
				UProperty* NewProp_GameTargetSet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameTargetSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GameTargetSet, ULocalizationSettings), 0x0040000000000000, Z_Construct_UClass_ULocalizationTargetSet_NoRegister());
				UProperty* NewProp_EngineTargetsSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EngineTargetsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EngineTargetsSettings, ULocalizationSettings), 0x0040000000004000);
				UProperty* NewProp_EngineTargetsSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EngineTargetsSettings, TEXT("EngineTargetsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FLocalizationTargetSettings());
				UProperty* NewProp_EngineTargetSet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EngineTargetSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EngineTargetSet, ULocalizationSettings), 0x0040000000000000, Z_Construct_UClass_ULocalizationTargetSet_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ULocalizationSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LocalizationSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Class for loading/saving configuration settings and the details view objects needed for localization dashboard functionality."));
				MetaData->SetValue(NewProp_GameTargetsSettings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationSettings.h"));
				MetaData->SetValue(NewProp_GameTargetSet, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationSettings.h"));
				MetaData->SetValue(NewProp_EngineTargetsSettings, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationSettings.h"));
				MetaData->SetValue(NewProp_EngineTargetSet, TEXT("ModuleRelativePath"), TEXT("Public/LocalizationSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalizationSettings, 2337904020);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationSettings(Z_Construct_UClass_ULocalizationSettings, &ULocalizationSettings::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationSettings);
	UPackage* Z_Construct_UPackage__Script_Localization()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Localization")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x4100EC60;
			Guid.B = 0x4A2CDADC;
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
