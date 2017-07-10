// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSEQUENCE_ActorSequenceObjectReference_generated_h
#error "ActorSequenceObjectReference.generated.h already included, missing '#pragma once' in ActorSequenceObjectReference.h"
#endif
#define ACTORSEQUENCE_ActorSequenceObjectReference_generated_h

#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceObjectReference_h_103_GENERATED_BODY \
	friend ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap(); \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BindingIds() { return STRUCT_OFFSET(FActorSequenceObjectReferenceMap, BindingIds); } \
	FORCEINLINE static uint32 __PPO__References() { return STRUCT_OFFSET(FActorSequenceObjectReferenceMap, References); }


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceObjectReference_h_94_GENERATED_BODY \
	friend ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences(); \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_ActorSequence_Public_ActorSequenceObjectReference_h_27_GENERATED_BODY \
	friend ACTORSEQUENCE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference(); \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FActorSequenceObjectReference, Type); } \
	FORCEINLINE static uint32 __PPO__ActorId() { return STRUCT_OFFSET(FActorSequenceObjectReference, ActorId); } \
	FORCEINLINE static uint32 __PPO__PathToComponent() { return STRUCT_OFFSET(FActorSequenceObjectReference, PathToComponent); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ActorSequence_Public_ActorSequenceObjectReference_h


#define FOREACH_ENUM_EACTORSEQUENCEOBJECTREFERENCETYPE(op) \
	op(EActorSequenceObjectReferenceType::ContextActor) \
	op(EActorSequenceObjectReferenceType::ExternalActor) \
	op(EActorSequenceObjectReferenceType::Component) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
