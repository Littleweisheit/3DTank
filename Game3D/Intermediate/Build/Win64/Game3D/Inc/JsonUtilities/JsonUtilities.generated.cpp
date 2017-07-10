// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "JsonUtilities.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1JsonUtilities() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	JSONUTILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	JSONUTILITIES_API class UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();
	JSONUTILITIES_API class UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject();
	JSONUTILITIES_API class UPackage* Z_Construct_UPackage__Script_JsonUtilities();
class UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	extern JSONUTILITIES_API class UPackage* Z_Construct_UPackage__Script_JsonUtilities();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONUTILITIES_API class UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
		extern JSONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper, Z_Construct_UPackage__Script_JsonUtilities(), TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonObjectWrapper(FJsonObjectWrapper::StaticStruct, TEXT("/Script/JsonUtilities"), TEXT("JsonObjectWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper
{
	FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonObjectWrapper")),new UScriptStruct::TCppStructOps<FJsonObjectWrapper>);
	}
} ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper;
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_JsonUtilities();
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("JsonObjectWrapper"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FJsonObjectWrapper>, EStructFlags(0x00000201));
			UProperty* NewProp_JsonString = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("JsonString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(JsonString, FJsonObjectWrapper), 0x0010000000020001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/JsonObjectWrapper.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly"));
			MetaData->SetValue(NewProp_JsonString, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(NewProp_JsonString, TEXT("ModuleRelativePath"), TEXT("Public/JsonObjectWrapper.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC() { return 2742932302U; }
	void UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_JsonUtilities();
			OuterClass = UJsonUtilitiesDummyObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UJsonUtilitiesDummyObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("JsonObjectWrapper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/JsonObjectWrapper.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonUtilitiesDummyObject, 1141392520);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject(Z_Construct_UClass_UJsonUtilitiesDummyObject, &UJsonUtilitiesDummyObject::StaticClass, TEXT("/Script/JsonUtilities"), TEXT("UJsonUtilitiesDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonUtilitiesDummyObject);
	UPackage* Z_Construct_UPackage__Script_JsonUtilities()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/JsonUtilities")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC19BC81B;
			Guid.B = 0xE33CC1BA;
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
