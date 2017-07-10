// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ScreenShotComparisonTools.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ScreenShotComparisonTools() {}
#if USE_COMPILED_IN_NATIVES
	SCREENSHOTCOMPARISONTOOLS_API class UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
	SCREENSHOTCOMPARISONTOOLS_API class UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
	SCREENSHOTCOMPARISONTOOLS_API class UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
class UScriptStruct* FImageComparisonResult::StaticStruct()
{
	extern SCREENSHOTCOMPARISONTOOLS_API class UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API class UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageComparisonResult(FImageComparisonResult::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageComparisonResult"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageComparisonResult")),new UScriptStruct::TCppStructOps<FImageComparisonResult>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult;
	UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		extern uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ImageComparisonResult"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FImageComparisonResult>, EStructFlags(0x00000001));
			UProperty* NewProp_Tolerance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Tolerance"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Tolerance, FImageComparisonResult), 0x0010000000000000, Z_Construct_UScriptStruct_FImageTolerance());
			UProperty* NewProp_ErrorMessage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ErrorMessage"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(ErrorMessage, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_GlobalDifference = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GlobalDifference"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(GlobalDifference, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_MaxLocalDifference = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxLocalDifference"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(MaxLocalDifference, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_ReportComparisonFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReportComparisonFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReportComparisonFile, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_ReportIncomingFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReportIncomingFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReportIncomingFile, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_ReportApprovedFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReportApprovedFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReportApprovedFile, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_ComparisonFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ComparisonFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ComparisonFile, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_IncomingFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IncomingFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(IncomingFile, FImageComparisonResult), 0x0010000000000000);
			UProperty* NewProp_ApprovedFile = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ApprovedFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ApprovedFile, FImageComparisonResult), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_Tolerance, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ErrorMessage, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_GlobalDifference, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_MaxLocalDifference, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ReportComparisonFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ReportIncomingFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ReportApprovedFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ComparisonFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_IncomingFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_ApprovedFile, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC() { return 1350491054U; }
class UScriptStruct* FImageTolerance::StaticStruct()
{
	extern SCREENSHOTCOMPARISONTOOLS_API class UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API class UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageTolerance(FImageTolerance::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageTolerance"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageTolerance")),new UScriptStruct::TCppStructOps<FImageTolerance>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance;
	UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		extern uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ImageTolerance"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FImageTolerance>, EStructFlags(0x00000001));
			UProperty* NewProp_MaximumGlobalError = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaximumGlobalError"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaximumGlobalError, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_MaximumLocalError = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaximumLocalError"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaximumLocalError, FImageTolerance), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IgnoreColors, FImageTolerance, bool);
			UProperty* NewProp_IgnoreColors = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IgnoreColors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IgnoreColors, FImageTolerance), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(IgnoreColors, FImageTolerance), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IgnoreAntiAliasing, FImageTolerance, bool);
			UProperty* NewProp_IgnoreAntiAliasing = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IgnoreAntiAliasing"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IgnoreAntiAliasing, FImageTolerance), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(IgnoreAntiAliasing, FImageTolerance), sizeof(bool), true);
			UProperty* NewProp_MaxBrightness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxBrightness"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(MaxBrightness, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_MinBrightness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinBrightness"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(MinBrightness, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_Alpha = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Alpha"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Alpha, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_Blue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Blue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Blue, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_Green = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Green"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Green, FImageTolerance), 0x0010000000000000);
			UProperty* NewProp_Red = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Red"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Red, FImageTolerance), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_MaximumGlobalError, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_MaximumLocalError, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_IgnoreColors, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_IgnoreAntiAliasing, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_MaxBrightness, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_MinBrightness, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_Alpha, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_Blue, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_Green, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
			MetaData->SetValue(NewProp_Red, TEXT("ModuleRelativePath"), TEXT("Public/ImageComparer.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC() { return 1150904810U; }
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ScreenShotComparisonTools")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0xE52E482B;
			Guid.B = 0xBFFE6AE6;
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
