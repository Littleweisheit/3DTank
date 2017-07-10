// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InputCore.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1InputCore() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_ETouchType();
	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels();
	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTCORE_API class UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister();
	INPUTCORE_API class UClass* Z_Construct_UClass_UInputCoreTypes();
	INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
static UEnum* ETouchType_StaticEnum()
{
	extern INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_ETouchType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchType, Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchType(ETouchType_StaticEnum, TEXT("/Script/InputCore"), TEXT("ETouchType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_InputCore_ETouchType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_InputCore();
		extern uint32 Get_Z_Construct_UEnum_InputCore_ETouchType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchType"), 0, Get_Z_Construct_UEnum_InputCore_ETouchType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETouchType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETouchType::Began"), 0);
			EnumNames.Emplace(TEXT("ETouchType::Moved"), 1);
			EnumNames.Emplace(TEXT("ETouchType::Stationary"), 2);
			EnumNames.Emplace(TEXT("ETouchType::Ended"), 3);
			EnumNames.Emplace(TEXT("ETouchType::NumTypes"), 4);
			EnumNames.Emplace(TEXT("ETouchType::ETouchType_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ETouchType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Various states of touch inputs."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_InputCore_ETouchType_CRC() { return 28426824U; }
static UEnum* EConsoleForGamepadLabels_StaticEnum()
{
	extern INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels();
		Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels, Z_Construct_UPackage__Script_InputCore(), TEXT("EConsoleForGamepadLabels"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsoleForGamepadLabels(EConsoleForGamepadLabels_StaticEnum, TEXT("/Script/InputCore"), TEXT("EConsoleForGamepadLabels"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_InputCore();
		extern uint32 Get_Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsoleForGamepadLabels"), 0, Get_Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EConsoleForGamepadLabels"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EConsoleForGamepadLabels::None"), 0);
			EnumNames.Emplace(TEXT("EConsoleForGamepadLabels::XBoxOne"), 1);
			EnumNames.Emplace(TEXT("EConsoleForGamepadLabels::PS4"), 2);
			EnumNames.Emplace(TEXT("EConsoleForGamepadLabels::EConsoleForGamepadLabels_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EConsoleForGamepadLabels::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_CRC() { return 3011972702U; }
static UEnum* ETouchIndex_StaticEnum()
{
	extern INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
		Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchIndex, Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchIndex"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchIndex(ETouchIndex_StaticEnum, TEXT("/Script/InputCore"), TEXT("ETouchIndex"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_InputCore_ETouchIndex()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_InputCore();
		extern uint32 Get_Z_Construct_UEnum_InputCore_ETouchIndex_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchIndex"), 0, Get_Z_Construct_UEnum_InputCore_ETouchIndex_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETouchIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETouchIndex::Touch1"), 0);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch2"), 1);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch3"), 2);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch4"), 3);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch5"), 4);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch6"), 5);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch7"), 6);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch8"), 7);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch9"), 8);
			EnumNames.Emplace(TEXT("ETouchIndex::Touch10"), 9);
			EnumNames.Emplace(TEXT("ETouchIndex::ETouchIndex_MAX"), 10);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ETouchIndex::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The number of entries in ETouchIndex must match the number of touch keys defined in EKeys and NUM_TOUCH_KEYS above"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_InputCore_ETouchIndex_CRC() { return 3328495738U; }
static UEnum* EControllerHand_StaticEnum()
{
	extern INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
		Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EControllerHand, Z_Construct_UPackage__Script_InputCore(), TEXT("EControllerHand"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerHand(EControllerHand_StaticEnum, TEXT("/Script/InputCore"), TEXT("EControllerHand"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_InputCore_EControllerHand()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_InputCore();
		extern uint32 Get_Z_Construct_UEnum_InputCore_EControllerHand_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerHand"), 0, Get_Z_Construct_UEnum_InputCore_EControllerHand_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EControllerHand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EControllerHand::Left"), 0);
			EnumNames.Emplace(TEXT("EControllerHand::Right"), 1);
			EnumNames.Emplace(TEXT("EControllerHand::Pad"), 2);
			EnumNames.Emplace(TEXT("EControllerHand::ExternalCamera"), 3);
			EnumNames.Emplace(TEXT("EControllerHand::Gun"), 4);
			EnumNames.Emplace(TEXT("EControllerHand::Special_1"), 5);
			EnumNames.Emplace(TEXT("EControllerHand::Special_2"), 6);
			EnumNames.Emplace(TEXT("EControllerHand::Special_3"), 7);
			EnumNames.Emplace(TEXT("EControllerHand::Special_4"), 8);
			EnumNames.Emplace(TEXT("EControllerHand::Special_5"), 9);
			EnumNames.Emplace(TEXT("EControllerHand::Special_6"), 10);
			EnumNames.Emplace(TEXT("EControllerHand::Special_7"), 11);
			EnumNames.Emplace(TEXT("EControllerHand::Special_8"), 12);
			EnumNames.Emplace(TEXT("EControllerHand::Special_9"), 13);
			EnumNames.Emplace(TEXT("EControllerHand::EControllerHand_MAX"), 14);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EControllerHand");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Defines the controller hands for tracking.  Could be expanded, as needed, to facilitate non-handheld controllers"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_InputCore_EControllerHand_CRC() { return 1626293156U; }
class UScriptStruct* FKey::StaticStruct()
{
	extern INPUTCORE_API class UPackage* Z_Construct_UPackage__Script_InputCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
		extern INPUTCORE_API uint32 Get_Z_Construct_UScriptStruct_FKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKey, Z_Construct_UPackage__Script_InputCore(), TEXT("Key"), sizeof(FKey), Get_Z_Construct_UScriptStruct_FKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKey(FKey::StaticStruct, TEXT("/Script/InputCore"), TEXT("Key"), false, nullptr, nullptr);
static struct FScriptStruct_InputCore_StaticRegisterNativesFKey
{
	FScriptStruct_InputCore_StaticRegisterNativesFKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Key")),new UScriptStruct::TCppStructOps<FKey>);
	}
} ScriptStruct_InputCore_StaticRegisterNativesFKey;
	UScriptStruct* Z_Construct_UScriptStruct_FKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FKey_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Key"), sizeof(FKey), Get_Z_Construct_UScriptStruct_FKey_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FKey>, EStructFlags(0x00000201));
			UProperty* NewProp_KeyName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KeyName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(KeyName, FKey), 0x0040000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
			MetaData->SetValue(NewProp_KeyName, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKey_CRC() { return 2129465848U; }
	void UInputCoreTypes::StaticRegisterNativesUInputCoreTypes()
	{
	}
	UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister()
	{
		return UInputCoreTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputCoreTypes()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_InputCore();
			OuterClass = UInputCoreTypes::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000081;


				static TCppClassTypeInfo<TCppClassTypeTraits<UInputCoreTypes> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputCoreTypes.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputCoreTypes.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCoreTypes, 3370655349);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCoreTypes(Z_Construct_UClass_UInputCoreTypes, &UInputCoreTypes::StaticClass, TEXT("/Script/InputCore"), TEXT("UInputCoreTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCoreTypes);
	UPackage* Z_Construct_UPackage__Script_InputCore()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/InputCore")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xA0B4D3BF;
			Guid.B = 0x49647A71;
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
