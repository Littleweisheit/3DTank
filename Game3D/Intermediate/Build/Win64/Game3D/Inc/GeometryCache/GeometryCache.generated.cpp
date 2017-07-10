// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GeometryCache.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GeometryCache() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UMeshComponent();

	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCache();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_AGeometryCacheActor();
	GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheComponent();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack();
	GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
	GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation();
	GEOMETRYCACHE_API class UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation_NoRegister();
	GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation();
	GEOMETRYCACHE_API class UPackage* Z_Construct_UPackage__Script_GeometryCache();
	void UGeometryCache::StaticRegisterNativesUGeometryCache()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCache_NoRegister()
	{
		return UGeometryCache::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCache()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCache::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Tracks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Tracks"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Tracks, UGeometryCache), 0x0010000000020001);
				UProperty* NewProp_Tracks_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Tracks, TEXT("Tracks"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_UGeometryCacheTrack_NoRegister());
				UProperty* NewProp_Materials = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Materials"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Materials, UGeometryCache), 0x0010000000020001);
				UProperty* NewProp_Materials_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Materials, TEXT("Materials"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_UMaterialInterface_NoRegister());
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_ThumbnailInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThumbnailInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ThumbnailInfo, UGeometryCache), 0x00120008000a0009, Z_Construct_UClass_UThumbnailInfo_NoRegister());
				UProperty* NewProp_AssetImportData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetImportData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AssetImportData, UGeometryCache), 0x00120008000a0009, Z_Construct_UClass_UAssetImportData_NoRegister());
