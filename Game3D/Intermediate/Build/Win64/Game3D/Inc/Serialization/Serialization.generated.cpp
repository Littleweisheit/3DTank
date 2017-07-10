// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Serialization.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Serialization() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();

	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerTestStruct(FStructSerializerTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Maps = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Maps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Maps, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct());
			UProperty* NewProp_Arrays = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Arrays"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Arrays, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct());
			UProperty* NewProp_Builtins = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Builtins"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Builtins, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct());
			UProperty* NewProp_Objects = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Objects"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Objects, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct());
			UProperty* NewProp_Booleans = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Booleans"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Booleans, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct());
			UProperty* NewProp_Numerics = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Numerics"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Numerics, FStructSerializerTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for all supported types."));
			MetaData->SetValue(NewProp_Maps, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Arrays, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Builtins, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Objects, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Booleans, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Numerics, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC() { return 2044538623U; }
class UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerMapTestStruct(FStructSerializerMapTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerMapTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerMapTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerMapTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_StrToVec = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StrToVec"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(StrToVec, FStructSerializerMapTestStruct), 0x0010000000000000);
			UProperty* NewProp_StrToVec_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_StrToVec, TEXT("StrToVec_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StrToVec_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_StrToVec, TEXT("StrToVec"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_StrToStr = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StrToStr"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(StrToStr, FStructSerializerMapTestStruct), 0x0010000000000000);
			UProperty* NewProp_StrToStr_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_StrToStr, TEXT("StrToStr_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StrToStr_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_StrToStr, TEXT("StrToStr"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
			UProperty* NewProp_IntToStr = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IntToStr"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(IntToStr, FStructSerializerMapTestStruct), 0x0010000000000000);
			UProperty* NewProp_IntToStr_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_IntToStr, TEXT("IntToStr_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_IntToStr_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_IntToStr, TEXT("IntToStr"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for map properties."));
			MetaData->SetValue(NewProp_StrToVec, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StrToStr, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_IntToStr, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC() { return 1635113291U; }
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerArrayTestStruct(FStructSerializerArrayTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerArrayTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerArrayTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerArrayTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_VectorArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VectorArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VectorArray, FStructSerializerArrayTestStruct), 0x0010000000000000);
			UProperty* NewProp_VectorArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VectorArray, TEXT("VectorArray"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_StaticFloatArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticFloatArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StaticFloatArray, FStructSerializerArrayTestStruct), 0x0010000000000000);
			NewProp_StaticFloatArray->ArrayDim = CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct);
			UProperty* NewProp_StaticInt32Array = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticInt32Array"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StaticInt32Array, FStructSerializerArrayTestStruct), 0x0010000000000000);
			NewProp_StaticInt32Array->ArrayDim = CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct);
			UProperty* NewProp_StaticSingleElement = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticSingleElement"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StaticSingleElement, FStructSerializerArrayTestStruct), 0x0010000000000000);
			NewProp_StaticSingleElement->ArrayDim = CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct);
			UProperty* NewProp_Int32Array = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int32Array"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Int32Array, FStructSerializerArrayTestStruct), 0x0010000000000000);
			UProperty* NewProp_Int32Array_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Int32Array, TEXT("Int32Array"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for array properties."));
			MetaData->SetValue(NewProp_VectorArray, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticFloatArray, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticInt32Array, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticSingleElement, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int32Array, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC() { return 1433032472U; }
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBuiltinTestStruct(FStructSerializerBuiltinTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBuiltinTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBuiltinTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerBuiltinTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Vector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Vector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Vector, FStructSerializerBuiltinTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(Text, FStructSerializerBuiltinTestStruct), 0x0010000000000000);
			UProperty* NewProp_Rotator = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotator"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotator, FStructSerializerBuiltinTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_String = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("String"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(String, FStructSerializerBuiltinTestStruct), 0x0010000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FStructSerializerBuiltinTestStruct), 0x0010000000000000);
			UProperty* NewProp_Guid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guid"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Guid, FStructSerializerBuiltinTestStruct), 0x0010000000000000, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for properties of various built-in types."));
			MetaData->SetValue(NewProp_Vector, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Text, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Rotator, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_String, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Guid, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC() { return 598331264U; }
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerObjectTestStruct(FStructSerializerObjectTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerObjectTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerObjectTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerObjectTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_ObjectPtr = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObjectPtr"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ObjectPtr, FStructSerializerObjectTestStruct), 0x0010000000000000, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_Class = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Class"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Class, FStructSerializerObjectTestStruct), 0x0014000000000000, Z_Construct_UClass_UObject_NoRegister(), UClass::StaticClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for UObject properties."));
			MetaData->SetValue(NewProp_ObjectPtr, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Class, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC() { return 1369406269U; }
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBooleanTestStruct(FStructSerializerBooleanTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBooleanTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBooleanTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerBooleanTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Bitfield = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bitfield"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(Bitfield, FStructSerializerBooleanTestStruct), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(BoolTrue, FStructSerializerBooleanTestStruct, bool);
			UProperty* NewProp_BoolTrue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoolTrue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(BoolTrue, FStructSerializerBooleanTestStruct), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(BoolTrue, FStructSerializerBooleanTestStruct), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(BoolFalse, FStructSerializerBooleanTestStruct, bool);
			UProperty* NewProp_BoolFalse = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoolFalse"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(BoolFalse, FStructSerializerBooleanTestStruct), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(BoolFalse, FStructSerializerBooleanTestStruct), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for boolean properties."));
			MetaData->SetValue(NewProp_Bitfield, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_BoolTrue, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_BoolFalse, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC() { return 3250134584U; }
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	extern SERIALIZATION_API class UPackage* Z_Construct_UPackage__Script_Serialization();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerNumericTestStruct(FStructSerializerNumericTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerNumericTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerNumericTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerNumericTestStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Double = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Double"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(Double, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_Float = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Float"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Float, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_UInt64 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt64"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt64Property(CPP_PROPERTY_BASE(UInt64, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_UInt32 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt32"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(UInt32, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_UInt16 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt16"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(UInt16, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_UInt8 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt8"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(UInt8, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_Int64 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int64"), RF_Public|RF_Transient|RF_MarkAsNative) UInt64Property(CPP_PROPERTY_BASE(Int64, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_Int32 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int32"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Int32, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_Int16 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int16"), RF_Public|RF_Transient|RF_MarkAsNative) UInt16Property(CPP_PROPERTY_BASE(Int16, FStructSerializerNumericTestStruct), 0x0010000000000000);
			UProperty* NewProp_Int8 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int8"), RF_Public|RF_Transient|RF_MarkAsNative) UInt8Property(CPP_PROPERTY_BASE(Int8, FStructSerializerNumericTestStruct), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for numeric properties."));
			MetaData->SetValue(NewProp_Double, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Float, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt64, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt32, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt16, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt8, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int64, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int32, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int16, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int8, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC() { return 560324113U; }
	UPackage* Z_Construct_UPackage__Script_Serialization()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Serialization")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD99CF472;
			Guid.B = 0xC008FB29;
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
