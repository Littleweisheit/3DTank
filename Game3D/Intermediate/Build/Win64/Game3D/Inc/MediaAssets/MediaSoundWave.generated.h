// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaSoundWave_generated_h
#error "MediaSoundWave.generated.h already included, missing '#pragma once' in MediaSoundWave.h"
#endif
#define MEDIAASSETS_MediaSoundWave_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundWave(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundWave(); \
public: \
	DECLARE_CLASS(UMediaSoundWave, USoundWave, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundWave) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSoundWave(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundWave(); \
public: \
	DECLARE_CLASS(UMediaSoundWave, USoundWave, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundWave) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundWave(UMediaSoundWave&&); \
	NO_API UMediaSoundWave(const UMediaSoundWave&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundWave(UMediaSoundWave&&); \
	NO_API UMediaSoundWave(const UMediaSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundWave)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioTrackIndex() { return STRUCT_OFFSET(UMediaSoundWave, AudioTrackIndex); } \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UMediaSoundWave, MediaPlayer); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_14_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaSoundWave."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
