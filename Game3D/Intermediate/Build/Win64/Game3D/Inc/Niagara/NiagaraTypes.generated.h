// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraTypes_generated_h
#error "NiagaraTypes.generated.h already included, missing '#pragma once' in NiagaraTypes.h"
#endif
#define NIAGARA_NiagaraTypes_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_392_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable(); \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Id() { return STRUCT_OFFSET(FNiagaraVariable, Id); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FNiagaraVariable, Name); } \
	FORCEINLINE static uint32 __PPO__TypeDef() { return STRUCT_OFFSET(FNiagaraVariable, TypeDef); } \
	FORCEINLINE static uint32 __PPO__VarData() { return STRUCT_OFFSET(FNiagaraVariable, VarData); }


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_151_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_80_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_62_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStruct(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_50_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTestStructInner(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_44_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_35_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_26_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h_17_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraTypes_h


#define FOREACH_ENUM_ENIAGARANUMERICOUTPUTTYPESELECTIONMODE(op) \
	op(ENiagaraNumericOutputTypeSelectionMode::None) \
	op(ENiagaraNumericOutputTypeSelectionMode::Largest) \
	op(ENiagaraNumericOutputTypeSelectionMode::Smallest) \
	op(ENiagaraNumericOutputTypeSelectionMode::Scalar) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
