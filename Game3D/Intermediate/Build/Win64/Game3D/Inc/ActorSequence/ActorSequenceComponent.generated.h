// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSEQUENCE_ActorSequenceComponent_generated_h
#error "ActorSequenceComponent.generated.h already included, missing '#pragma once' in ActorSequenceComponent.h"
#endif
#define ACTORSEQUENCE_ActorSequenceComponent_generated_h

#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequenceComponent(); \
	friend ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequenceComponent(); \
public: \
	DECLARE_CLASS(UActorSequenceComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequenceComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUActorSequenceComponent(); \
	friend ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequenceComponent(); \
public: \
	DECLARE_CLASS(UActorSequenceComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequenceComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSequenceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequenceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequenceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequenceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequenceComponent(UActorSequenceComponent&&); \
	NO_API UActorSequenceComponent(const UActorSequenceComponent&); \
public:


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequenceComponent(UActorSequenceComponent&&); \
	NO_API UActorSequenceComponent(const UActorSequenceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequenceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequenceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequenceComponent)


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaybackSettings() { return STRUCT_OFFSET(UActorSequenceComponent, PlaybackSettings); } \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(UActorSequenceComponent, Sequence); } \
	FORCEINLINE static uint32 __PPO__SequencePlayer() { return STRUCT_OFFSET(UActorSequenceComponent, SequencePlayer); } \
	FORCEINLINE static uint32 __PPO__bAutoPlay() { return STRUCT_OFFSET(UActorSequenceComponent, bAutoPlay); }


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_17_PROLOG
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ActorSequence_Public_ActorSequenceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
