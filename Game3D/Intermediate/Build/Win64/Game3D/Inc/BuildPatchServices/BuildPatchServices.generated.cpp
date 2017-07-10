// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildPatchServices.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BuildPatchServices() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
	BUILDPATCHSERVICES_API class UEnum* Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader();
	BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
	BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
	BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
	BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
	BUILDPATCHSERVICES_API class UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();
	BUILDPATCHSERVICES_API class UClass* Z_Construct_UClass_UBuildPatchManifest();
	BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
class UScriptStruct* FSHAHashData::StaticStruct()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHAHashData(FSHAHashData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("SHAHashData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SHAHashData")),new UScriptStruct::TCppStructOps<FSHAHashData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData;
	UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SHAHashData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSHAHashData>, EStructFlags(0x00000001));
			UProperty* NewProp_Hash = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Hash"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Hash, FSHAHashData), 0x0010000000000000);
			NewProp_Hash->ArrayDim = CPP_ARRAY_DIM(Hash, FSHAHashData);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchChunk.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A UStruct wrapping SHA1 hash data for serialization"));
			MetaData->SetValue(NewProp_Hash, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchChunk.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC() { return 849107849U; }
static UEnum* EManifestFileHeader_StaticEnum()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UEnum* Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader();
		Singleton = GetStaticEnum(Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("EManifestFileHeader"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManifestFileHeader(EManifestFileHeader_StaticEnum, TEXT("/Script/BuildPatchServices"), TEXT("EManifestFileHeader"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManifestFileHeader"), 0, Get_Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EManifestFileHeader"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EManifestFileHeader::STORED_RAW"), 0);
			EnumNames.Emplace(TEXT("EManifestFileHeader::STORED_COMPRESSED"), 1);
			EnumNames.Emplace(TEXT("EManifestFileHeader::STORED_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EManifestFileHeader::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(ReturnEnum, TEXT("STORED_COMPRESSED.ToolTip"), TEXT("Flag for compressed."));
			MetaData->SetValue(ReturnEnum, TEXT("STORED_RAW.ToolTip"), TEXT("Zero means raw data."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("An enum type to describe the format that manifest data is stored"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader_CRC() { return 2280399013U; }
class UScriptStruct* FFileManifestData::StaticStruct()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileManifestData(FFileManifestData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("FileManifestData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileManifestData")),new UScriptStruct::TCppStructOps<FFileManifestData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData;
	UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FileManifestData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFileManifestData>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsCompressed, FFileManifestData, bool);
			UProperty* NewProp_bIsCompressed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsCompressed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsCompressed, FFileManifestData), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsCompressed, FFileManifestData), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsReadOnly, FFileManifestData, bool);
			UProperty* NewProp_bIsReadOnly = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsReadOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsReadOnly, FFileManifestData), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsReadOnly, FFileManifestData), sizeof(bool), true);
			UProperty* NewProp_SymlinkTarget = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SymlinkTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SymlinkTarget, FFileManifestData), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsUnixExecutable, FFileManifestData, bool);
			UProperty* NewProp_bIsUnixExecutable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsUnixExecutable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsUnixExecutable, FFileManifestData), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsUnixExecutable, FFileManifestData), sizeof(bool), true);
			UProperty* NewProp_InstallTags = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstallTags"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InstallTags, FFileManifestData), 0x0010000000000000);
			UProperty* NewProp_InstallTags_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InstallTags, TEXT("InstallTags"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FileChunkParts = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FileChunkParts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FileChunkParts, FFileManifestData), 0x0010000000000000);
			UProperty* NewProp_FileChunkParts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FileChunkParts, TEXT("FileChunkParts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FChunkPartData());
			UProperty* NewProp_FileHash = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FileHash"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FileHash, FFileManifestData), 0x0010000000000000, Z_Construct_UScriptStruct_FSHAHashData());
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, FFileManifestData), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A data structure that describes a file's construction information"));
			MetaData->SetValue(NewProp_bIsCompressed, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_bIsReadOnly, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_SymlinkTarget, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_bIsUnixExecutable, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_InstallTags, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_FileChunkParts, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_FileHash, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Filename, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC() { return 1445118230U; }
class UScriptStruct* FChunkPartData::StaticStruct()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkPartData(FChunkPartData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkPartData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkPartData")),new UScriptStruct::TCppStructOps<FChunkPartData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData;
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChunkPartData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FChunkPartData>, EStructFlags(0x00000001));
			UProperty* NewProp_Size = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Size"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(Size, FChunkPartData), 0x0010000000000000);
			UProperty* NewProp_Offset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Offset"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(Offset, FChunkPartData), 0x0010000000000000);
			UProperty* NewProp_Guid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Guid, FChunkPartData), 0x0010000000000000, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A data structure describing the part of a chunk used to construct a file"));
			MetaData->SetValue(NewProp_Size, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Size, TEXT("ToolTip"), TEXT("The size of this part"));
			MetaData->SetValue(NewProp_Offset, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Offset, TEXT("ToolTip"), TEXT("The offset of the first byte into the chunk"));
			MetaData->SetValue(NewProp_Guid, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Guid, TEXT("ToolTip"), TEXT("The GUID of the chunk containing this part"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC() { return 3529431932U; }
class UScriptStruct* FChunkInfoData::StaticStruct()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkInfoData(FChunkInfoData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkInfoData")),new UScriptStruct::TCppStructOps<FChunkInfoData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData;
	UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChunkInfoData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FChunkInfoData>, EStructFlags(0x00000001));
			UProperty* NewProp_GroupNumber = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GroupNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(GroupNumber, FChunkInfoData), 0x0010000000000000);
			UProperty* NewProp_FileSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FileSize"), RF_Public|RF_Transient|RF_MarkAsNative) UInt64Property(CPP_PROPERTY_BASE(FileSize, FChunkInfoData), 0x0010000000000000);
			UProperty* NewProp_ShaHash = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShaHash"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ShaHash, FChunkInfoData), 0x0010000000000000, Z_Construct_UScriptStruct_FSHAHashData());
			UProperty* NewProp_Hash = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Hash"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt64Property(CPP_PROPERTY_BASE(Hash, FChunkInfoData), 0x0010000000000000);
			UProperty* NewProp_Guid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Guid, FChunkInfoData), 0x0010000000000000, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A data structure describing a chunk file"));
			MetaData->SetValue(NewProp_GroupNumber, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_FileSize, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_ShaHash, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Hash, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Guid, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC() { return 2190557171U; }
class UScriptStruct* FCustomFieldData::StaticStruct()
{
	extern BUILDPATCHSERVICES_API class UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API class UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFieldData(FCustomFieldData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("CustomFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomFieldData")),new UScriptStruct::TCppStructOps<FCustomFieldData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CustomFieldData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCustomFieldData>, EStructFlags(0x00000001));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Value, FCustomFieldData), 0x0010000000000000);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Key, FCustomFieldData), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A data structure that hold a manifests custom field. This is a key value pair of strings"));
			MetaData->SetValue(NewProp_Value, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC() { return 616097766U; }
	void UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest()
	{
	}
	UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister()
	{
		return UBuildPatchManifest::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuildPatchManifest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_BuildPatchServices();
			OuterClass = UBuildPatchManifest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CustomFields = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomFields"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CustomFields, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_CustomFields_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CustomFields, TEXT("CustomFields"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FCustomFieldData());
				UProperty* NewProp_ChunkList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ChunkList, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_ChunkList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ChunkList, TEXT("ChunkList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FChunkInfoData());
				UProperty* NewProp_FileManifestList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FileManifestList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FileManifestList, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_FileManifestList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FileManifestList, TEXT("FileManifestList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFileManifestData());
				UProperty* NewProp_PrereqArgs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrereqArgs"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PrereqArgs, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_PrereqPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrereqPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PrereqPath, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_PrereqName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrereqName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PrereqName, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_LaunchCommand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchCommand"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LaunchCommand, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_LaunchExe = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchExe"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LaunchExe, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_BuildVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuildVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BuildVersion, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_AppName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AppName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AppName, UBuildPatchManifest), 0x0010000000000000);
				UProperty* NewProp_AppID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AppID"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(AppID, UBuildPatchManifest), 0x0010000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsFileData, UBuildPatchManifest, bool);
				UProperty* NewProp_bIsFileData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsFileData"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsFileData, UBuildPatchManifest), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsFileData, UBuildPatchManifest), sizeof(bool), true);
				UProperty* NewProp_ManifestFileVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ManifestFileVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ManifestFileVersion, UBuildPatchManifest), 0x0010000000000000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UBuildPatchManifest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuildPatchManifest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This is the manifest UObject where all manifest data is stored"));
				MetaData->SetValue(NewProp_CustomFields, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_ChunkList, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_FileManifestList, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_PrereqArgs, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_PrereqPath, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_PrereqName, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_LaunchCommand, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_LaunchExe, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_BuildVersion, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_AppName, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_AppID, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_bIsFileData, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
				MetaData->SetValue(NewProp_ManifestFileVersion, TEXT("ModuleRelativePath"), TEXT("Private/BuildPatchManifest.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuildPatchManifest, 447846838);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuildPatchManifest(Z_Construct_UClass_UBuildPatchManifest, &UBuildPatchManifest::StaticClass, TEXT("/Script/BuildPatchServices"), TEXT("UBuildPatchManifest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildPatchManifest);
	UPackage* Z_Construct_UPackage__Script_BuildPatchServices()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BuildPatchServices")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x6C8A6C28;
			Guid.B = 0xCAF62CF9;
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
