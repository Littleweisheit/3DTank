// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraEffect_generated_h
#error "NiagaraEffect.generated.h already included, missing '#pragma once' in NiagaraEffect.h"
#endif
#define NIAGARA_NiagaraEffect_generated_h

#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_73_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterInternalVariableBinding(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_19_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SourceParameterId() { return STRUCT_OFFSET(FNiagaraParameterBinding, SourceParameterId); } \
	FORCEINLINE static uint32 __PPO__DestinationEmitterId() { return STRUCT_OFFSET(FNiagaraParameterBinding, DestinationEmitterId); } \
	FORCEINLINE static uint32 __PPO__DestinationParameterId() { return STRUCT_OFFSET(FNiagaraParameterBinding, DestinationParameterId); }


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_RPC_WRAPPERS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEffect(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraEffect(); \
public: \
	DECLARE_CLASS(UNiagaraEffect, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEffect(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraEffect(); \
public: \
	DECLARE_CLASS(UNiagaraEffect, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraEffect(UNiagaraEffect&&); \
	NO_API UNiagaraEffect(const UNiagaraEffect&); \
public:


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraEffect(UNiagaraEffect&&); \
	NO_API UNiagaraEffect(const UNiagaraEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEffect)


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EmitterHandles() { return STRUCT_OFFSET(UNiagaraEffect, EmitterHandles); } \
	FORCEINLINE static uint32 __PPO__EffectScript() { return STRUCT_OFFSET(UNiagaraEffect, EffectScript); } \
	FORCEINLINE static uint32 __PPO__ParameterBindings() { return STRUCT_OFFSET(UNiagaraEffect, ParameterBindings); } \
	FORCEINLINE static uint32 __PPO__DataInterfaceBindings() { return STRUCT_OFFSET(UNiagaraEffect, DataInterfaceBindings); } \
	FORCEINLINE static uint32 __PPO__InternalEmitterVariableBindings() { return STRUCT_OFFSET(UNiagaraEffect, InternalEmitterVariableBindings); }


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_101_PROLOG
#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_INCLASS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h_104_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEffect."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Classes_NiagaraEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
