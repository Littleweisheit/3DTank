// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h
#error "AnimNode_CopyBoneDelta.generated.h already included, missing '#pragma once' in AnimNode_CopyBoneDelta.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_29_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h


#define FOREACH_ENUM_COPYBONEDELTAMODE(op) \
	op(CopyBoneDeltaMode::Accumulate) \
	op(CopyBoneDeltaMode::Copy) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS