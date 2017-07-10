// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaPlayerOverlay;
struct FTimespan;
#ifdef MEDIAASSETS_MediaOverlays_generated_h
#error "MediaOverlays.generated.h already included, missing '#pragma once' in MediaOverlays.h"
#endif
#define MEDIAASSETS_MediaOverlays_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_17_GENERATED_BODY \
	friend MEDIAASSETS_API class UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOverlay(); \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTexts) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutTexts); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTexts(Z_Param_Out_OutTexts,Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubtitles) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutSubtitles); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSubtitles(Z_Param_Out_OutSubtitles,Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptions) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutCaptions); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCaptions(Z_Param_Out_OutCaptions,Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTexts) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutTexts); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTexts(Z_Param_Out_OutTexts,Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubtitles) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutSubtitles); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSubtitles(Z_Param_Out_OutSubtitles,Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCaptions) \
	{ \
		P_GET_TARRAY_REF(FMediaPlayerOverlay,Z_Param_Out_OutCaptions); \
		P_GET_STRUCT(FTimespan,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCaptions(Z_Param_Out_OutCaptions,Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaOverlays(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaOverlays(); \
public: \
	DECLARE_CLASS(UMediaOverlays, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaOverlays) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMediaOverlays(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaOverlays(); \
public: \
	DECLARE_CLASS(UMediaOverlays, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaOverlays) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaOverlays) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaOverlays); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaOverlays(UMediaOverlays&&); \
	NO_API UMediaOverlays(const UMediaOverlays&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaOverlays(UMediaOverlays&&); \
	NO_API UMediaOverlays(const UMediaOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaOverlays); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaOverlays)


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_36_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaOverlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
