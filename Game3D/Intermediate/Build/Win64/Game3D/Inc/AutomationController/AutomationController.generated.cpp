// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AutomationController.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AutomationController() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationEvent();

	AUTOMATIONCONTROLLER_API class UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType();
	AUTOMATIONCONTROLLER_API class UEnum* Z_Construct_UEnum_AutomationController_EAutomationState();
	AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
	AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
	AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
static UEnum* EAutomationArtifactType_StaticEnum()
{
	extern AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API class UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType, Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationArtifactType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutomationArtifactType(EAutomationArtifactType_StaticEnum, TEXT("/Script/AutomationController"), TEXT("EAutomationArtifactType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_AutomationController();
		extern uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationArtifactType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutomationArtifactType"), 0, Get_Z_Construct_UEnum_AutomationController_EAutomationArtifactType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EAutomationArtifactType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EAutomationArtifactType::None"), 0);
			EnumNames.Emplace(TEXT("EAutomationArtifactType::Image"), 1);
			EnumNames.Emplace(TEXT("EAutomationArtifactType::Comparison"), 2);
			EnumNames.Emplace(TEXT("EAutomationArtifactType::EAutomationArtifactType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EAutomationArtifactType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationArtifactType_CRC() { return 2697313873U; }
static UEnum* EAutomationState_StaticEnum()
{
	extern AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API class UEnum* Z_Construct_UEnum_AutomationController_EAutomationState();
		Singleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationState, Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutomationState(EAutomationState_StaticEnum, TEXT("/Script/AutomationController"), TEXT("EAutomationState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AutomationController_EAutomationState()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_AutomationController();
		extern uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutomationState"), 0, Get_Z_Construct_UEnum_AutomationController_EAutomationState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EAutomationState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EAutomationState::NotRun"), 0);
			EnumNames.Emplace(TEXT("EAutomationState::InProcess"), 1);
			EnumNames.Emplace(TEXT("EAutomationState::Fail"), 2);
			EnumNames.Emplace(TEXT("EAutomationState::Success"), 3);
			EnumNames.Emplace(TEXT("EAutomationState::NotEnoughParticipants"), 4);
			EnumNames.Emplace(TEXT("EAutomationState::EAutomationState_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EAutomationState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Fail.ToolTip"), TEXT("Automation test is running now"));
			MetaData->SetValue(ReturnEnum, TEXT("InProcess.ToolTip"), TEXT("Automation test was not run"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotEnoughParticipants.ToolTip"), TEXT("Automation test was run and succeeded"));
			MetaData->SetValue(ReturnEnum, TEXT("Success.ToolTip"), TEXT("Automation test was run and failed"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Enumeration of unit test status for special dialog"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationState_CRC() { return 378111450U; }
class UScriptStruct* FAutomationArtifact::StaticStruct()
{
	extern AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationArtifact, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationArtifact"), sizeof(FAutomationArtifact), Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationArtifact(FAutomationArtifact::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomationArtifact"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationArtifact")),new UScriptStruct::TCppStructOps<FAutomationArtifact>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationArtifact"), sizeof(FAutomationArtifact), Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomationArtifact"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomationArtifact>, EStructFlags(0x00000001));
			UProperty* NewProp_Files = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Files"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(Files, FAutomationArtifact), 0x0010000000000000);
			UProperty* NewProp_Files_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_Files, TEXT("Files_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Files_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_Files, TEXT("Files"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FAutomationArtifact), 0x0010000000000000, Z_Construct_UEnum_AutomationController_EAutomationArtifactType());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FAutomationArtifact), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
			MetaData->SetValue(NewProp_Files, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/Interfaces/IAutomationReport.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC() { return 2403148163U; }
class UScriptStruct* FAutomatedTestPassResults::StaticStruct()
{
	extern AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestPassResults(FAutomatedTestPassResults::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestPassResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestPassResults")),new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomatedTestPassResults"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>, EStructFlags(0x00000001));
			UProperty* NewProp_Tests = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tests"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tests, FAutomatedTestPassResults), 0x0010000000000000);
			UProperty* NewProp_Tests_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tests, TEXT("Tests"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAutomatedTestResult());
			UProperty* NewProp_ComparisonExportDirectory = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ComparisonExportDirectory"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ComparisonExportDirectory, FAutomatedTestPassResults), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ComparisonExported, FAutomatedTestPassResults, bool);
			UProperty* NewProp_ComparisonExported = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ComparisonExported"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ComparisonExported, FAutomatedTestPassResults), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(ComparisonExported, FAutomatedTestPassResults), sizeof(bool), true);
			UProperty* NewProp_TotalDuration = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TotalDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TotalDuration, FAutomatedTestPassResults), 0x0010000000000000);
			UProperty* NewProp_NotRun = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NotRun"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NotRun, FAutomatedTestPassResults), 0x0010000000000000);
			UProperty* NewProp_Failed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Failed"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Failed, FAutomatedTestPassResults), 0x0010000000000000);
			UProperty* NewProp_SucceededWithWarnings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SucceededWithWarnings"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SucceededWithWarnings, FAutomatedTestPassResults), 0x0010000000000000);
			UProperty* NewProp_Succeeded = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Succeeded"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Succeeded, FAutomatedTestPassResults), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Tests, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_ComparisonExportDirectory, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_ComparisonExported, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_TotalDuration, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_NotRun, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Failed, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_SucceededWithWarnings, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Succeeded, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC() { return 1495042638U; }
class UScriptStruct* FAutomatedTestResult::StaticStruct()
{
	extern AUTOMATIONCONTROLLER_API class UPackage* Z_Construct_UPackage__Script_AutomationController();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API class UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestResult(FAutomatedTestResult::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestResult")),new UScriptStruct::TCppStructOps<FAutomatedTestResult>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutomatedTestResult"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAutomatedTestResult>, EStructFlags(0x00000001));
			UProperty* NewProp_Errors = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Errors"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Errors, FAutomatedTestResult), 0x0040000000000000);
			UProperty* NewProp_Warnings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Warnings"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Warnings, FAutomatedTestResult), 0x0040000000000000);
			UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, FAutomatedTestResult), 0x0040000000000000);
			UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAutomationEvent());
			UProperty* NewProp_Artifacts = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Artifacts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Artifacts, FAutomatedTestResult), 0x0010000000000000);
			UProperty* NewProp_Artifacts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Artifacts, TEXT("Artifacts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAutomationArtifact());
			UProperty* NewProp_State = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("State"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(State, FAutomatedTestResult), 0x0010000000000000, Z_Construct_UEnum_AutomationController_EAutomationState());
			UProperty* NewProp_State_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_State, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FullTestPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FullTestPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FullTestPath, FAutomatedTestResult), 0x0010000000000000);
			UProperty* NewProp_TestDisplayName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestDisplayName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TestDisplayName, FAutomatedTestResult), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Errors, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Warnings, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Events, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_Artifacts, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_State, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_FullTestPath, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
			MetaData->SetValue(NewProp_TestDisplayName, TEXT("ModuleRelativePath"), TEXT("Private/AutomationControllerManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC() { return 2501088948U; }
	UPackage* Z_Construct_UPackage__Script_AutomationController()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AutomationController")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x19D55FB9;
			Guid.B = 0x26A3FA7D;
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
