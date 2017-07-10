// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AnimationCore.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AnimationCore() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuat();

	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeChain();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData();
	ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeObject();
	ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
class UScriptStruct* FTransformConstraint::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraint, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformConstraint(FTransformConstraint::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformConstraint")),new UScriptStruct::TCppStructOps<FTransformConstraint>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TransformConstraint"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FTransformConstraint>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMaintainOffset, FTransformConstraint, bool);
			UProperty* NewProp_bMaintainOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bMaintainOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMaintainOffset, FTransformConstraint), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bMaintainOffset, FTransformConstraint), sizeof(bool), true);
			UProperty* NewProp_Weight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Weight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Weight, FTransformConstraint), 0x0010000000000005);
			UProperty* NewProp_TargetNode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetNode"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TargetNode, FTransformConstraint), 0x0010000000000005);
			UProperty* NewProp_SourceNode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SourceNode"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SourceNode, FTransformConstraint), 0x0010000000000005);
			UProperty* NewProp_Operator = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Operator"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Operator, FTransformConstraint), 0x0010000000000005, Z_Construct_UScriptStruct_FConstraintDescription());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bMaintainOffset, TEXT("Category"), TEXT("Transform Constraint"));
			MetaData->SetValue(NewProp_bMaintainOffset, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bMaintainOffset, TEXT("ToolTip"), TEXT("When the constraint is first applied, maintain the offset from the target node"));
			MetaData->SetValue(NewProp_Weight, TEXT("Category"), TEXT("Transform Constraint"));
			MetaData->SetValue(NewProp_Weight, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_TargetNode, TEXT("Category"), TEXT("Transform Constraint"));
			MetaData->SetValue(NewProp_TargetNode, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_SourceNode, TEXT("Category"), TEXT("Transform Constraint"));
			MetaData->SetValue(NewProp_SourceNode, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_Operator, TEXT("Category"), TEXT("Transform Constraint"));
			MetaData->SetValue(NewProp_Operator, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_Operator, TEXT("ToolTip"), TEXT("@note thought of separating this out per each but we'll have an issue with applying transform in what order\nbut something to think about if that seems better"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC() { return 1592833209U; }
class UScriptStruct* FConstraintOffset::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintOffset(FConstraintOffset::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintOffset"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintOffset")),new UScriptStruct::TCppStructOps<FConstraintOffset>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstraintOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FConstraintOffset>, EStructFlags(0x00000201));
			UProperty* NewProp_Parent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Parent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Parent, FConstraintOffset), 0x0010000000000000, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Scale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Scale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Scale, FConstraintOffset), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FConstraintOffset), 0x0010000000000000, Z_Construct_UScriptStruct_FQuat());
			UProperty* NewProp_Translation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Translation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Translation, FConstraintOffset), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("individual component is saving different delta\nand they accumulate different"));
			MetaData->SetValue(NewProp_Parent, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_Scale, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_Rotation, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_Translation, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC() { return 2673021846U; }
class UScriptStruct* FConstraintDescription::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescription(FConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescription")),new UScriptStruct::TCppStructOps<FConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConstraintDescription"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FConstraintDescription>, EStructFlags(0x00000201));
			UProperty* NewProp_ScaleAxes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ScaleAxes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScaleAxes, FConstraintDescription), 0x0010000000000005, Z_Construct_UScriptStruct_FFilterOptionPerAxis());
			UProperty* NewProp_RotationAxes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RotationAxes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RotationAxes, FConstraintDescription), 0x0010000000000005, Z_Construct_UScriptStruct_FFilterOptionPerAxis());
			UProperty* NewProp_TranslationAxes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TranslationAxes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TranslationAxes, FConstraintDescription), 0x0010000000000005, Z_Construct_UScriptStruct_FFilterOptionPerAxis());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bParent, FConstraintDescription, bool);
			UProperty* NewProp_bParent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bParent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bParent, FConstraintDescription), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bParent, FConstraintDescription), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bScale, FConstraintDescription, bool);
			UProperty* NewProp_bScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bScale"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bScale, FConstraintDescription), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bScale, FConstraintDescription), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRotation, FConstraintDescription, bool);
			UProperty* NewProp_bRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRotation, FConstraintDescription), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bRotation, FConstraintDescription), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTranslation, FConstraintDescription, bool);
			UProperty* NewProp_bTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTranslation, FConstraintDescription), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bTranslation, FConstraintDescription), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A description of how to apply a simple transform constraint"));
			MetaData->SetValue(NewProp_ScaleAxes, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_ScaleAxes, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_RotationAxes, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_RotationAxes, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_TranslationAxes, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_TranslationAxes, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bParent, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_bParent, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bParent, TEXT("ToolTip"), TEXT("this does composed transform - where as individual will accumulate per component"));
			MetaData->SetValue(NewProp_bScale, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_bScale, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bRotation, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_bRotation, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bTranslation, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_bTranslation, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC() { return 2217078886U; }
class UScriptStruct* FFilterOptionPerAxis::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis, Z_Construct_UPackage__Script_AnimationCore(), TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilterOptionPerAxis(FFilterOptionPerAxis::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("FilterOptionPerAxis"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilterOptionPerAxis")),new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis;
	UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FilterOptionPerAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bZ, FFilterOptionPerAxis, bool);
			UProperty* NewProp_bZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bZ"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bZ, FFilterOptionPerAxis), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bZ, FFilterOptionPerAxis), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bY, FFilterOptionPerAxis, bool);
			UProperty* NewProp_bY = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bY"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bY, FFilterOptionPerAxis), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bY, FFilterOptionPerAxis), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bX, FFilterOptionPerAxis, bool);
			UProperty* NewProp_bX = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bX"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bX, FFilterOptionPerAxis), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bX, FFilterOptionPerAxis), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bZ, TEXT("Category"), TEXT("FFilterOptionPerAxis"));
			MetaData->SetValue(NewProp_bZ, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bY, TEXT("Category"), TEXT("FFilterOptionPerAxis"));
			MetaData->SetValue(NewProp_bY, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
			MetaData->SetValue(NewProp_bX, TEXT("Category"), TEXT("FFilterOptionPerAxis"));
			MetaData->SetValue(NewProp_bX, TEXT("ModuleRelativePath"), TEXT("Public/Constraint.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC() { return 2695925112U; }
class UScriptStruct* FNodeChain::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeChain();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeChain, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeChain(FNodeChain::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeChain")),new UScriptStruct::TCppStructOps<FNodeChain>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeChain()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NodeChain"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNodeChain>, EStructFlags(0x00000201));
			UProperty* NewProp_Nodes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Nodes, FNodeChain), 0x0010000000000000);
			UProperty* NewProp_Nodes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Nodes, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/NodeChain.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A chain of nodes in a hierarchy"));
			MetaData->SetValue(NewProp_Nodes, TEXT("ModuleRelativePath"), TEXT("Public/NodeChain.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC() { return 422240243U; }
class UScriptStruct* FNodeHierarchyWithUserData::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyWithUserData(FNodeHierarchyWithUserData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyWithUserData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyWithUserData")),new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NodeHierarchyWithUserData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>, EStructFlags(0x00000001));
			UProperty* NewProp_Hierarchy = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Hierarchy"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hierarchy, FNodeHierarchyWithUserData), 0x0020080000000000, Z_Construct_UScriptStruct_FNodeHierarchyData());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_Hierarchy, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC() { return 1583280102U; }
class UScriptStruct* FNodeHierarchyData::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyData(FNodeHierarchyData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyData")),new UScriptStruct::TCppStructOps<FNodeHierarchyData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NodeHierarchyData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNodeHierarchyData>, EStructFlags(0x00000001));
			UProperty* NewProp_NodeNameToIndexMapping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NodeNameToIndexMapping"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(NodeNameToIndexMapping, FNodeHierarchyData), 0x0010000000000000);
			UProperty* NewProp_NodeNameToIndexMapping_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_NodeNameToIndexMapping, TEXT("NodeNameToIndexMapping_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_NodeNameToIndexMapping_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_NodeNameToIndexMapping, TEXT("NodeNameToIndexMapping"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
			UProperty* NewProp_Transforms = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Transforms"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Transforms, FNodeHierarchyData), 0x0010000000000000);
			UProperty* NewProp_Transforms_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Transforms, TEXT("Transforms"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Nodes = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Nodes, FNodeHierarchyData), 0x0010000000000000);
			UProperty* NewProp_Nodes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Nodes, TEXT("Nodes"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FNodeObject());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Hierarchy of nodes"));
			MetaData->SetValue(NewProp_NodeNameToIndexMapping, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_NodeNameToIndexMapping, TEXT("ToolTip"), TEXT("Transient look up mapping from name to index to array"));
			MetaData->SetValue(NewProp_Transforms, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_Transforms, TEXT("ToolTip"), TEXT("Node transform data"));
			MetaData->SetValue(NewProp_Nodes, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_Nodes, TEXT("ToolTip"), TEXT("Node hierarchy data"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC() { return 3756821042U; }
class UScriptStruct* FNodeObject::StaticStruct()
{
	extern ANIMATIONCORE_API class UPackage* Z_Construct_UPackage__Script_AnimationCore();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeObject();
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeObject, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeObject(FNodeObject::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeObject"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeObject")),new UScriptStruct::TCppStructOps<FNodeObject>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeObject()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NodeObject"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNodeObject>, EStructFlags(0x00000001));
			UProperty* NewProp_ParentName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ParentName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ParentName, FNodeObject), 0x0010000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FNodeObject), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A node in a named hierarchy"));
			MetaData->SetValue(NewProp_ParentName, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_ParentName, TEXT("ToolTip"), TEXT("The name of this node's parent"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/NodeHierarchy.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("The name of this node"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC() { return 2482387575U; }
	UPackage* Z_Construct_UPackage__Script_AnimationCore()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AnimationCore")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xBC8C9E96;
			Guid.B = 0xC8890D98;
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
