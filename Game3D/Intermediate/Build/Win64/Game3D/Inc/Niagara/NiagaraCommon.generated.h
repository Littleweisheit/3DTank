// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraCommon_generated_h
#error "NiagaraCommon.generated.h already included, missing '#pragma once' in NiagaraCommon.h"
#endif
#define NIAGARA_NiagaraCommon_generated_h

#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_275_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_262_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_231_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_165_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_150_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_113_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h_69_GENERATED_BODY \
	friend NIAGARA_API class UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID(); \
	NIAGARA_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Niagara_Public_NiagaraCommon_h


#define FOREACH_ENUM_ENIAGARASCRIPTCOMPILESTATUS(op) \
	op(ENiagaraScriptCompileStatus::NCS_Unknown) \
	op(ENiagaraScriptCompileStatus::NCS_Dirty) \
	op(ENiagaraScriptCompileStatus::NCS_Error) \
	op(ENiagaraScriptCompileStatus::NCS_UpToDate) \
	op(ENiagaraScriptCompileStatus::NCS_BeingCreated) \
	op(ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings) 
#define FOREACH_ENUM_ENIAGARAINPUTNODEUSAGE(op) \
	op(ENiagaraInputNodeUsage::Undefined) \
	op(ENiagaraInputNodeUsage::Parameter) \
	op(ENiagaraInputNodeUsage::Attribute) \
	op(ENiagaraInputNodeUsage::SystemConstant) 
#define FOREACH_ENUM_ENIAGARADATASETTYPE(op) \
	op(ENiagaraDataSetType::ParticleData) \
	op(ENiagaraDataSetType::Shared) \
	op(ENiagaraDataSetType::Event) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
