// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_FileMediaSource_generated_h
#error "FileMediaSource.generated.h already included, missing '#pragma once' in FileMediaSource.h"
#endif
#define MEDIAASSETS_FileMediaSource_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFilePath(Z_Param_Path); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFilePath(Z_Param_Path); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileMediaSource(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UFileMediaSource(); \
public: \
	DECLARE_CLASS(UFileMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UFileMediaSource) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFileMediaSource(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UFileMediaSource(); \
public: \
	DECLARE_CLASS(UFileMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UFileMediaSource) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileMediaSource(UFileMediaSource&&); \
	NO_API UFileMediaSource(const UFileMediaSource&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileMediaSource(UFileMediaSource&&); \
	NO_API UFileMediaSource(const UFileMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_13_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS