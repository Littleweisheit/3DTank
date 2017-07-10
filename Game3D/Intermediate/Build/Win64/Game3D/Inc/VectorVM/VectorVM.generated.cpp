// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VectorVM.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1VectorVM() {}
#if USE_COMPILED_IN_NATIVES
	VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOp();
	VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation();
	VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes();
	VECTORVM_API class UPackage* Z_Construct_UPackage__Script_VectorVM();
static UEnum* EVectorVMOp_StaticEnum()
{
	extern VECTORVM_API class UPackage* Z_Construct_UPackage__Script_VectorVM();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOp();
		Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOp, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOp"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMOp(EVectorVMOp_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMOp"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOp()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_VectorVM();
		extern uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOp_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMOp"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMOp_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVectorVMOp"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVectorVMOp::done"), 0);
			EnumNames.Emplace(TEXT("EVectorVMOp::add"), 1);
			EnumNames.Emplace(TEXT("EVectorVMOp::sub"), 2);
			EnumNames.Emplace(TEXT("EVectorVMOp::mul"), 3);
			EnumNames.Emplace(TEXT("EVectorVMOp::div"), 4);
			EnumNames.Emplace(TEXT("EVectorVMOp::mad"), 5);
			EnumNames.Emplace(TEXT("EVectorVMOp::lerp"), 6);
			EnumNames.Emplace(TEXT("EVectorVMOp::rcp"), 7);
			EnumNames.Emplace(TEXT("EVectorVMOp::rsq"), 8);
			EnumNames.Emplace(TEXT("EVectorVMOp::sqrt"), 9);
			EnumNames.Emplace(TEXT("EVectorVMOp::neg"), 10);
			EnumNames.Emplace(TEXT("EVectorVMOp::abs"), 11);
			EnumNames.Emplace(TEXT("EVectorVMOp::exp"), 12);
			EnumNames.Emplace(TEXT("EVectorVMOp::exp2"), 13);
			EnumNames.Emplace(TEXT("EVectorVMOp::log"), 14);
			EnumNames.Emplace(TEXT("EVectorVMOp::log2"), 15);
			EnumNames.Emplace(TEXT("EVectorVMOp::sin"), 16);
			EnumNames.Emplace(TEXT("EVectorVMOp::cos"), 17);
			EnumNames.Emplace(TEXT("EVectorVMOp::tan"), 18);
			EnumNames.Emplace(TEXT("EVectorVMOp::asin"), 19);
			EnumNames.Emplace(TEXT("EVectorVMOp::acos"), 20);
			EnumNames.Emplace(TEXT("EVectorVMOp::atan"), 21);
			EnumNames.Emplace(TEXT("EVectorVMOp::atan2"), 22);
			EnumNames.Emplace(TEXT("EVectorVMOp::ceil"), 23);
			EnumNames.Emplace(TEXT("EVectorVMOp::floor"), 24);
			EnumNames.Emplace(TEXT("EVectorVMOp::fmod"), 25);
			EnumNames.Emplace(TEXT("EVectorVMOp::frac"), 26);
			EnumNames.Emplace(TEXT("EVectorVMOp::trunc"), 27);
			EnumNames.Emplace(TEXT("EVectorVMOp::clamp"), 28);
			EnumNames.Emplace(TEXT("EVectorVMOp::min"), 29);
			EnumNames.Emplace(TEXT("EVectorVMOp::max"), 30);
			EnumNames.Emplace(TEXT("EVectorVMOp::pow"), 31);
			EnumNames.Emplace(TEXT("EVectorVMOp::sign"), 32);
			EnumNames.Emplace(TEXT("EVectorVMOp::step"), 33);
			EnumNames.Emplace(TEXT("EVectorVMOp::random"), 34);
			EnumNames.Emplace(TEXT("EVectorVMOp::noise"), 35);
			EnumNames.Emplace(TEXT("EVectorVMOp::output"), 36);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmplt"), 37);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmple"), 38);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpgt"), 39);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpge"), 40);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpeq"), 41);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpneq"), 42);
			EnumNames.Emplace(TEXT("EVectorVMOp::select"), 43);
			EnumNames.Emplace(TEXT("EVectorVMOp::addi"), 44);
			EnumNames.Emplace(TEXT("EVectorVMOp::subi"), 45);
			EnumNames.Emplace(TEXT("EVectorVMOp::muli"), 46);
			EnumNames.Emplace(TEXT("EVectorVMOp::clampi"), 47);
			EnumNames.Emplace(TEXT("EVectorVMOp::mini"), 48);
			EnumNames.Emplace(TEXT("EVectorVMOp::maxi"), 49);
			EnumNames.Emplace(TEXT("EVectorVMOp::absi"), 50);
			EnumNames.Emplace(TEXT("EVectorVMOp::negi"), 51);
			EnumNames.Emplace(TEXT("EVectorVMOp::signi"), 52);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmplti"), 53);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmplei"), 54);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpgti"), 55);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpgei"), 56);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpeqi"), 57);
			EnumNames.Emplace(TEXT("EVectorVMOp::cmpneqi"), 58);
			EnumNames.Emplace(TEXT("EVectorVMOp::bit_and"), 59);
			EnumNames.Emplace(TEXT("EVectorVMOp::bit_or"), 60);
			EnumNames.Emplace(TEXT("EVectorVMOp::bit_xor"), 61);
			EnumNames.Emplace(TEXT("EVectorVMOp::bit_not"), 62);
			EnumNames.Emplace(TEXT("EVectorVMOp::logic_and"), 63);
			EnumNames.Emplace(TEXT("EVectorVMOp::logic_or"), 64);
			EnumNames.Emplace(TEXT("EVectorVMOp::logic_xor"), 65);
			EnumNames.Emplace(TEXT("EVectorVMOp::logic_not"), 66);
			EnumNames.Emplace(TEXT("EVectorVMOp::f2i"), 67);
			EnumNames.Emplace(TEXT("EVectorVMOp::i2f"), 68);
			EnumNames.Emplace(TEXT("EVectorVMOp::f2b"), 69);
			EnumNames.Emplace(TEXT("EVectorVMOp::b2f"), 70);
			EnumNames.Emplace(TEXT("EVectorVMOp::i2b"), 71);
			EnumNames.Emplace(TEXT("EVectorVMOp::b2i"), 72);
			EnumNames.Emplace(TEXT("EVectorVMOp::inputdata_32bit"), 73);
			EnumNames.Emplace(TEXT("EVectorVMOp::inputdata_noadvance_32bit"), 74);
			EnumNames.Emplace(TEXT("EVectorVMOp::outputdata_32bit"), 75);
			EnumNames.Emplace(TEXT("EVectorVMOp::acquireindex"), 76);
			EnumNames.Emplace(TEXT("EVectorVMOp::external_func_call"), 77);
			EnumNames.Emplace(TEXT("EVectorVMOp::exec_index"), 78);
			EnumNames.Emplace(TEXT("EVectorVMOp::noise2D"), 79);
			EnumNames.Emplace(TEXT("EVectorVMOp::noise3D"), 80);
			EnumNames.Emplace(TEXT("EVectorVMOp::enter_stat_scope"), 81);
			EnumNames.Emplace(TEXT("EVectorVMOp::exit_stat_scope"), 82);
			EnumNames.Emplace(TEXT("EVectorVMOp::round"), 83);
			EnumNames.Emplace(TEXT("EVectorVMOp::NumOpcodes"), 84);
			EnumNames.Emplace(TEXT("EVectorVMOp::EVectorVMOp_MAX"), 85);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVectorVMOp");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("addi.ToolTip"), TEXT("Integer ops"));
			MetaData->SetValue(ReturnEnum, TEXT("clampi.ToolTip"), TEXT("divi,SSE Integer division is not implemented as an intrinsic. Will have to do some manual implementation."));
			MetaData->SetValue(ReturnEnum, TEXT("cmplt.ToolTip"), TEXT("Comparison ops."));
			MetaData->SetValue(ReturnEnum, TEXT("enter_stat_scope.ToolTip"), TEXT("Utility ops for hooking into the stats system for performance analysis."));
			MetaData->SetValue(ReturnEnum, TEXT("exec_index.ToolTip"), TEXT("Returns the index of each instance in the current execution context."));
			MetaData->SetValue(ReturnEnum, TEXT("f2i.ToolTip"), TEXT("conversions"));
			MetaData->SetValue(ReturnEnum, TEXT("inputdata_32bit.ToolTip"), TEXT("data read/write"));
			MetaData->SetValue(ReturnEnum, TEXT("logic_and.ToolTip"), TEXT("\"Boolean\" ops. Currently handling bools as integers."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VectorVM.h"));
			MetaData->SetValue(ReturnEnum, TEXT("round.ToolTip"), TEXT("TODO: Move back to the float ops when we can auto recompile existing data."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOp_CRC() { return 3973143529U; }
static UEnum* EVectorVMOperandLocation_StaticEnum()
{
	extern VECTORVM_API class UPackage* Z_Construct_UPackage__Script_VectorVM();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation();
		Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOperandLocation"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMOperandLocation(EVectorVMOperandLocation_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMOperandLocation"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_VectorVM();
		extern uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMOperandLocation"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVectorVMOperandLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVectorVMOperandLocation::Register"), 0);
			EnumNames.Emplace(TEXT("EVectorVMOperandLocation::Constant"), 1);
			EnumNames.Emplace(TEXT("EVectorVMOperandLocation::Num"), 2);
			EnumNames.Emplace(TEXT("EVectorVMOperandLocation::EVectorVMOperandLocation_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVectorVMOperandLocation");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VectorVM.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_CRC() { return 3191054743U; }
static UEnum* EVectorVMBaseTypes_StaticEnum()
{
	extern VECTORVM_API class UPackage* Z_Construct_UPackage__Script_VectorVM();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern VECTORVM_API class UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes();
		Singleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes, Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMBaseTypes"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorVMBaseTypes(EVectorVMBaseTypes_StaticEnum, TEXT("/Script/VectorVM"), TEXT("EVectorVMBaseTypes"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_VectorVM();
		extern uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorVMBaseTypes"), 0, Get_Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVectorVMBaseTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVectorVMBaseTypes::Float"), 0);
			EnumNames.Emplace(TEXT("EVectorVMBaseTypes::Int"), 1);
			EnumNames.Emplace(TEXT("EVectorVMBaseTypes::Bool"), 2);
			EnumNames.Emplace(TEXT("EVectorVMBaseTypes::Num"), 3);
			EnumNames.Emplace(TEXT("EVectorVMBaseTypes::EVectorVMBaseTypes_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVectorVMBaseTypes");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VectorVM.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Num.Hidden"), TEXT(""));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_CRC() { return 980454590U; }
	UPackage* Z_Construct_UPackage__Script_VectorVM()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/VectorVM")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x796F56DB;
			Guid.B = 0xDD6E00A5;
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
