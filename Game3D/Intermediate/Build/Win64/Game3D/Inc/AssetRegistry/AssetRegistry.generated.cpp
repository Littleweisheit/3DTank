// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AssetRegistry.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AssetRegistry() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();

	ASSETREGISTRY_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	ASSETREGISTRY_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry();
	ASSETREGISTRY_API class UPackage* Z_Construct_UPackage__Script_AssetRegistry();
class UScriptStruct* FAssetBundleData::StaticStruct()
{
	extern ASSETREGISTRY_API class UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleData, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleData(FAssetBundleData::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleData")),new UScriptStruct::TCppStructOps<FAssetBundleData>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AssetBundleData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAssetBundleData>, EStructFlags(0x00000201));
			UProperty* NewProp_Bundles = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bundles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bundles, FAssetBundleData), 0x0010000000000000);
			UProperty* NewProp_Bundles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bundles, TEXT("Bundles"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAssetBundleEntry());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A struct with a list of asset bundle entries. If one of these is inside a UObject it will get automatically exported as the asset registry tag AssetBundleData"));
			MetaData->SetValue(NewProp_Bundles, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(NewProp_Bundles, TEXT("ToolTip"), TEXT("List of bundles defined"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC() { return 1985386983U; }
class UScriptStruct* FAssetBundleEntry::StaticStruct()
{
	extern ASSETREGISTRY_API class UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry();
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleEntry, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleEntry(FAssetBundleEntry::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleEntry")),new UScriptStruct::TCppStructOps<FAssetBundleEntry>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AssetBundleEntry"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAssetBundleEntry>, EStructFlags(0x00000201));
			UProperty* NewProp_BundleAssets = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BundleAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BundleAssets, FAssetBundleEntry), 0x0010000000000000);
			UProperty* NewProp_BundleAssets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BundleAssets, TEXT("BundleAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FStringAssetReference());
			UProperty* NewProp_BundleName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BundleName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(BundleName, FAssetBundleEntry), 0x0010000000000000);
			UProperty* NewProp_BundleScope = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BundleScope"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BundleScope, FAssetBundleEntry), 0x0010000000000000, Z_Construct_UScriptStruct_FPrimaryAssetId());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A struct representing a single AssetBundle"));
			MetaData->SetValue(NewProp_BundleAssets, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(NewProp_BundleAssets, TEXT("ToolTip"), TEXT("List of string assets contained in this bundle"));
			MetaData->SetValue(NewProp_BundleName, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(NewProp_BundleName, TEXT("ToolTip"), TEXT("Specific name of this bundle, should be unique for a given scope"));
			MetaData->SetValue(NewProp_BundleScope, TEXT("ModuleRelativePath"), TEXT("Public/AssetBundleData.h"));
			MetaData->SetValue(NewProp_BundleScope, TEXT("ToolTip"), TEXT("Asset this bundle is saved within. This is empty for global bundles, or in the saved bundle info"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC() { return 985928333U; }
	UPackage* Z_Construct_UPackage__Script_AssetRegistry()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AssetRegistry")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x9F7F1347;
			Guid.B = 0xC11B90C5;
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
