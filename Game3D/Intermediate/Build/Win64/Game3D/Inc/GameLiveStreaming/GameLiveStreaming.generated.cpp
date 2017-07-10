// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameLiveStreaming.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GameLiveStreaming() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API class UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();

	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsWebCamEnabled();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartWebCam();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopWebCam();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary_NoRegister();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature();
	GAMELIVESTREAMING_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy();
	GAMELIVESTREAMING_API class UPackage* Z_Construct_UPackage__Script_GameLiveStreaming();
	void UGameLiveStreamingFunctionLibrary::StaticRegisterNativesUGameLiveStreamingFunctionLibrary()
	{
		UClass* Class = UGameLiveStreamingFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsBroadcastingGame", (Native)&UGameLiveStreamingFunctionLibrary::execIsBroadcastingGame },
			{ "IsWebCamEnabled", (Native)&UGameLiveStreamingFunctionLibrary::execIsWebCamEnabled },
			{ "StartBroadcastingGame", (Native)&UGameLiveStreamingFunctionLibrary::execStartBroadcastingGame },
			{ "StartWebCam", (Native)&UGameLiveStreamingFunctionLibrary::execStartWebCam },
			{ "StopBroadcastingGame", (Native)&UGameLiveStreamingFunctionLibrary::execStopBroadcastingGame },
			{ "StopWebCam", (Native)&UGameLiveStreamingFunctionLibrary::execStopWebCam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 6);
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame()
	{
		struct GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsBroadcastingGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks to see if we are currently broadcasting live video (and possibly audio) from the game's viewport\n\n@return      True if we are currently transmitting"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsWebCamEnabled()
	{
		struct GameLiveStreamingFunctionLibrary_eventIsWebCamEnabled_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsWebCamEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventIsWebCamEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsWebCamEnabled_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsWebCamEnabled_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsWebCamEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether or not the web camera is actively capturing\n\n@return      True if the web camera is available and currently capturing"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame()
	{
		struct GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms
		{
			FString LoginUserName;
			FString LoginPassword;
			int32 FrameRate;
			float ScreenScaling;
			bool bStartWebCam;
			int32 DesiredWebCamWidth;
			int32 DesiredWebCamHeight;
			bool bMirrorWebCamImage;
			bool bDrawSimpleWebCamVideo;
			bool bCaptureAudioFromComputer;
			bool bCaptureAudioFromMicrophone;
			UTexture2D* CoverUpImage;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartBroadcastingGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms));
			UProperty* NewProp_CoverUpImage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CoverUpImage"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CoverUpImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bCaptureAudioFromMicrophone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCaptureAudioFromMicrophone"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bCaptureAudioFromComputer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCaptureAudioFromComputer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bDrawSimpleWebCamVideo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDrawSimpleWebCamVideo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bMirrorWebCamImage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bMirrorWebCamImage"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			UProperty* NewProp_DesiredWebCamHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamHeight, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			UProperty* NewProp_DesiredWebCamWidth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamWidth, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStartWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bStartWebCam = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStartWebCam"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStartWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStartWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			UProperty* NewProp_ScreenScaling = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScreenScaling"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScreenScaling, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			UProperty* NewProp_FrameRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FrameRate, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			UProperty* NewProp_LoginPassword = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LoginPassword"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LoginPassword, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			UProperty* NewProp_LoginUserName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LoginUserName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LoginUserName, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCaptureAudioFromComputer"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCaptureAudioFromMicrophone"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDrawSimpleWebCamVideo"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bMirrorWebCamImage"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStartWebCam"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamHeight"), TEXT("240"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamWidth"), TEXT("320"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_FrameRate"), TEXT("30"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ScreenScaling"), TEXT("1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts broadcasting the game's video (and optionally audio) using an internet streaming service, if one is available\n\n@param       FrameRate                                       Frame rate to stream video from when broadcasting to services like Twitch.\n@param       ScreenScaling                           How much to scale the broadcast video resolution down to reduce streaming bandwidth.  We recommend broadcasting at resolutions of 1280x720 or lower.  Some live streaming providers will not be able to transcode your video to a lower resolution, so using a high resolution stream may prevent low-bandwidth users from having a good viewing experience.\n@param       bStartWebCam                            Starts your web camera right away.  When the web camera is active, video from your web camera will be captured and displayed while broadcasting, so that your viewers can see your presence.\n@param       DesiredWebCamWidth                      Desired web cam capture resolution width.  The web cam may only support a limited number of resolutions, so we'll choose one that matches as closely to this as possible\n@param       DesiredWebCamHeight                     Desired web cam capture resolution height.\n@param       bMirrorWebCamImage                      You can enable this to flip the web camera image horizontally, so that it looks like a mirror\n@param       bDrawSimpleWebCamVideo          If enabled, the engine will draw a simple web cam image on top of the game viewport.  If you turn this off, it's up to you to draw the web cam image yourself.  You can access the web cam texture by calling IGameLiveStreaming::Get().GetWebCamTexture().\n@param       bCaptureAudioFromComputer       Enables broadcast of audio being played by your computer, such as in-game sounds\n@param       bCaptureAudioFromMicrophone     Enables broadcast of audio from your default microphone recording device\n@param       CoverUpImage                            Optional image to broadcast, instead of what you're looking at on screen.  This is useful if you don't want to publicly share the visuals on screen."));
			MetaData->SetValue(NewProp_LoginPassword, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_LoginUserName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartWebCam()
	{
		struct GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms
		{
			int32 DesiredWebCamWidth;
			int32 DesiredWebCamHeight;
			bool bMirrorWebCamImage;
			bool bDrawSimpleWebCamVideo;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartWebCam"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms, bool);
			UProperty* NewProp_bDrawSimpleWebCamVideo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDrawSimpleWebCamVideo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms, bool);
			UProperty* NewProp_bMirrorWebCamImage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bMirrorWebCamImage"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), sizeof(bool), true);
			UProperty* NewProp_DesiredWebCamHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamHeight, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), 0x0010000000000080);
			UProperty* NewProp_DesiredWebCamWidth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamWidth, GameLiveStreamingFunctionLibrary_eventStartWebCam_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDrawSimpleWebCamVideo"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bMirrorWebCamImage"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamHeight"), TEXT("240"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamWidth"), TEXT("320"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts capturing and displaying web camera video, if one is plugged in\n\n@param       DesiredWebCamWidth                      Desired web cam capture resolution width.  The web cam may only support a limited number of resolutions, so we'll choose one that matches as closely to this as possible\n@param       DesiredWebCamHeight                     Desired web cam capture resolution height.\n@param       bMirrorWebCamImage                      You can enable this to flip the web camera image horizontally, so that it looks like a mirror\n@param       bDrawSimpleWebCamVideo          If enabled, the engine will draw a simple web cam image on top of the game viewport.  If you turn this off, it's up to you to draw the web cam image yourself.  You can access the web cam texture by calling IGameLiveStreaming::Get().GetWebCamTexture()."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame()
	{
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopBroadcastingGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops broadcasting the game"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopWebCam()
	{
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopWebCam"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops the web camera, if it's currently capturing"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary_NoRegister()
	{
		return UGameLiveStreamingFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_GameLiveStreaming();
			OuterClass = UGameLiveStreamingFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsWebCamEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartWebCam());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopWebCam());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame(), "IsBroadcastingGame"); // 486019899
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsWebCamEnabled(), "IsWebCamEnabled"); // 3209129410
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame(), "StartBroadcastingGame"); // 2566974131
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartWebCam(), "StartWebCam"); // 1007962766
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame(), "StopBroadcastingGame"); // 1159211696
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopWebCam(), "StopWebCam"); // 235880183
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameLiveStreamingFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiveStreamingFunctionLibrary, 2345475962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiveStreamingFunctionLibrary(Z_Construct_UClass_UGameLiveStreamingFunctionLibrary, &UGameLiveStreamingFunctionLibrary::StaticClass, TEXT("/Script/GameLiveStreaming"), TEXT("UGameLiveStreamingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiveStreamingFunctionLibrary);
	UFunction* Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature()
	{
		struct _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms
		{
			TArray<FBlueprintLiveStreamInfo> LiveStreams;
			bool bWasSuccessful;
		};
		UObject* Outer=Z_Construct_UPackage__Script_GameLiveStreaming();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnQueryLiveStreamsCompleted__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms, bool);
			UProperty* NewProp_bWasSuccessful = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bWasSuccessful"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), sizeof(bool), true);
			UProperty* NewProp_LiveStreams = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LiveStreams"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LiveStreams, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), 0x0010000008000182);
			UProperty* NewProp_LiveStreams_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LiveStreams, TEXT("LiveStreams"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_LiveStreams, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FBlueprintLiveStreamInfo::StaticStruct()
{
	extern GAMELIVESTREAMING_API class UPackage* Z_Construct_UPackage__Script_GameLiveStreaming();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMELIVESTREAMING_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo();
		extern GAMELIVESTREAMING_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo, Z_Construct_UPackage__Script_GameLiveStreaming(), TEXT("BlueprintLiveStreamInfo"), sizeof(FBlueprintLiveStreamInfo), Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintLiveStreamInfo(FBlueprintLiveStreamInfo::StaticStruct, TEXT("/Script/GameLiveStreaming"), TEXT("BlueprintLiveStreamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo
{
	FScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintLiveStreamInfo")),new UScriptStruct::TCppStructOps<FBlueprintLiveStreamInfo>);
	}
} ScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameLiveStreaming();
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintLiveStreamInfo"), sizeof(FBlueprintLiveStreamInfo), Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintLiveStreamInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBlueprintLiveStreamInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_URL = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("URL"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(URL, FBlueprintLiveStreamInfo), 0x0010000000000001);
			UProperty* NewProp_StreamName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StreamName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(StreamName, FBlueprintLiveStreamInfo), 0x0010000000000001);
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GameName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GameName, FBlueprintLiveStreamInfo), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_URL, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_URL, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_URL, TEXT("ToolTip"), TEXT("URL for the stream"));
			MetaData->SetValue(NewProp_StreamName, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_StreamName, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_StreamName, TEXT("ToolTip"), TEXT("The title of the stream itself"));
			MetaData->SetValue(NewProp_GameName, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_GameName, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_GameName, TEXT("ToolTip"), TEXT("Name of the game that is streaming"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC() { return 1664384763U; }
	void UQueryLiveStreamsCallbackProxy::StaticRegisterNativesUQueryLiveStreamsCallbackProxy()
	{
		UClass* Class = UQueryLiveStreamsCallbackProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "QueryLiveStreams", (Native)&UQueryLiveStreamsCallbackProxy::execQueryLiveStreams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams()
	{
		struct QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms
		{
			FString GameName;
			UQueryLiveStreamsCallbackProxy* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UQueryLiveStreamsCallbackProxy();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("QueryLiveStreams"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms), 0x0010000000000580, Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister());
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GameName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GameName, QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Requests a list of live internet streams for the specified game name.  This will usually hit the internet so it could take a second or two."));
			MetaData->SetValue(NewProp_GameName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister()
	{
		return UQueryLiveStreamsCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage__Script_GameLiveStreaming();
			OuterClass = UQueryLiveStreamsCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnQueriedLiveStreams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnQueriedLiveStreams"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnQueriedLiveStreams, UQueryLiveStreamsCallbackProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams(), "QueryLiveStreams"); // 1801575797
				static TCppClassTypeInfo<TCppClassTypeTraits<UQueryLiveStreamsCallbackProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnQueriedLiveStreams, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnQueriedLiveStreams, TEXT("ToolTip"), TEXT("Called when the asynchronous request for live streams completes, passing along the list of live streams currently active, along with a boolean value that indicates whether the request was successful at all"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQueryLiveStreamsCallbackProxy, 3393439397);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQueryLiveStreamsCallbackProxy(Z_Construct_UClass_UQueryLiveStreamsCallbackProxy, &UQueryLiveStreamsCallbackProxy::StaticClass, TEXT("/Script/GameLiveStreaming"), TEXT("UQueryLiveStreamsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryLiveStreamsCallbackProxy);
	UPackage* Z_Construct_UPackage__Script_GameLiveStreaming()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GameLiveStreaming")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x97345C17;
			Guid.B = 0x4EFE0C47;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
