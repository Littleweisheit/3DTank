// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSpriteRendererProperties_generated_h
#error "NiagaraSpriteRendererProperties.generated.h already included, missing '#pragma once' in NiagaraSpriteRendererProperties.h"
#endif
#define NIAGARA_NiagaraSpriteRendererProperties_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSpriteRendererProperties(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties(); \
public: \
	DECLARE_CLASS(UNiagaraSpriteRendererProperties, UNiagaraEffectRendererProperties, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSpriteRendererProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSpriteRendererProperties(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties(); \
public: \
	DECLARE_CLASS(UNiagaraSpriteRendererProperties, UNiagaraEffectRendererProperties, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSpriteRendererProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSpriteRendererProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSpriteRendererProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSpriteRendererProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSpriteRendererProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSpriteRendererProperties(UNiagaraSpriteRendererProperties&&); \
	NO_API UNiagaraSpriteRendererProperties(const UNiagaraSpriteRendererProperties&); \
public:


#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSpriteRendererProperties(UNiagaraSpriteRendererProperties&&); \
	NO_API UNiagaraSpriteRendererProperties(const UNiagaraSpriteRendererProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSpriteRendererProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSpriteRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSpriteRendererProperties)


#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_37_PROLOG
#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_INCLASS \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraSpriteRendererProperties_h


#define FOREACH_ENUM_ENIAGARASPRITEFACINGMODE(op) \
	op(ENiagaraSpriteFacingMode::FaceCamera) \
	op(ENiagaraSpriteFacingMode::FaceCameraPlane) \
	op(ENiagaraSpriteFacingMode::CustomFacingVector) 
#define FOREACH_ENUM_ENIAGARASPRITEALIGNMENT(op) \
	op(ENiagaraSpriteAlignment::Unaligned) \
	op(ENiagaraSpriteAlignment::VelocityAligned) \
	op(ENiagaraSpriteAlignment::CustomAlignment) 
#define FOREACH_ENUM_ENIAGARASORTMODE(op) \
	op(ENiagaraSortMode::SortNone) \
	op(ENiagaraSortMode::SortViewDepth) \
	op(ENiagaraSortMode::SortViewDistance) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
