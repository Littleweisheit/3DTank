// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RootMotionSource_generated_h
#error "RootMotionSource.generated.h already included, missing '#pragma once' in RootMotionSource.h"
#endif
#define ENGINE_RootMotionSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_728_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_655_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_586_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_522_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_447_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_396_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_212_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_149_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_115_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_94_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h


#define FOREACH_ENUM_EROOTMOTIONFINISHVELOCITYMODE(op) \
	op(ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ERootMotionFinishVelocityMode::SetVelocity) \
	op(ERootMotionFinishVelocityMode::ClampVelocity) 
#define FOREACH_ENUM_EROOTMOTIONSOURCESETTINGSFLAGS(op) \
	op(ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck) \
	op(ERootMotionSourceSettingsFlags::DisablePartialEndTick) 
#define FOREACH_ENUM_EROOTMOTIONSOURCESTATUSFLAGS(op) \
	op(ERootMotionSourceStatusFlags::Prepared) \
	op(ERootMotionSourceStatusFlags::Finished) \
	op(ERootMotionSourceStatusFlags::MarkedForRemoval) 
#define FOREACH_ENUM_EROOTMOTIONACCUMULATEMODE(op) \
	op(ERootMotionAccumulateMode::Override) \
	op(ERootMotionAccumulateMode::Additive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
