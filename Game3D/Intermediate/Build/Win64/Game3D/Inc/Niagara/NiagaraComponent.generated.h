// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector2D;
struct FVector;
struct FVector4;
#ifdef NIAGARA_NiagaraComponent_generated_h
#error "NiagaraComponent.generated.h already included, missing '#pragma once' in NiagaraComponent.h"
#endif
#define NIAGARA_NiagaraComponent_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRenderingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInRenderingEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderingEnabled(Z_Param_bInRenderingEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReinitializeEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReinitializeEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraStaticMeshDataInterfaceActor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_OBJECT(AActor,Z_Param_InSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraStaticMeshDataInterfaceActor(Z_Param_InVariableName,Z_Param_InSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraEmitterSpawnRate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InEmitterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraEmitterSpawnRate(Z_Param_InEmitterName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableBool(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableFloat(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec2(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec3) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT(FVector,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec3(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRenderingEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInRenderingEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderingEnabled(Z_Param_bInRenderingEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReinitializeEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReinitializeEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraStaticMeshDataInterfaceActor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_OBJECT(AActor,Z_Param_InSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraStaticMeshDataInterfaceActor(Z_Param_InVariableName,Z_Param_InSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraEmitterSpawnRate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InEmitterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraEmitterSpawnRate(Z_Param_InEmitterName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableBool(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableFloat(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec2(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec3) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT(FVector,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec3(Z_Param_InVariableName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNiagaraVariableVec4) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InVariableName); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNiagaraVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraComponent(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraComponent(); \
public: \
	DECLARE_CLASS(UNiagaraComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraComponent(); \
	friend NIAGARA_API class UClass* Z_Construct_UClass_UNiagaraComponent(); \
public: \
	DECLARE_CLASS(UNiagaraComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponent(UNiagaraComponent&&); \
	NO_API UNiagaraComponent(const UNiagaraComponent&); \
public:


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponent(UNiagaraComponent&&); \
	NO_API UNiagaraComponent(const UNiagaraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponent)


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Asset() { return STRUCT_OFFSET(UNiagaraComponent, Asset); }


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_24_PROLOG
#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_INCLASS \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
