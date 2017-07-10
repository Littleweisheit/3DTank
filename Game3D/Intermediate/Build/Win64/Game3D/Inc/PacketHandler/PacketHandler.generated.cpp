// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PacketHandler.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1PacketHandler() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	PACKETHANDLER_API class UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister();
	PACKETHANDLER_API class UClass* Z_Construct_UClass_UHandlerComponentFactory();
	PACKETHANDLER_API class UPackage* Z_Construct_UPackage__Script_PacketHandler();
	void UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory()
	{
	}
	UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UHandlerComponentFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_PacketHandler();
			OuterClass = UHandlerComponentFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UHandlerComponentFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HandlerComponentFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/HandlerComponentFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A UObject alternative for loading HandlerComponents without strict module dependency"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHandlerComponentFactory, 4289761450);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHandlerComponentFactory(Z_Construct_UClass_UHandlerComponentFactory, &UHandlerComponentFactory::StaticClass, TEXT("/Script/PacketHandler"), TEXT("UHandlerComponentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlerComponentFactory);
	UPackage* Z_Construct_UPackage__Script_PacketHandler()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/PacketHandler")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xEEC95355;
			Guid.B = 0x2DF2A094;
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