#endif // WITH_EDITORONLY_DATA
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCache> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UInterface_AssetUserData_NoRegister(), VTABLE_OFFSET(UGeometryCache, IInterface_AssetUserData), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCache.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCache.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.\nIn contrast with Static Meshes they can have their vertices animated in certain ways. *"));
				MetaData->SetValue(NewProp_Tracks, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_Tracks, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCache.h"));
				MetaData->SetValue(NewProp_Tracks, TEXT("ToolTip"), TEXT("GeometryCache track defining the samples/geometry data for this GeomCache instance"));
				MetaData->SetValue(NewProp_Materials, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_Materials, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCache.h"));
				MetaData->SetValue(NewProp_ThumbnailInfo, TEXT("Category"), TEXT("Thumbnail"));
				MetaData->SetValue(NewProp_ThumbnailInfo, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ThumbnailInfo, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCache.h"));
				MetaData->SetValue(NewProp_ThumbnailInfo, TEXT("ToolTip"), TEXT("Information for thumbnail rendering"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("Category"), TEXT("ImportSettings"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCache.h"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("ToolTip"), TEXT("Importing data and options used for this Geometry cache object"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCache, 1258372240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCache(Z_Construct_UClass_UGeometryCache, &UGeometryCache::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCache);
	void AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor()
	{
		UClass* Class = AGeometryCacheActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetGeometryCacheComponent", (Native)&AGeometryCacheActor::execGetGeometryCacheComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent()
	{
		struct GeometryCacheActor_eventGetGeometryCacheComponent_Parms
		{
			UGeometryCacheComponent* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AGeometryCacheActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGeometryCacheComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheActor_eventGetGeometryCacheComponent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, GeometryCacheActor_eventGetGeometryCacheComponent_Parms), 0x0010000000080588, Z_Construct_UClass_UGeometryCacheComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns GeometryCacheComponent subobject *"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister()
	{
		return AGeometryCacheActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AGeometryCacheActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = AGeometryCacheActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_GeometryCacheComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeometryCacheComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GeometryCacheComponent, AGeometryCacheActor), 0x00100000000a001d, Z_Construct_UClass_UGeometryCacheComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent(), "GetGeometryCacheComponent"); // 2034140306
				static TCppClassTypeInfo<TCppClassTypeTraits<AGeometryCacheActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IgnoreCategoryKeywordsInSubclasses"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("GeometryCache actor, serves as a place-able actor for GeometryCache objects"));
				MetaData->SetValue(NewProp_GeometryCacheComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_GeometryCacheComponent, TEXT("Category"), TEXT("GeometryCacheActor"));
				MetaData->SetValue(NewProp_GeometryCacheComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GeometryCacheComponent, TEXT("ExposeFunctionCategories"), TEXT("Mesh,Rendering,Physics,Components|GeometryCache"));
				MetaData->SetValue(NewProp_GeometryCacheComponent, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryCacheActor, 3817171308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCacheActor(Z_Construct_UClass_AGeometryCacheActor, &AGeometryCacheActor::StaticClass, TEXT("/Script/GeometryCache"), TEXT("AGeometryCacheActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheActor);
class UScriptStruct* FTrackRenderData::StaticStruct()
{
	extern GEOMETRYCACHE_API class UPackage* Z_Construct_UPackage__Script_GeometryCache();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData();
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackRenderData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackRenderData(FTrackRenderData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("TrackRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackRenderData")),new UScriptStruct::TCppStructOps<FTrackRenderData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFTrackRenderData;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackRenderData"), sizeof(FTrackRenderData), Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TrackRenderData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FTrackRenderData>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Stores the RenderData for each individual track"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC() { return 1396445586U; }
	void UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent()
	{
		UClass* Class = UGeometryCacheComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetPlaybackSpeed", (Native)&UGeometryCacheComponent::execGetPlaybackSpeed },
			{ "GetStartTimeOffset", (Native)&UGeometryCacheComponent::execGetStartTimeOffset },
			{ "IsLooping", (Native)&UGeometryCacheComponent::execIsLooping },
			{ "IsPlaying", (Native)&UGeometryCacheComponent::execIsPlaying },
			{ "IsPlayingReversed", (Native)&UGeometryCacheComponent::execIsPlayingReversed },
			{ "Pause", (Native)&UGeometryCacheComponent::execPause },
			{ "Play", (Native)&UGeometryCacheComponent::execPlay },
			{ "PlayFromStart", (Native)&UGeometryCacheComponent::execPlayFromStart },
			{ "PlayReversed", (Native)&UGeometryCacheComponent::execPlayReversed },
			{ "PlayReversedFromEnd", (Native)&UGeometryCacheComponent::execPlayReversedFromEnd },
			{ "SetGeometryCache", (Native)&UGeometryCacheComponent::execSetGeometryCache },
			{ "SetLooping", (Native)&UGeometryCacheComponent::execSetLooping },
			{ "SetPlaybackSpeed", (Native)&UGeometryCacheComponent::execSetPlaybackSpeed },
			{ "SetStartTimeOffset", (Native)&UGeometryCacheComponent::execSetStartTimeOffset },
			{ "Stop", (Native)&UGeometryCacheComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 15);
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed()
	{
		struct GeometryCacheComponent_eventGetPlaybackSpeed_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPlaybackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheComponent_eventGetPlaybackSpeed_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GeometryCacheComponent_eventGetPlaybackSpeed_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get current playback speed for GeometryCache."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset()
	{
		struct GeometryCacheComponent_eventGetStartTimeOffset_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStartTimeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheComponent_eventGetStartTimeOffset_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GeometryCacheComponent_eventGetStartTimeOffset_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get current start time offset for GeometryCache."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping()
	{
		struct GeometryCacheComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLooping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheComponent_eventIsLooping_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GeometryCacheComponent_eventIsLooping_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GeometryCacheComponent_eventIsLooping_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GeometryCacheComponent_eventIsLooping_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get whether this GeometryCache is looping or not."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying()
	{
		struct GeometryCacheComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheComponent_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GeometryCacheComponent_eventIsPlaying_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GeometryCacheComponent_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GeometryCacheComponent_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get whether this GeometryCache is playing or not."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed()
	{
		struct GeometryCacheComponent_eventIsPlayingReversed_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayingReversed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GeometryCacheComponent_eventIsPlayingReversed_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GeometryCacheComponent_eventIsPlayingReversed_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GeometryCacheComponent_eventIsPlayingReversed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get whether this GeometryCache is playing in reverse or not."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pause"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Pause playback of GeometryCache"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start playback of GeometryCache"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayFromStart"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start playback of GeometryCache from the start"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayReversed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start playback of GeometryCache in reverse"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayReversedFromEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start playback of GeometryCache from the end and play in reverse"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache()
	{
		struct GeometryCacheComponent_eventSetGeometryCache_Parms
		{
			UGeometryCache* NewGeomCache;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetGeometryCache"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535, sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GeometryCacheComponent_eventSetGeometryCache_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GeometryCacheComponent_eventSetGeometryCache_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GeometryCacheComponent_eventSetGeometryCache_Parms), sizeof(bool), true);
			UProperty* NewProp_NewGeomCache = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewGeomCache"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewGeomCache, GeometryCacheComponent_eventSetGeometryCache_Parms), 0x0010000000000080, Z_Construct_UClass_UGeometryCache_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Change the Geometry Cache used by this instance."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping()
	{
		struct GeometryCacheComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLooping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GeometryCacheComponent_eventSetLooping_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewLooping, GeometryCacheComponent_eventSetLooping_Parms, bool);
			UProperty* NewProp_bNewLooping = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewLooping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewLooping, GeometryCacheComponent_eventSetLooping_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bNewLooping, GeometryCacheComponent_eventSetLooping_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set whether this GeometryCache is looping or not."));
			MetaData->SetValue(NewProp_bNewLooping, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed()
	{
		struct GeometryCacheComponent_eventSetPlaybackSpeed_Parms
		{
			float NewPlaybackSpeed;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPlaybackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GeometryCacheComponent_eventSetPlaybackSpeed_Parms));
			UProperty* NewProp_NewPlaybackSpeed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPlaybackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewPlaybackSpeed, GeometryCacheComponent_eventSetPlaybackSpeed_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set new playback speed for GeometryCache."));
			MetaData->SetValue(NewProp_NewPlaybackSpeed, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset()
	{
		struct GeometryCacheComponent_eventSetStartTimeOffset_Parms
		{
			float NewStartTimeOffset;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStartTimeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GeometryCacheComponent_eventSetStartTimeOffset_Parms));
			UProperty* NewProp_NewStartTimeOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewStartTimeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewStartTimeOffset, GeometryCacheComponent_eventSetStartTimeOffset_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set current start time offset for GeometryCache."));
			MetaData->SetValue(NewProp_NewStartTimeOffset, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop()
	{
		UObject* Outer=Z_Construct_UClass_UGeometryCacheComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|GeometryCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop playback of GeometryCache"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMeshComponent();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCacheComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_Pause());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset());
				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheComponent_Stop());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ElapsedTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ElapsedTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElapsedTime, UGeometryCacheComponent), 0x0020080000020001);
				UProperty* NewProp_NumTracks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumTracks"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumTracks, UGeometryCacheComponent), 0x0020080000020001);
				UProperty* NewProp_PlaybackSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlaybackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PlaybackSpeed, UGeometryCacheComponent), 0x0020080200000005);
				UProperty* NewProp_StartTimeOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartTimeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTimeOffset, UGeometryCacheComponent), 0x0020080200000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLooping, UGeometryCacheComponent, bool);
				UProperty* NewProp_bLooping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLooping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLooping, UGeometryCacheComponent), 0x0020080200000005, CPP_BOOL_PROPERTY_BITMASK(bLooping, UGeometryCacheComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRunning, UGeometryCacheComponent, bool);
				UProperty* NewProp_bRunning = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRunning"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRunning, UGeometryCacheComponent), 0x0020080200000005, CPP_BOOL_PROPERTY_BITMASK(bRunning, UGeometryCacheComponent), sizeof(bool), true);
				UProperty* NewProp_GeometryCache = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeometryCache"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GeometryCache, UGeometryCacheComponent), 0x0010000000000015, Z_Construct_UClass_UGeometryCache_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed(), "GetPlaybackSpeed"); // 392327964
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset(), "GetStartTimeOffset"); // 1999860961
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping(), "IsLooping"); // 2743938495
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying(), "IsPlaying"); // 3242396804
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed(), "IsPlayingReversed"); // 4045954207
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_Pause(), "Pause"); // 2045215976
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_Play(), "Play"); // 3217977302
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart(), "PlayFromStart"); // 3956423443
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed(), "PlayReversed"); // 2362262897
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd(), "PlayReversedFromEnd"); // 2571292851
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache(), "SetGeometryCache"); // 1356806799
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping(), "SetLooping"); // 3711159514
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed(), "SetPlaybackSpeed"); // 3174048551
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset(), "SetStartTimeOffset"); // 1689989289
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheComponent_Stop(), "Stop"); // 3512497475
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCacheComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Rendering Common Experimental"));
				MetaData->SetValue(OuterClass, TEXT("DevelopmentStatus"), TEXT("Experimental"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object LOD Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches"));
				MetaData->SetValue(NewProp_ElapsedTime, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_ElapsedTime, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_NumTracks, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_NumTracks, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("ClampMax"), TEXT("512.0"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("ClampMin"), TEXT("-512.0"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("UIMax"), TEXT("4.0"));
				MetaData->SetValue(NewProp_PlaybackSpeed, TEXT("UIMin"), TEXT("-4.0"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("ClampMax"), TEXT("14400.0"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("ClampMin"), TEXT("-14400.0"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("UIMax"), TEXT("14400.0"));
				MetaData->SetValue(NewProp_StartTimeOffset, TEXT("UIMin"), TEXT("-14400.0"));
				MetaData->SetValue(NewProp_bLooping, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_bLooping, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_bRunning, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_bRunning, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_GeometryCache, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_GeometryCache, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheComponent.h"));
				MetaData->SetValue(NewProp_GeometryCache, TEXT("ToolTip"), TEXT("Geometry Cache instance referenced by the component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheComponent, 942485077);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheComponent(Z_Construct_UClass_UGeometryCacheComponent, &UGeometryCacheComponent::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheComponent);
	void UGeometryCacheTrack::StaticRegisterNativesUGeometryCacheTrack()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister()
	{
		return UGeometryCacheTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCacheTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20082080;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCacheTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack, 3687447575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack(Z_Construct_UClass_UGeometryCacheTrack, &UGeometryCacheTrack::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack);
class UScriptStruct* FGeometryCacheMeshData::StaticStruct()
{
	extern GEOMETRYCACHE_API class UPackage* Z_Construct_UPackage__Script_GeometryCache();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshData(FGeometryCacheMeshData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshData")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData;
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GeometryCacheMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheMeshData.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Stores per Track/Mesh data used for rendering"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC() { return 3229350114U; }
class UScriptStruct* FGeometryCacheMeshBatchInfo::StaticStruct()
{
	extern GEOMETRYCACHE_API class UPackage* Z_Construct_UPackage__Script_GeometryCache();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo();
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshBatchInfo(FGeometryCacheMeshBatchInfo::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshBatchInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshBatchInfo")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GeometryCacheMeshBatchInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheMeshData.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Stores per-batch data used for rendering"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC() { return 2925645197U; }
	void UGeometryCacheTrack_FlipbookAnimation::StaticRegisterNativesUGeometryCacheTrack_FlipbookAnimation()
	{
		UClass* Class = UGeometryCacheTrack_FlipbookAnimation::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddMeshSample", (Native)&UGeometryCacheTrack_FlipbookAnimation::execAddMeshSample },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample()
	{
		struct GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms
		{
			FGeometryCacheMeshData MeshData;
			float SampleTime;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddMeshSample"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms));
			UProperty* NewProp_SampleTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SampleTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SampleTime, GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms), 0x0010000000000082);
			UProperty* NewProp_MeshData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MeshData, GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FGeometryCacheMeshData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackFlipbookAnimation.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add a GeometryCacheMeshData sample to the Track\n\n@param MeshData - Holds the mesh data for the specific sample\n@param SampleTime - SampleTime for the specific sample being added\n@return void"));
			MetaData->SetValue(NewProp_SampleTime, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_MeshData, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation_NoRegister()
	{
		return UGeometryCacheTrack_FlipbookAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGeometryCacheTrack();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCacheTrack_FlipbookAnimation::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20102080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_NumMeshSamples = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumMeshSamples"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(NumMeshSamples, UGeometryCacheTrack_FlipbookAnimation), 0x0040000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheTrack_FlipbookAnimation_AddMeshSample(), "AddMeshSample"); // 1825955997
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCacheTrack_FlipbookAnimation> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheTrackFlipbookAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackFlipbookAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Derived GeometryCacheTrack class, used for Transform animation."));
				MetaData->SetValue(NewProp_NumMeshSamples, TEXT("Category"), TEXT("GeometryCache"));
				MetaData->SetValue(NewProp_NumMeshSamples, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackFlipbookAnimation.h"));
				MetaData->SetValue(NewProp_NumMeshSamples, TEXT("ToolTip"), TEXT("Number of Mesh Sample within this track"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack_FlipbookAnimation, 2440716463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_FlipbookAnimation(Z_Construct_UClass_UGeometryCacheTrack_FlipbookAnimation, &UGeometryCacheTrack_FlipbookAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_FlipbookAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_FlipbookAnimation);
	void UGeometryCacheTrack_TransformAnimation::StaticRegisterNativesUGeometryCacheTrack_TransformAnimation()
	{
		UClass* Class = UGeometryCacheTrack_TransformAnimation::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetMesh", (Native)&UGeometryCacheTrack_TransformAnimation::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh()
	{
		struct GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms
		{
			FGeometryCacheMeshData NewMeshData;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms));
			UProperty* NewProp_NewMeshData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewMeshData, GeometryCacheTrack_TransformAnimation_eventSetMesh_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FGeometryCacheMeshData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackTransformAnimation.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh"));
			MetaData->SetValue(NewProp_NewMeshData, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation_NoRegister()
	{
		return UGeometryCacheTrack_TransformAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGeometryCacheTrack();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCacheTrack_TransformAnimation::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20102080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheTrack_TransformAnimation_SetMesh(), "SetMesh"); // 3298671564
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCacheTrack_TransformAnimation> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheTrackTransformAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackTransformAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Derived GeometryCacheTrack class, used for Transform animation."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack_TransformAnimation, 3483505544);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_TransformAnimation(Z_Construct_UClass_UGeometryCacheTrack_TransformAnimation, &UGeometryCacheTrack_TransformAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_TransformAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_TransformAnimation);
	void UGeometryCacheTrack_TransformGroupAnimation::StaticRegisterNativesUGeometryCacheTrack_TransformGroupAnimation()
	{
		UClass* Class = UGeometryCacheTrack_TransformGroupAnimation::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetMesh", (Native)&UGeometryCacheTrack_TransformGroupAnimation::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh()
	{
		struct GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms
		{
			FGeometryCacheMeshData NewMeshData;
		};
		UObject* Outer=Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms));
			UProperty* NewProp_NewMeshData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewMeshData, GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FGeometryCacheMeshData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackTransformGroupAnimation.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh"));
			MetaData->SetValue(NewProp_NewMeshData, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation_NoRegister()
	{
		return UGeometryCacheTrack_TransformGroupAnimation::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGeometryCacheTrack();
			Z_Construct_UPackage__Script_GeometryCache();
			OuterClass = UGeometryCacheTrack_TransformGroupAnimation::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20102080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGeometryCacheTrack_TransformGroupAnimation_SetMesh(), "SetMesh"); // 1661975185
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGeometryCacheTrack_TransformGroupAnimation> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GeometryCacheTrackTransformGroupAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/GeometryCacheTrackTransformGroupAnimation.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Derived GeometryCacheTrack class, used for Transform animation."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCacheTrack_TransformGroupAnimation, 494313216);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCacheTrack_TransformGroupAnimation(Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation, &UGeometryCacheTrack_TransformGroupAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UGeometryCacheTrack_TransformGroupAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack_TransformGroupAnimation);
	UPackage* Z_Construct_UPackage__Script_GeometryCache()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GeometryCache")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x526B0983;
			Guid.B = 0x2FE6E50E;
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
