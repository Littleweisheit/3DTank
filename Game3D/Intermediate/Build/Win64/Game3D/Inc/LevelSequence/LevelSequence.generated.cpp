// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LevelSequence.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1LevelSequence() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FStringClassReference();
	MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
	UMG_API class UClass* Z_Construct_UClass_UUserWidget();

	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequence();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequencePlayer();
	LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ALevelSequenceActor();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass();
	LEVELSEQUENCE_API class UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceBurnIn();
	LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
class UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObject(FLevelSequenceObject::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObject"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceObject")),new UScriptStruct::TCppStructOps<FLevelSequenceObject>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceObject"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceObject>, EStructFlags(0x00000001));
			UProperty* NewProp_CachedComponent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CachedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UWeakObjectProperty(CPP_PROPERTY_BASE(CachedComponent, FLevelSequenceObject), 0x0044000000002000, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_ComponentName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ComponentName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ComponentName, FLevelSequenceObject), 0x0040000000000000);
			UProperty* NewProp_ObjectOrOwner = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObjectOrOwner"), RF_Public|RF_Transient|RF_MarkAsNative) ULazyObjectProperty(CPP_PROPERTY_BASE(ObjectOrOwner, FLevelSequenceObject), 0x0044000000000000, Z_Construct_UClass_UObject_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceObject.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure for animated Actor objects."));
			MetaData->SetValue(NewProp_CachedComponent, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceObject.h"));
			MetaData->SetValue(NewProp_CachedComponent, TEXT("ToolTip"), TEXT("Cached pointer to the Actor component (only if ComponentName is set)."));
			MetaData->SetValue(NewProp_ComponentName, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceObject.h"));
			MetaData->SetValue(NewProp_ComponentName, TEXT("ToolTip"), TEXT("Optional name of an ActorComponent."));
			MetaData->SetValue(NewProp_ObjectOrOwner, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceObject.h"));
			MetaData->SetValue(NewProp_ObjectOrOwner, TEXT("ToolTip"), TEXT("The object or the owner of the object being possessed."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC() { return 93497149U; }
class UScriptStruct* FLevelSequenceBindingReferences::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferences(FLevelSequenceBindingReferences::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferences"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferences")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceBindingReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>, EStructFlags(0x00000001));
			UProperty* NewProp_BindingIdToReferences = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BindingIdToReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(BindingIdToReferences, FLevelSequenceBindingReferences), 0x0040000000000000);
			UProperty* NewProp_BindingIdToReferences_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_BindingIdToReferences, TEXT("BindingIdToReferences_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_BindingIdToReferences_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_BindingIdToReferences, TEXT("BindingIdToReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID."));
			MetaData->SetValue(NewProp_BindingIdToReferences, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(NewProp_BindingIdToReferences, TEXT("ToolTip"), TEXT("The map from object binding ID to an array of references that pertain to that ID"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC() { return 1061711075U; }
class UScriptStruct* FLevelSequenceBindingReferenceArray::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferenceArray(FLevelSequenceBindingReferenceArray::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferenceArray"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferenceArray")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceBindingReferenceArray"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>, EStructFlags(0x00000001));
			UProperty* NewProp_References = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(References, FLevelSequenceBindingReferenceArray), 0x0010000000000000);
			UProperty* NewProp_References_Inner = new(EC_InternalUseOnlyConstructor, NewProp_References, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FLevelSequenceBindingReference());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("An array of binding references"));
			MetaData->SetValue(NewProp_References, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC() { return 1789524142U; }
class UScriptStruct* FLevelSequenceBindingReference::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReference(FLevelSequenceBindingReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReference")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceBindingReference"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>, EStructFlags(0x00000001));
			UProperty* NewProp_ObjectPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObjectPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ObjectPath, FLevelSequenceBindingReference), 0x0040000000000000);
			UProperty* NewProp_PackageName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PackageName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PackageName, FLevelSequenceBindingReference), 0x0040000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("An external reference to an level sequence object, resolvable through an arbitrary context.\n\nBindings consist of an optional package name, and the path to the object within that package.\nWhere package name is empty, the reference is a relative path from a specific outer (the context).\nCurrently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors."));
			MetaData->SetValue(NewProp_ObjectPath, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(NewProp_ObjectPath, TEXT("ToolTip"), TEXT("The path of the object within the package, or from its outer (where PackageName is empty)"));
			MetaData->SetValue(NewProp_PackageName, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBindingReference.h"));
			MetaData->SetValue(NewProp_PackageName, TEXT("ToolTip"), TEXT("The package name in which the object resides"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC() { return 3757194832U; }
class UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObjectReferenceMap(FLevelSequenceObjectReferenceMap::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObjectReferenceMap"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceObjectReferenceMap")),new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceObjectReferenceMap"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceLegacyObjectReference.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC() { return 2312199419U; }
class UScriptStruct* FLevelSequenceLegacyObjectReference::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceLegacyObjectReference(FLevelSequenceLegacyObjectReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceLegacyObjectReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceLegacyObjectReference")),new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceLegacyObjectReference"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceLegacyObjectReference.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC() { return 711069446U; }
	void ULevelSequence::StaticRegisterNativesULevelSequence()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
	{
		return ULevelSequence::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequence()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSequence();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ULevelSequence::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PossessedObjects = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PossessedObjects"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(PossessedObjects_DEPRECATED, ULevelSequence), 0x0020080020000000);
				UProperty* NewProp_PossessedObjects_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_PossessedObjects, TEXT("PossessedObjects_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_PossessedObjects_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_PossessedObjects, TEXT("PossessedObjects"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000020000000, Z_Construct_UScriptStruct_FLevelSequenceObject());
				UProperty* NewProp_BindingReferences = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BindingReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BindingReferences, ULevelSequence), 0x0020080000000000, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences());
				UProperty* NewProp_ObjectReferences = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObjectReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ObjectReferences, ULevelSequence), 0x0020080000000000, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap());
				UProperty* NewProp_MovieScene = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovieScene"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MovieScene, ULevelSequence), 0x0010000000080008, Z_Construct_UClass_UMovieScene_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ULevelSequence> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequence.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequence.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Movie scene animation for Actors."));
				MetaData->SetValue(NewProp_PossessedObjects, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequence.h"));
				MetaData->SetValue(NewProp_PossessedObjects, TEXT("ToolTip"), TEXT("Deprecated property housing old possessed object bindings"));
				MetaData->SetValue(NewProp_BindingReferences, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequence.h"));
				MetaData->SetValue(NewProp_BindingReferences, TEXT("ToolTip"), TEXT("References to bound objects."));
				MetaData->SetValue(NewProp_ObjectReferences, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequence.h"));
				MetaData->SetValue(NewProp_ObjectReferences, TEXT("ToolTip"), TEXT("Legacy object references - should be read-only. Not deprecated because they need to still be saved"));
				MetaData->SetValue(NewProp_MovieScene, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MovieScene, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequence.h"));
				MetaData->SetValue(NewProp_MovieScene, TEXT("ToolTip"), TEXT("Pointer to the movie scene that controls this animation."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequence, 3479841067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequence(Z_Construct_UClass_ULevelSequence, &ULevelSequence::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
class UScriptStruct* FLevelSequencePlayerSnapshot::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequencePlayerSnapshot(FLevelSequencePlayerSnapshot::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequencePlayerSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequencePlayerSnapshot")),new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequencePlayerSnapshot"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>, EStructFlags(0x00000005));
			UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, FLevelSequencePlayerSnapshot), 0x0010000000020015, Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings());
			UProperty* NewProp_CameraComponent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComponent, FLevelSequencePlayerSnapshot), 0x00100000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
			UProperty* NewProp_CurrentShotLocalTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CurrentShotLocalTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentShotLocalTime, FLevelSequencePlayerSnapshot), 0x0010000000020015);
			UProperty* NewProp_CurrentShotName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CurrentShotName"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(CurrentShotName, FLevelSequencePlayerSnapshot), 0x0010000000020015);
			UProperty* NewProp_MasterTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MasterTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MasterTime, FLevelSequencePlayerSnapshot), 0x0010000000020015);
			UProperty* NewProp_MasterName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MasterName"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(MasterName, FLevelSequencePlayerSnapshot), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Frame snapshot information for a level sequence"));
			MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_CameraComponent, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_CameraComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_CameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_CurrentShotLocalTime, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_CurrentShotLocalTime, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_CurrentShotName, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_CurrentShotName, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_MasterTime, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_MasterTime, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_MasterName, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_MasterName, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC() { return 4104124154U; }
