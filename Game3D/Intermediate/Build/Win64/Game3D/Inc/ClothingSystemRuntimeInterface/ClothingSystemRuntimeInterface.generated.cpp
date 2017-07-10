// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ClothingSystemRuntimeInterface() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();

	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingAssetBase();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingSimulationFactory();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	void UClothingAssetBase::StaticRegisterNativesUClothingAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister()
	{
		return UClothingAssetBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAssetBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
			OuterClass = UClothingAssetBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100081;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AssetGuid = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetGuid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AssetGuid, UClothingAssetBase), 0x0020080000000000, Z_Construct_UScriptStruct_FGuid());
				UProperty* NewProp_ImportedFilePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImportedFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ImportedFilePath, UClothingAssetBase), 0x0010000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UClothingAssetBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ClothingAssetInterface.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ClothingAssetInterface.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An interface object for any clothing asset the engine can use. Any\nclothing asset concrete object should derive from this."));
				MetaData->SetValue(NewProp_AssetGuid, TEXT("ModuleRelativePath"), TEXT("Public/ClothingAssetInterface.h"));
				MetaData->SetValue(NewProp_AssetGuid, TEXT("ToolTip"), TEXT("Guid to identify this asset. Will be embedded into chunks that are created using this asset"));
				MetaData->SetValue(NewProp_ImportedFilePath, TEXT("Category"), TEXT("Import"));
				MetaData->SetValue(NewProp_ImportedFilePath, TEXT("ModuleRelativePath"), TEXT("Public/ClothingAssetInterface.h"));
				MetaData->SetValue(NewProp_ImportedFilePath, TEXT("ToolTip"), TEXT("If this asset was imported from a file, this will be the original path"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetBase, 3395277243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetBase(Z_Construct_UClass_UClothingAssetBase, &UClothingAssetBase::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetBase);
	void UClothingSimulationFactory::StaticRegisterNativesUClothingSimulationFactory()
	{
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister()
	{
		return UClothingSimulationFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
			OuterClass = UClothingSimulationFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UClothingSimulationFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ClothingSimulationFactoryInterface.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSimulationFactoryInterface.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Any clothing simulation factory should derive from this interface object to interact with the engine"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationFactory, 856266086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationFactory(Z_Construct_UClass_UClothingSimulationFactory, &UClothingSimulationFactory::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingSimulationFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactory);
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionData(FClothCollisionData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionData")),new UScriptStruct::TCppStructOps<FClothCollisionData>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothCollisionData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothCollisionData>, EStructFlags(0x00000001));
			UProperty* NewProp_Convexes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Convexes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Convexes, FClothCollisionData), 0x0010000000000001);
			UProperty* NewProp_Convexes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Convexes, TEXT("Convexes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex());
			UProperty* NewProp_SphereConnections = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SphereConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SphereConnections, FClothCollisionData), 0x0010000000000001);
			UProperty* NewProp_SphereConnections_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SphereConnections, TEXT("SphereConnections"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection());
			UProperty* NewProp_Spheres = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Spheres"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Spheres, FClothCollisionData), 0x0010000000000001);
			UProperty* NewProp_Spheres_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Spheres, TEXT("Spheres"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_Convexes, TEXT("Category"), TEXT("Collison"));
			MetaData->SetValue(NewProp_Convexes, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_Convexes, TEXT("ToolTip"), TEXT("Convex Data"));
			MetaData->SetValue(NewProp_SphereConnections, TEXT("Category"), TEXT("Collison"));
			MetaData->SetValue(NewProp_SphereConnections, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_SphereConnections, TEXT("ToolTip"), TEXT("Capsule data"));
			MetaData->SetValue(NewProp_Spheres, TEXT("Category"), TEXT("Collison"));
			MetaData->SetValue(NewProp_Spheres, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_Spheres, TEXT("ToolTip"), TEXT("Sphere data"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC() { return 2867871865U; }
class UScriptStruct* FClothCollisionPrim_Convex::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Convex(FClothCollisionPrim_Convex::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Convex"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Convex")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothCollisionPrim_Convex"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>, EStructFlags(0x00000001));
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FClothCollisionPrim_Convex), 0x0010000000000000);
			UProperty* NewProp_Planes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Planes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Planes, FClothCollisionPrim_Convex), 0x0010000000000000);
			UProperty* NewProp_Planes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Planes, TEXT("Planes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FPlane());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Data for a single convex element\nA convex is a collection of planes, in which the clothing will attempt to stay outside of the\nshape created by the planes combined."));
			MetaData->SetValue(NewProp_BoneIndex, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_Planes, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC() { return 2018975954U; }
class UScriptStruct* FClothCollisionPrim_SphereConnection::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_SphereConnection(FClothCollisionPrim_SphereConnection::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_SphereConnection"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_SphereConnection")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothCollisionPrim_SphereConnection"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>, EStructFlags(0x00000001));
			UProperty* NewProp_SphereIndices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SphereIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SphereIndices, FClothCollisionPrim_SphereConnection), 0x0010000000000000);
			NewProp_SphereIndices->ArrayDim = CPP_ARRAY_DIM(SphereIndices, FClothCollisionPrim_SphereConnection);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Data for a single connected sphere primitive. This should be configured after all spheres have\nbeen processed as they are really just indexing the existing spheres"));
			MetaData->SetValue(NewProp_SphereIndices, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC() { return 1072814213U; }
class UScriptStruct* FClothCollisionPrim_Sphere::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Sphere(FClothCollisionPrim_Sphere::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Sphere"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Sphere")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothCollisionPrim_Sphere"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>, EStructFlags(0x00000001));
			UProperty* NewProp_LocalPosition = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LocalPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LocalPosition, FClothCollisionPrim_Sphere), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, FClothCollisionPrim_Sphere), 0x0010000000000000);
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FClothCollisionPrim_Sphere), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Data for a single sphere primitive in the clothing simulation. This can either be a\nsphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule"));
			MetaData->SetValue(NewProp_LocalPosition, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
			MetaData->SetValue(NewProp_BoneIndex, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSystemRuntimeTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC() { return 1996321106U; }
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ClothingSystemRuntimeInterface")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xE8DEDDA6;
			Guid.B = 0x40E59513;
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
