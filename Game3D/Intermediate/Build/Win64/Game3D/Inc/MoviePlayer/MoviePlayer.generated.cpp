// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MoviePlayer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MoviePlayer() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	MOVIEPLAYER_API class UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister();
	MOVIEPLAYER_API class UClass* Z_Construct_UClass_UMoviePlayerSettings();
	MOVIEPLAYER_API class UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	MOVIEPLAYER_API class UPackage* Z_Construct_UPackage__Script_MoviePlayer();
	void UMoviePlayerSettings::StaticRegisterNativesUMoviePlayerSettings()
	{
	}
	UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister()
	{
		return UMoviePlayerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMoviePlayerSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_MoviePlayer();
			OuterClass = UMoviePlayerSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StartupMovies = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartupMovies"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(StartupMovies, UMoviePlayerSettings), 0x0010000000044001);
				UProperty* NewProp_StartupMovies_Inner = new(EC_InternalUseOnlyConstructor, NewProp_StartupMovies, TEXT("StartupMovies"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMoviesAreSkippable, UMoviePlayerSettings, bool);
				UProperty* NewProp_bMoviesAreSkippable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bMoviesAreSkippable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMoviesAreSkippable, UMoviePlayerSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bMoviesAreSkippable, UMoviePlayerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWaitForMoviesToComplete, UMoviePlayerSettings, bool);
				UProperty* NewProp_bWaitForMoviesToComplete = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bWaitForMoviesToComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWaitForMoviesToComplete, UMoviePlayerSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bWaitForMoviesToComplete, UMoviePlayerSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMoviePlayerSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MoviePlayerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MoviePlayerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the Windows target platform."));
				MetaData->SetValue(NewProp_StartupMovies, TEXT("Category"), TEXT("Movies"));
				MetaData->SetValue(NewProp_StartupMovies, TEXT("ModuleRelativePath"), TEXT("Public/MoviePlayerSettings.h"));
				MetaData->SetValue(NewProp_StartupMovies, TEXT("ToolTip"), TEXT("Movies to play on startup. Note that these must be in your game's Game/Content/Movies directory."));
				MetaData->SetValue(NewProp_bMoviesAreSkippable, TEXT("Category"), TEXT("Movies"));
				MetaData->SetValue(NewProp_bMoviesAreSkippable, TEXT("ModuleRelativePath"), TEXT("Public/MoviePlayerSettings.h"));
				MetaData->SetValue(NewProp_bMoviesAreSkippable, TEXT("ToolTip"), TEXT("If enabled, Startup movies can be skipped by the user when a mouse button is pressed."));
				MetaData->SetValue(NewProp_bWaitForMoviesToComplete, TEXT("Category"), TEXT("Movies"));
				MetaData->SetValue(NewProp_bWaitForMoviesToComplete, TEXT("ModuleRelativePath"), TEXT("Public/MoviePlayerSettings.h"));
				MetaData->SetValue(NewProp_bWaitForMoviesToComplete, TEXT("ToolTip"), TEXT("If enabled, The game waits for startup movies to complete even if loading has finished."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePlayerSettings, 1904532347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePlayerSettings(Z_Construct_UClass_UMoviePlayerSettings, &UMoviePlayerSettings::StaticClass, TEXT("/Script/MoviePlayer"), TEXT("UMoviePlayerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePlayerSettings);
static UEnum* EMoviePlaybackType_StaticEnum()
{
	extern MOVIEPLAYER_API class UPackage* Z_Construct_UPackage__Script_MoviePlayer();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern MOVIEPLAYER_API class UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, Z_Construct_UPackage__Script_MoviePlayer(), TEXT("EMoviePlaybackType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePlaybackType(EMoviePlaybackType_StaticEnum, TEXT("/Script/MoviePlayer"), TEXT("EMoviePlaybackType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_MoviePlayer();
		extern uint32 Get_Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePlaybackType"), 0, Get_Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMoviePlaybackType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("MT_Normal"), 0);
			EnumNames.Emplace(TEXT("MT_Looped"), 1);
			EnumNames.Emplace(TEXT("MT_LoadingLoop"), 2);
			EnumNames.Emplace(TEXT("MT_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EMoviePlaybackType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/MoviePlayer.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MT_LoadingLoop.ToolTip"), TEXT("Looped playback mode.  Play all movies in the play list in order then start over until manaully cancelled"));
			MetaData->SetValue(ReturnEnum, TEXT("MT_Looped.ToolTip"), TEXT("Normal playback mode.  Play each movie in the play list a single time"));
			MetaData->SetValue(ReturnEnum, TEXT("MT_MAX.ToolTip"), TEXT("Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("In order for a platform to support early movie playback, the platform must support the rendering thread\nstarting very early and support rendering as soon as it is started and the module containing the movie streamer for the platform must already be loaded"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_CRC() { return 4135926411U; }
	UPackage* Z_Construct_UPackage__Script_MoviePlayer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/MoviePlayer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD540C085;
			Guid.B = 0x07D1D60A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
