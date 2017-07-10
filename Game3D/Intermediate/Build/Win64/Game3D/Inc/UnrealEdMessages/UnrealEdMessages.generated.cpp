// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UnrealEdMessages.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UnrealEdMessages() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	UNREALEDMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
	UNREALEDMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady();
	UNREALEDMESSAGES_API class UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
class UScriptStruct* FAssetEditorRequestOpenAsset::StaticStruct()
{
	extern UNREALEDMESSAGES_API class UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorRequestOpenAsset(FAssetEditorRequestOpenAsset::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("AssetEditorRequestOpenAsset"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorRequestOpenAsset")),new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AssetEditorRequestOpenAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>, EStructFlags(0x00000001));
			UProperty* NewProp_AssetName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssetName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AssetName, FAssetEditorRequestOpenAsset), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AssetEditorMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message for opening an asset in the asset browser."));
			MetaData->SetValue(NewProp_AssetName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AssetName, TEXT("ModuleRelativePath"), TEXT("Classes/AssetEditorMessages.h"));
			MetaData->SetValue(NewProp_AssetName, TEXT("ToolTip"), TEXT("Holds the name of the asset to open."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC() { return 3611832649U; }
class UScriptStruct* FFileServerReady::StaticStruct()
{
	extern UNREALEDMESSAGES_API class UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady();
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileServerReady, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileServerReady(FFileServerReady::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("FileServerReady"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileServerReady")),new UScriptStruct::TCppStructOps<FFileServerReady>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady;
	UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FileServerReady"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFileServerReady>, EStructFlags(0x00000001));
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FFileServerReady), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_AddressList = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AddressList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AddressList, FFileServerReady), 0x0010000000000001);
			UProperty* NewProp_AddressList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AddressList, TEXT("AddressList"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/FileServerMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is published by file servers when they're ready to accept connections."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Classes/FileServerMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("Holds the file server's application identifier."));
			MetaData->SetValue(NewProp_AddressList, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_AddressList, TEXT("ModuleRelativePath"), TEXT("Classes/FileServerMessages.h"));
			MetaData->SetValue(NewProp_AddressList, TEXT("ToolTip"), TEXT("Holds the list of IP addresses that the file server is listening on."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC() { return 333355885U; }
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/UnrealEdMessages")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0xE811B65E;
			Guid.B = 0xEED9F147;
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