class UScriptStruct* FLevelSequenceSnapshotSettings::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceSnapshotSettings(FLevelSequenceSnapshotSettings::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceSnapshotSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceSnapshotSettings")),new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelSequenceSnapshotSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_FrameRate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FrameRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FrameRate, FLevelSequenceSnapshotSettings), 0x0010000000020015);
			UProperty* NewProp_ZeroPadAmount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ZeroPadAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ZeroPadAmount, FLevelSequenceSnapshotSettings), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_FrameRate, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_FrameRate, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_FrameRate, TEXT("ToolTip"), TEXT("Playback framerate"));
			MetaData->SetValue(NewProp_ZeroPadAmount, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_ZeroPadAmount, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(NewProp_ZeroPadAmount, TEXT("ToolTip"), TEXT("Zero pad frames"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC() { return 2156533347U; }
	void ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer()
	{
		UClass* Class = ULevelSequencePlayer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CreateLevelSequencePlayer", (Native)&ULevelSequencePlayer::execCreateLevelSequencePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer()
	{
		struct LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			ULevelSequence* LevelSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ULevelSequencePlayer* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ULevelSequencePlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateLevelSequencePlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), 0x0010000000000580, Z_Construct_UClass_ULevelSequencePlayer_NoRegister());
			UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Settings, LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings());
			UProperty* NewProp_LevelSequence = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LevelSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LevelSequence, LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), 0x0010000000000080, Z_Construct_UClass_ULevelSequence_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Create a new level sequence player.\n\n@param WorldContextObject Context object from which to retrieve a UWorld.\n@param LevelSequence The level sequence to play.\n@param Settings The desired playback settings"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSequencePlayer();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ULevelSequencePlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AdditionalEventReceivers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionalEventReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalEventReceivers, ULevelSequencePlayer), 0x0020080000002000);
				UProperty* NewProp_AdditionalEventReceivers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalEventReceivers, TEXT("AdditionalEventReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer(), "CreateLevelSequencePlayer"); // 3335142518
				static TCppClassTypeInfo<TCppClassTypeTraits<ULevelSequencePlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequencePlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n\nThis class keeps track of playback state and provides functions for manipulating\nan level sequence while its playing."));
				MetaData->SetValue(NewProp_AdditionalEventReceivers, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequencePlayer.h"));
				MetaData->SetValue(NewProp_AdditionalEventReceivers, TEXT("ToolTip"), TEXT("Array of additional event receivers"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequencePlayer, 1180718742);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequencePlayer(Z_Construct_UClass_ULevelSequencePlayer, &ULevelSequencePlayer::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlayer);
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	extern LEVELSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_LevelSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoundActorProxy(FBoundActorProxy::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("BoundActorProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoundActorProxy")),new UScriptStruct::TCppStructOps<FBoundActorProxy>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy;
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BoundActorProxy"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBoundActorProxy>, EStructFlags(0x00000001));
#if WITH_EDITORONLY_DATA
			UProperty* NewProp_BoundActor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoundActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BoundActor, FBoundActorProxy), 0x0010040800000801, Z_Construct_UClass_AActor_NoRegister());
#endif // WITH_EDITORONLY_DATA
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(NewProp_BoundActor, TEXT("Category"), TEXT("General"));
			MetaData->SetValue(NewProp_BoundActor, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(NewProp_BoundActor, TEXT("ToolTip"), TEXT("Specifies the actor to override the binding with"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC() { return 2943402336U; }
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ULevelSequenceBurnInInitSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20300080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ULevelSequenceBurnInInitSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequenceActor.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInInitSettings, 3934711273);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings(Z_Construct_UClass_ULevelSequenceBurnInInitSettings, &ULevelSequenceBurnInInitSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInInitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ULevelSequenceBurnInOptions::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Settings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Settings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Settings, ULevelSequenceBurnInOptions), 0x0012000000080009, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister());
				UProperty* NewProp_BurnInClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BurnInClass"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BurnInClass, ULevelSequenceBurnInOptions), 0x0010000000000001, Z_Construct_UScriptStruct_FStringClassReference());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseBurnIn, ULevelSequenceBurnInOptions, bool);
				UProperty* NewProp_bUseBurnIn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseBurnIn"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseBurnIn, ULevelSequenceBurnInOptions), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseBurnIn, ULevelSequenceBurnInOptions), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ULevelSequenceBurnInOptions> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequenceActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_Settings, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_Settings, TEXT("EditCondition"), TEXT("bUseBurnIn"));
				MetaData->SetValue(NewProp_Settings, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Settings, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_BurnInClass, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_BurnInClass, TEXT("EditCondition"), TEXT("bUseBurnIn"));
				MetaData->SetValue(NewProp_BurnInClass, TEXT("MetaClass"), TEXT("LevelSequenceBurnIn"));
				MetaData->SetValue(NewProp_BurnInClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_bUseBurnIn, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_bUseBurnIn, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInOptions, 2451186534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions(Z_Construct_UClass_ULevelSequenceBurnInOptions, &ULevelSequenceBurnInOptions::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddBinding", (Native)&ALevelSequenceActor::execAddBinding },
			{ "GetSequence", (Native)&ALevelSequenceActor::execGetSequence },
			{ "RemoveBinding", (Native)&ALevelSequenceActor::execRemoveBinding },
			{ "ResetBinding", (Native)&ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", (Native)&ALevelSequenceActor::execResetBindings },
			{ "SetBinding", (Native)&ALevelSequenceActor::execSetBinding },
			{ "SetEventReceivers", (Native)&ALevelSequenceActor::execSetEventReceivers },
			{ "SetSequence", (Native)&ALevelSequenceActor::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 8);
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LevelSequenceActor_eventAddBinding_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowBindingsFromAsset, LevelSequenceActor_eventAddBinding_Parms, bool);
			UProperty* NewProp_bAllowBindingsFromAsset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowBindingsFromAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowBindingsFromAsset, LevelSequenceActor_eventAddBinding_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowBindingsFromAsset, LevelSequenceActor_eventAddBinding_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, LevelSequenceActor_eventAddBinding_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Binding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Binding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Binding, LevelSequenceActor_eventAddBinding_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic|Bindings"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowBindingsFromAsset"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			bool Load;
			ULevelSequence* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(LevelSequenceActor_eventGetSequence_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LevelSequenceActor_eventGetSequence_Parms), 0x0010000000000580, Z_Construct_UClass_ULevelSequence_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Load, LevelSequenceActor_eventGetSequence_Parms, bool);
			UProperty* NewProp_Load = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Load"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Load, LevelSequenceActor_eventGetSequence_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Load, LevelSequenceActor_eventGetSequence_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Load"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the level sequence being played by this actor.\n\n@param Whether to load the sequence object if it is not already in memory.\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LevelSequenceActor_eventRemoveBinding_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, LevelSequenceActor_eventRemoveBinding_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Binding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Binding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Binding, LevelSequenceActor_eventRemoveBinding_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic|Bindings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Removes the specified actor from the specified binding's actor array"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LevelSequenceActor_eventResetBinding_Parms));
			UProperty* NewProp_Binding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Binding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Binding, LevelSequenceActor_eventResetBinding_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic|Bindings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resets the specified binding back to the defaults defined by the Level Sequence asset"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic|Bindings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resets all overridden bindings back to the defaults defined by the Level Sequence asset"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(LevelSequenceActor_eventSetBinding_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowBindingsFromAsset, LevelSequenceActor_eventSetBinding_Parms, bool);
			UProperty* NewProp_bAllowBindingsFromAsset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowBindingsFromAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowBindingsFromAsset, LevelSequenceActor_eventSetBinding_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowBindingsFromAsset, LevelSequenceActor_eventSetBinding_Parms), sizeof(bool), true);
			UProperty* NewProp_Actors = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actors"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Actors, LevelSequenceActor_eventSetBinding_Parms), 0x0010000008000182);
			UProperty* NewProp_Actors_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Actors, TEXT("Actors"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Binding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Binding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Binding, LevelSequenceActor_eventSetBinding_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic|Bindings"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowBindingsFromAsset"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset"));
			MetaData->SetValue(NewProp_Actors, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers()
	{
		struct LevelSequenceActor_eventSetEventReceivers_Parms
		{
			TArray<AActor*> AdditionalReceivers;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEventReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LevelSequenceActor_eventSetEventReceivers_Parms));
			UProperty* NewProp_AdditionalReceivers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdditionalReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalReceivers, LevelSequenceActor_eventSetEventReceivers_Parms), 0x0010000000000080);
			UProperty* NewProp_AdditionalReceivers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalReceivers, TEXT("AdditionalReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set an array of additional actors that will receive events triggerd from this sequence actor\n\n@param AdditionalReceivers An array of actors to receive events"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		UObject* Outer=Z_Construct_UClass_ALevelSequenceActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LevelSequenceActor_eventSetSequence_Parms));
			UProperty* NewProp_InSequence = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InSequence, LevelSequenceActor_eventSetSequence_Parms), 0x0010000000000080, Z_Construct_UClass_ULevelSequence_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game|Cinematic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ALevelSequenceActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_AddBinding());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_GetSequence());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_SetBinding());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers());
				OuterClass->LinkChild(Z_Construct_UFunction_ALevelSequenceActor_SetSequence());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BurnInInstance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BurnInInstance"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BurnInInstance, ALevelSequenceActor), 0x0040000000080008, Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister());
				UProperty* NewProp_BindingOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BindingOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BindingOverrides, ALevelSequenceActor), 0x00120400000a001d, Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister());
				UProperty* NewProp_BurnInOptions = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BurnInOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BurnInOptions, ALevelSequenceActor), 0x00120400000a001d, Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister());
				UProperty* NewProp_AdditionalEventReceivers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionalEventReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalEventReceivers, ALevelSequenceActor), 0x0010040000000015);
				UProperty* NewProp_AdditionalEventReceivers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalEventReceivers, TEXT("AdditionalEventReceivers"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_LevelSequence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LevelSequence, ALevelSequenceActor), 0x0010000000000015, Z_Construct_UScriptStruct_FStringAssetReference());
				UProperty* NewProp_SequencePlayer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SequencePlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SequencePlayer, ALevelSequenceActor), 0x0010000000002014, Z_Construct_UClass_ULevelSequencePlayer_NoRegister());
				UProperty* NewProp_PlaybackSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlaybackSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlaybackSettings, ALevelSequenceActor), 0x0010000000000015, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, ALevelSequenceActor, bool);
				UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, ALevelSequenceActor), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, ALevelSequenceActor), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_AddBinding(), "AddBinding"); // 1029802575
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_GetSequence(), "GetSequence"); // 2145709732
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding(), "RemoveBinding"); // 909725966
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding(), "ResetBinding"); // 3726559995
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings(), "ResetBindings"); // 3308323869
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_SetBinding(), "SetBinding"); // 2650371517
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers(), "SetEventReceivers"); // 1175262435
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALevelSequenceActor_SetSequence(), "SetSequence"); // 286587918
				static TCppClassTypeInfo<TCppClassTypeTraits<ALevelSequenceActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister(), VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Physics LOD Activation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequenceActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Actor responsible for controlling a specific level sequence in the world."));
				MetaData->SetValue(NewProp_BurnInInstance, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BurnInInstance, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_BurnInInstance, TEXT("ToolTip"), TEXT("Burn-in widget"));
				MetaData->SetValue(NewProp_BindingOverrides, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_BindingOverrides, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BindingOverrides, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_BindingOverrides, TEXT("ToolTip"), TEXT("Mapping of actors to override the sequence bindings with"));
				MetaData->SetValue(NewProp_BurnInOptions, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_BurnInOptions, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BurnInOptions, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_AdditionalEventReceivers, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_AdditionalEventReceivers, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_LevelSequence, TEXT("AllowedClasses"), TEXT("LevelSequence"));
				MetaData->SetValue(NewProp_LevelSequence, TEXT("Category"), TEXT("General"));
				MetaData->SetValue(NewProp_LevelSequence, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_SequencePlayer, TEXT("Category"), TEXT("Playback"));
				MetaData->SetValue(NewProp_SequencePlayer, TEXT("ExposeFunctionCategories"), TEXT("Game|Cinematic"));
				MetaData->SetValue(NewProp_SequencePlayer, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("Category"), TEXT("Playback"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_bAutoPlay, TEXT("Category"), TEXT("Playback"));
				MetaData->SetValue(NewProp_bAutoPlay, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelSequenceActor, 442760317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceActor(Z_Construct_UClass_ALevelSequenceActor, &ALevelSequenceActor::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
	static FName NAME_ULevelSequenceBurnIn_GetSettingsClass = FName(TEXT("GetSettingsClass"));
	TSubclassOf<ULevelSequenceBurnInInitSettings>  ULevelSequenceBurnIn::GetSettingsClass() const
	{
		LevelSequenceBurnIn_eventGetSettingsClass_Parms Parms;
		const_cast<ULevelSequenceBurnIn*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_GetSettingsClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSequenceBurnIn_SetSettings = FName(TEXT("SetSettings"));
	void ULevelSequenceBurnIn::SetSettings(UObject* InSettings)
	{
		LevelSequenceBurnIn_eventSetSettings_Parms Parms;
		Parms.InSettings=InSettings;
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_SetSettings),&Parms);
	}
	void ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn()
	{
		UClass* Class = ULevelSequenceBurnIn::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSettingsClass", (Native)&ULevelSequenceBurnIn::execGetSettingsClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass()
	{
		UObject* Outer=Z_Construct_UClass_ULevelSequenceBurnIn();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSettingsClass"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x48020C00, 65535, sizeof(LevelSequenceBurnIn_eventGetSettingsClass_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ReturnValue, LevelSequenceBurnIn_eventGetSettingsClass_Parms), 0x0014000000000580, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister(), UClass::StaticClass());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Burn In"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBurnIn.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the settings class to use for this burn in"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings()
	{
		UObject* Outer=Z_Construct_UClass_ULevelSequenceBurnIn();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020800, 65535, sizeof(LevelSequenceBurnIn_eventSetSettings_Parms));
			UProperty* NewProp_InSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InSettings, LevelSequenceBurnIn_eventSetSettings_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Burn In"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBurnIn.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when this burn in is receiving its settings"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UUserWidget();
			Z_Construct_UPackage__Script_LevelSequence();
			OuterClass = ULevelSequenceBurnIn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;

				OuterClass->LinkChild(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass());
				OuterClass->LinkChild(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LevelSequenceActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelSequenceActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LevelSequenceActor, ULevelSequenceBurnIn), 0x0020080000000014, Z_Construct_UClass_ALevelSequenceActor_NoRegister());
				UProperty* NewProp_FrameInformation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FrameInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FrameInformation, ULevelSequenceBurnIn), 0x0020088000000014, Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass(), "GetSettingsClass"); // 3681752268
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings(), "SetSettings"); // 2241065341
				static TCppClassTypeInfo<TCppClassTypeTraits<ULevelSequenceBurnIn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelSequenceBurnIn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBurnIn.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Base class for level sequence burn ins"));
				MetaData->SetValue(NewProp_LevelSequenceActor, TEXT("Category"), TEXT("Burn In"));
				MetaData->SetValue(NewProp_LevelSequenceActor, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBurnIn.h"));
				MetaData->SetValue(NewProp_LevelSequenceActor, TEXT("ToolTip"), TEXT("The actor to get our burn in frames from"));
				MetaData->SetValue(NewProp_FrameInformation, TEXT("Category"), TEXT("Burn In"));
				MetaData->SetValue(NewProp_FrameInformation, TEXT("ModuleRelativePath"), TEXT("Public/LevelSequenceBurnIn.h"));
				MetaData->SetValue(NewProp_FrameInformation, TEXT("ToolTip"), TEXT("Snapshot of frame information."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnIn, 306421978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnIn(Z_Construct_UClass_ULevelSequenceBurnIn, &ULevelSequenceBurnIn::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnIn);
	UPackage* Z_Construct_UPackage__Script_LevelSequence()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/LevelSequence")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x98EB2022;
			Guid.B = 0x0579382C;
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
