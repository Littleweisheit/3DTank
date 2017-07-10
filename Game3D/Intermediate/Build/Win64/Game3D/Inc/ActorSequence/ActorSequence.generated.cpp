// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ActorSequence.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ActorSequence() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();

	ACTORSEQUENCE_API class UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType();
	ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
	ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences();
	ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequence_NoRegister();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequence();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequenceComponent();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequencePlayer();
	ACTORSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_ActorSequence();
static UEnum* EActorSequenceObjectReferenceType_StaticEnum()
{
	extern ACTORSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_ActorSequence();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API class UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType, Z_Construct_UPackage__Script_ActorSequence(), TEXT("EActorSequenceObjectReferenceType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorSequenceObjectReferenceType(EActorSequenceObjectReferenceType_StaticEnum, TEXT("/Script/ActorSequence"), TEXT("EActorSequenceObjectReferenceType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_ActorSequence();
		extern uint32 Get_Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorSequenceObjectReferenceType"), 0, Get_Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EActorSequenceObjectReferenceType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EActorSequenceObjectReferenceType::ContextActor"), 0);
			EnumNames.Emplace(TEXT("EActorSequenceObjectReferenceType::ExternalActor"), 1);
			EnumNames.Emplace(TEXT("EActorSequenceObjectReferenceType::Component"), 2);
			EnumNames.Emplace(TEXT("EActorSequenceObjectReferenceType::EActorSequenceObjectReferenceType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EActorSequenceObjectReferenceType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Component.ToolTip"), TEXT("The reference relates to a component"));
			MetaData->SetValue(ReturnEnum, TEXT("ContextActor.ToolTip"), TEXT("The reference relates to the context actor"));
			MetaData->SetValue(ReturnEnum, TEXT("ExternalActor.ToolTip"), TEXT("The reference relates to an actor outside of the context actor actor"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_CRC() { return 2336100770U; }
class UScriptStruct* FActorSequenceObjectReferenceMap::StaticStruct()
{
	extern ACTORSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_ActorSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferenceMap"), sizeof(FActorSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReferenceMap(FActorSequenceObjectReferenceMap::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReferenceMap"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReferenceMap")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap;
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReferenceMap"), sizeof(FActorSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActorSequenceObjectReferenceMap"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>, EStructFlags(0x00000001));
			UProperty* NewProp_References = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(References, FActorSequenceObjectReferenceMap), 0x0040000000000000);
			UProperty* NewProp_References_Inner = new(EC_InternalUseOnlyConstructor, NewProp_References, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FActorSequenceObjectReferences());
			UProperty* NewProp_BindingIds = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BindingIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BindingIds, FActorSequenceObjectReferenceMap), 0x0040000000000000);
			UProperty* NewProp_BindingIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BindingIds, TEXT("BindingIds"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_References, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_BindingIds, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_CRC() { return 3840158986U; }
class UScriptStruct* FActorSequenceObjectReferences::StaticStruct()
{
	extern ACTORSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_ActorSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences();
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferences, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferences"), sizeof(FActorSequenceObjectReferences), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReferences(FActorSequenceObjectReferences::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReferences"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReferences")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences;
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReferences"), sizeof(FActorSequenceObjectReferences), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActorSequenceObjectReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>, EStructFlags(0x00000001));
			UProperty* NewProp_Array = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Array"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Array, FActorSequenceObjectReferences), 0x0010000000000000);
			UProperty* NewProp_Array_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Array, TEXT("Array"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FActorSequenceObjectReference());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_Array, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReferences_CRC() { return 2924627970U; }
class UScriptStruct* FActorSequenceObjectReference::StaticStruct()
{
	extern ACTORSEQUENCE_API class UPackage* Z_Construct_UPackage__Script_ActorSequence();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference();
		extern ACTORSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReference, Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReference"), sizeof(FActorSequenceObjectReference), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSequenceObjectReference(FActorSequenceObjectReference::StaticStruct, TEXT("/Script/ActorSequence"), TEXT("ActorSequenceObjectReference"), false, nullptr, nullptr);
static struct FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference
{
	FScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSequenceObjectReference")),new UScriptStruct::TCppStructOps<FActorSequenceObjectReference>);
	}
} ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference;
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ActorSequence();
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSequenceObjectReference"), sizeof(FActorSequenceObjectReference), Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ActorSequenceObjectReference"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FActorSequenceObjectReference>, EStructFlags(0x00000001));
			UProperty* NewProp_PathToComponent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PathToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PathToComponent, FActorSequenceObjectReference), 0x0040000000000000);
			UProperty* NewProp_ActorId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActorId, FActorSequenceObjectReference), 0x0040000000000000, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FActorSequenceObjectReference), 0x0040000000000000, Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("An external reference to an level sequence object, resolvable through an arbitrary context."));
			MetaData->SetValue(NewProp_PathToComponent, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_PathToComponent, TEXT("ToolTip"), TEXT("Path to the component from its owner actor"));
			MetaData->SetValue(NewProp_ActorId, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_ActorId, TEXT("ToolTip"), TEXT("The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceObjectReference.h"));
			MetaData->SetValue(NewProp_Type, TEXT("ToolTip"), TEXT("The type of the binding"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSequenceObjectReference_CRC() { return 1400299896U; }
	void UActorSequence::StaticRegisterNativesUActorSequence()
	{
	}
	UClass* Z_Construct_UClass_UActorSequence_NoRegister()
	{
		return UActorSequence::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorSequence()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSequence();
			Z_Construct_UPackage__Script_ActorSequence();
			OuterClass = UActorSequence::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasBeenInitialized, UActorSequence, bool);
				UProperty* NewProp_bHasBeenInitialized = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHasBeenInitialized"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasBeenInitialized, UActorSequence), 0x0040000800000000, CPP_BOOL_PROPERTY_BITMASK(bHasBeenInitialized, UActorSequence), sizeof(bool), true);
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_ObjectReferences = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObjectReferences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ObjectReferences, UActorSequence), 0x0040000000000000, Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap());
				UProperty* NewProp_MovieScene = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovieScene"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MovieScene, UActorSequence), 0x0042000000080008, Z_Construct_UClass_UMovieScene_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UActorSequence> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("DevelopmentStatus"), TEXT("Experimental"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorSequence.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequence.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Movie scene animation embedded within an actor."));
				MetaData->SetValue(NewProp_bHasBeenInitialized, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequence.h"));
				MetaData->SetValue(NewProp_ObjectReferences, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequence.h"));
				MetaData->SetValue(NewProp_ObjectReferences, TEXT("ToolTip"), TEXT("Collection of object references."));
				MetaData->SetValue(NewProp_MovieScene, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MovieScene, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequence.h"));
				MetaData->SetValue(NewProp_MovieScene, TEXT("ToolTip"), TEXT("Pointer to the movie scene that controls this animation."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequence, 3412910764);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequence(Z_Construct_UClass_UActorSequence, &UActorSequence::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequence);
	void UActorSequenceComponent::StaticRegisterNativesUActorSequenceComponent()
	{
	}
	UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister()
	{
		return UActorSequenceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorSequenceComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ActorSequence();
			OuterClass = UActorSequenceComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, UActorSequenceComponent, bool);
				UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, UActorSequenceComponent), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, UActorSequenceComponent), sizeof(bool), true);
				UProperty* NewProp_SequencePlayer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SequencePlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SequencePlayer, UActorSequenceComponent), 0x0020080000002014, Z_Construct_UClass_UActorSequencePlayer_NoRegister());
				UProperty* NewProp_Sequence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sequence"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sequence, UActorSequenceComponent), 0x0022080000080009, Z_Construct_UClass_UActorSequence_NoRegister());
				UProperty* NewProp_PlaybackSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlaybackSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlaybackSettings, UActorSequenceComponent), 0x0020080000000001, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UActorSequenceComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Sequence"));
				MetaData->SetValue(OuterClass, TEXT("DevelopmentStatus"), TEXT("Experimental"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Cooking Activation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorSequenceComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Movie scene animation embedded within an actor."));
				MetaData->SetValue(NewProp_bAutoPlay, TEXT("Category"), TEXT("Playback"));
				MetaData->SetValue(NewProp_bAutoPlay, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceComponent.h"));
				MetaData->SetValue(NewProp_SequencePlayer, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_SequencePlayer, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceComponent.h"));
				MetaData->SetValue(NewProp_Sequence, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_Sequence, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Sequence, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceComponent.h"));
				MetaData->SetValue(NewProp_Sequence, TEXT("ToolTip"), TEXT("Embedded actor sequence data"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("Category"), TEXT("Playback"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequenceComponent.h"));
				MetaData->SetValue(NewProp_PlaybackSettings, TEXT("ShowOnlyInnerProperties"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequenceComponent, 73600740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequenceComponent(Z_Construct_UClass_UActorSequenceComponent, &UActorSequenceComponent::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequenceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequenceComponent);
	void UActorSequencePlayer::StaticRegisterNativesUActorSequencePlayer()
	{
	}
	UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister()
	{
		return UActorSequencePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorSequencePlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSequencePlayer();
			Z_Construct_UPackage__Script_ActorSequence();
			OuterClass = UActorSequencePlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UActorSequencePlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorSequencePlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ActorSequencePlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UActorSequencePlayer is used to actually \"play\" an actor sequence asset at runtime."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequencePlayer, 2980606223);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequencePlayer(Z_Construct_UClass_UActorSequencePlayer, &UActorSequencePlayer::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequencePlayer);
	UPackage* Z_Construct_UPackage__Script_ActorSequence()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ActorSequence")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x2BF9D5CE;
			Guid.B = 0xB18388C8;
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
