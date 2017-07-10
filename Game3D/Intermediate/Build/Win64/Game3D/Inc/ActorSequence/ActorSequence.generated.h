// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSEQUENCE_ActorSequence_generated_h
#error "ActorSequence.generated.h already included, missing '#pragma once' in ActorSequence.h"
#endif
#define ACTORSEQUENCE_ActorSequence_generated_h

#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequence(); \
	friend ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequence(); \
public: \
	DECLARE_CLASS(UActorSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequence) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUActorSequence(); \
	friend ACTORSEQUENCE_API class UClass* Z_Construct_UClass_UActorSequence(); \
public: \
	DECLARE_CLASS(UActorSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequence) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequence(UActorSequence&&); \
	NO_API UActorSequence(const UActorSequence&); \
public:


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequence(UActorSequence&&); \
	NO_API UActorSequence(const UActorSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequence)


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovieScene() { return STRUCT_OFFSET(UActorSequence, MovieScene); } \
	FORCEINLINE static uint32 __PPO__ObjectReferences() { return STRUCT_OFFSET(UActorSequence, ObjectReferences); }


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_13_PROLOG
#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_INCLASS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ActorSequence_Public_ActorSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
