// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaTexture;
class UMediaSoundWave;
class UMediaOverlays;
enum class EMediaPlayerTrack : uint8;
struct FTimespan;
class UMediaSource;
class UMediaPlaylist;
struct FFloatRange;
#ifdef MEDIAASSETS_MediaPlayer_generated_h
#error "MediaPlayer.generated.h already included, missing '#pragma once' in MediaPlayer.h"
#endif
#define MEDIAASSETS_MediaPlayer_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_31_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms \
{ \
	FString FailedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpenFailed, const FString& FailedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms Parms; \
	Parms.FailedUrl=FailedUrl; \
	OnMediaPlayerMediaOpenFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_25_DELEGATE \
static inline void FOnMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaEvent) \
{ \
	OnMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTexture) \
	{ \
		P_GET_OBJECT(UMediaTexture,Z_Param_NewTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVideoTexture(Z_Param_NewTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundWave) \
	{ \
		P_GET_OBJECT(UMediaSoundWave,Z_Param_NewSoundWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSoundWave(Z_Param_NewSoundWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverlays) \
	{ \
		P_GET_OBJECT(UMediaOverlays,Z_Param_NewOverlays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOverlays(Z_Param_NewOverlays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPreparing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReverseRates) \
	{ \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetReverseRates(Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardRates) \
	{ \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetForwardRates(Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTexture) \
	{ \
		P_GET_OBJECT(UMediaTexture,Z_Param_NewTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVideoTexture(Z_Param_NewTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundWave) \
	{ \
		P_GET_OBJECT(UMediaSoundWave,Z_Param_NewSoundWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSoundWave(Z_Param_NewSoundWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverlays) \
	{ \
		P_GET_OBJECT(UMediaOverlays,Z_Param_NewOverlays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOverlays(Z_Param_NewOverlays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPreparing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReverseRates) \
	{ \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetReverseRates(Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardRates) \
	{ \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetForwardRates(Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Overlays() { return STRUCT_OFFSET(UMediaPlayer, Overlays); } \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UMediaPlayer, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UMediaPlayer, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__SoundWave() { return STRUCT_OFFSET(UMediaPlayer, SoundWave); } \
	FORCEINLINE static uint32 __PPO__VideoTexture() { return STRUCT_OFFSET(UMediaPlayer, VideoTexture); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_68_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h


#define FOREACH_ENUM_EMEDIAPLAYERTRACK(op) \
	op(EMediaPlayerTrack::Audio) \
	op(EMediaPlayerTrack::Binary) \
	op(EMediaPlayerTrack::Caption) \
	op(EMediaPlayerTrack::Script) \
	op(EMediaPlayerTrack::Subtitle) \
	op(EMediaPlayerTrack::Text) \
	op(EMediaPlayerTrack::Video) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
