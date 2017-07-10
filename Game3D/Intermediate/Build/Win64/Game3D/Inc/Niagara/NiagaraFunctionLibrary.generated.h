// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraEffect;
class USceneComponent;
struct FVector;
struct FRotator;
class UNiagaraComponent;
class UObject;
#ifdef NIAGARA_NiagaraFunctionLibrary_generated_h
#error "NiagaraFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraFunctionLibrary_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnEffectAttached) \
	{ \
		P_GET_OBJECT(UNiagaraEffect,Z_Param_EffectTemplate); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnEffectAttached(Z_Param_EffectTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEffectAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UNiagaraEffect,Z_Param_EffectTemplate); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnEffectAtLocation(Z_Param_WorldContextObject,Z_Param_EffectTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnEffectAttached) \
	{ \
		P_GET_OBJECT(UNiagaraEffect,Z_Param_EffectTemplate); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnEffectAttached(Z_Param_EffectTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEffectAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UNiagaraEffect,Z_Param_EffectTemplate); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnEffectAtLocation(Z_Param_WorldContextObject,Z_Param_EffectTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraFunctionLibrary(); \
public: \
	DECLARE_CLASS(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraFunctionLibrary(); \
public: \
	DECLARE_CLASS(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&); \
	NO_API UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&); \
public:


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&); \
	NO_API UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary)


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_19_PROLOG
#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_INCLASS \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
