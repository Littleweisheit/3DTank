// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraActor_generated_h
#error "NiagaraActor.generated.h already included, missing '#pragma once' in NiagaraActor.h"
#endif
#define NIAGARA_NiagaraActor_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraActor(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_ANiagaraActor(); \
public: \
	DECLARE_CLASS(ANiagaraActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(ANiagaraActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraActor(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_ANiagaraActor(); \
public: \
	DECLARE_CLASS(ANiagaraActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(ANiagaraActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API ANiagaraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API ANiagaraActor(ANiagaraActor&&); \
	NIAGARA_API ANiagaraActor(const ANiagaraActor&); \
public:


#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API ANiagaraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API ANiagaraActor(ANiagaraActor&&); \
	NIAGARA_API ANiagaraActor(const ANiagaraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraActor)


#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_10_PROLOG
#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_INCLASS \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraActor_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
