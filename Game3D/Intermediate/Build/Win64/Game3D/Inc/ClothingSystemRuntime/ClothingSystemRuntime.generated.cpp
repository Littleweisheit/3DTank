// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ClothingSystemRuntime.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ClothingSystemRuntime() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingAssetBase();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API class UClass* Z_Construct_UClass_UClothingSimulationFactory();

	CLOTHINGSYSTEMRUNTIME_API class UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod();
	CLOTHINGSYSTEMRUNTIME_API class UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothConfig();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothLODData();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingAssetCustomData();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingAsset_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingAsset();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API class UClass* Z_Construct_UClass_UClothingSimulationFactoryNv();
	CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
static UEnum* EClothingWindMethod_StaticEnum()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod();
		Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("EClothingWindMethod"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothingWindMethod(EClothingWindMethod_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("EClothingWindMethod"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothingWindMethod"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EClothingWindMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EClothingWindMethod::Legacy"), 0);
			EnumNames.Emplace(TEXT("EClothingWindMethod::Accurate"), 1);
			EnumNames.Emplace(TEXT("EClothingWindMethod::EClothingWindMethod_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EClothingWindMethod");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Accurate.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("Accurate.ToolTip"), TEXT("Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration"));
			MetaData->SetValue(ReturnEnum, TEXT("Legacy.ToolTip"), TEXT("Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_CRC() { return 3761819301U; }
static UEnum* MaskTarget_PhysMesh_StaticEnum()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh();
		Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("MaskTarget_PhysMesh"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MaskTarget_PhysMesh(MaskTarget_PhysMesh_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("MaskTarget_PhysMesh"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MaskTarget_PhysMesh"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MaskTarget_PhysMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("MaskTarget_PhysMesh::None"), 0);
			EnumNames.Emplace(TEXT("MaskTarget_PhysMesh::MaxDistance"), 1);
			EnumNames.Emplace(TEXT("MaskTarget_PhysMesh::BackstopDistance"), 2);
			EnumNames.Emplace(TEXT("MaskTarget_PhysMesh::BackstopRadius"), 3);
			EnumNames.Emplace(TEXT("MaskTarget_PhysMesh::MaskTarget_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("MaskTarget_PhysMesh");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The possible targets for a physical mesh mask"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_CRC() { return 2885336743U; }
class UScriptStruct* FClothConfig::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothConfig();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConfig(FClothConfig::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConfig"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConfig")),new UScriptStruct::TCppStructOps<FClothConfig>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FClothConfig()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothConfig>, EStructFlags(0x00000001));
			UProperty* NewProp_CollisionThickness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CollisionThickness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CollisionThickness, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_TetherLimit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TetherLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TetherLimit, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_TetherStiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TetherStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TetherStiffness, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_GravityScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GravityScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GravityScale, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_StiffnessFrequency = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StiffnessFrequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StiffnessFrequency, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_SolverFrequency = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SolverFrequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolverFrequency, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_CentrifugalInertiaScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CentrifugalInertiaScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CentrifugalInertiaScale, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AngularInertiaScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AngularInertiaScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AngularInertiaScale, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LinearInertiaScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LinearInertiaScale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinearInertiaScale, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AngularDrag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AngularDrag"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AngularDrag, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LinearDrag = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LinearDrag"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinearDrag, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WindLiftCoefficient = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WindLiftCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WindLiftCoefficient, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_WindDragCoefficient = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WindDragCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WindDragCoefficient, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_Friction = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Friction"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Friction, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_Damping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Damping"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Damping, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SelfCollisionCullScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelfCollisionCullScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SelfCollisionCullScale, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_SelfCollisionStiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelfCollisionStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SelfCollisionStiffness, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_SelfCollisionRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelfCollisionRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SelfCollisionRadius, FClothConfig), 0x0010000000000001);
			UProperty* NewProp_ShearConstraintConfig = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShearConstraintConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ShearConstraintConfig, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FClothConstraintSetup());
			UProperty* NewProp_BendConstraintConfig = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BendConstraintConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BendConstraintConfig, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FClothConstraintSetup());
			UProperty* NewProp_HorizontalConstraintConfig = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HorizontalConstraintConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HorizontalConstraintConfig, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FClothConstraintSetup());
			UProperty* NewProp_VerticalConstraintConfig = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VerticalConstraintConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VerticalConstraintConfig, FClothConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FClothConstraintSetup());
			UProperty* NewProp_WindMethod = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WindMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WindMethod, FClothConfig), 0x0010000000000001, Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod());
			UProperty* NewProp_WindMethod_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WindMethod, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Holds initial, asset level config for clothing actors."));
			MetaData->SetValue(NewProp_CollisionThickness, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_CollisionThickness, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_CollisionThickness, TEXT("ToolTip"), TEXT("'Thickness' of the simulated cloth, used to adjust collisions"));
			MetaData->SetValue(NewProp_TetherLimit, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_TetherLimit, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_TetherLimit, TEXT("ToolTip"), TEXT("Scale for the limit of particle tethers (how far they can separate)"));
			MetaData->SetValue(NewProp_TetherStiffness, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_TetherStiffness, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_TetherStiffness, TEXT("ToolTip"), TEXT("Scale for stiffness of particle tethers between each other"));
			MetaData->SetValue(NewProp_GravityScale, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_GravityScale, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_GravityScale, TEXT("ToolTip"), TEXT("Scale of gravity effect on particles"));
			MetaData->SetValue(NewProp_StiffnessFrequency, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_StiffnessFrequency, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_StiffnessFrequency, TEXT("ToolTip"), TEXT("Frequency for stiffness calculations, lower values will degrade stiffness of constraints"));
			MetaData->SetValue(NewProp_SolverFrequency, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_SolverFrequency, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_SolverFrequency, TEXT("ToolTip"), TEXT("Frequency of the position solver, lower values will lead to stretchier, bouncier cloth"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("ClampMax"), TEXT("1"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("ToolTip"), TEXT("Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("UIMax"), TEXT("1"));
			MetaData->SetValue(NewProp_CentrifugalInertiaScale, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("ClampMax"), TEXT("1"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("ToolTip"), TEXT("Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("UIMax"), TEXT("1"));
			MetaData->SetValue(NewProp_AngularInertiaScale, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("ClampMax"), TEXT("1"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("ToolTip"), TEXT("Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("UIMax"), TEXT("1"));
			MetaData->SetValue(NewProp_LinearInertiaScale, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_AngularDrag, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_AngularDrag, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_AngularDrag, TEXT("ToolTip"), TEXT("Drag applied to angular particle movement, higher values should limit material bending (per-axis)"));
			MetaData->SetValue(NewProp_LinearDrag, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_LinearDrag, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_LinearDrag, TEXT("ToolTip"), TEXT("Drag applied to linear particle movement per-axis"));
			MetaData->SetValue(NewProp_WindLiftCoefficient, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_WindLiftCoefficient, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_WindLiftCoefficient, TEXT("ToolTip"), TEXT("Lift coefficient for wind calculations, higher values make cloth rise easier in wind"));
			MetaData->SetValue(NewProp_WindDragCoefficient, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_WindDragCoefficient, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_WindDragCoefficient, TEXT("ToolTip"), TEXT("Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth"));
			MetaData->SetValue(NewProp_Friction, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_Friction, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Friction, TEXT("ToolTip"), TEXT("Friction of the surface when colliding"));
			MetaData->SetValue(NewProp_Damping, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_Damping, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Damping, TEXT("ToolTip"), TEXT("Damping of particle motion per-axis"));
			MetaData->SetValue(NewProp_SelfCollisionCullScale, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_SelfCollisionCullScale, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_SelfCollisionCullScale, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_SelfCollisionCullScale, TEXT("ToolTip"), TEXT("Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!"));
			MetaData->SetValue(NewProp_SelfCollisionCullScale, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_SelfCollisionStiffness, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_SelfCollisionStiffness, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_SelfCollisionStiffness, TEXT("ToolTip"), TEXT("Stiffness of the spring force that will resolve self collisions"));
			MetaData->SetValue(NewProp_SelfCollisionRadius, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_SelfCollisionRadius, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_SelfCollisionRadius, TEXT("ToolTip"), TEXT("Size of self collision spheres centered on each vert"));
			MetaData->SetValue(NewProp_ShearConstraintConfig, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_ShearConstraintConfig, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_ShearConstraintConfig, TEXT("ToolTip"), TEXT("Constraint data for shear constraints"));
			MetaData->SetValue(NewProp_BendConstraintConfig, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_BendConstraintConfig, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BendConstraintConfig, TEXT("ToolTip"), TEXT("Constraint data for bend constraints"));
			MetaData->SetValue(NewProp_HorizontalConstraintConfig, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_HorizontalConstraintConfig, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_HorizontalConstraintConfig, TEXT("ToolTip"), TEXT("Constraint data for horizontal constraints"));
			MetaData->SetValue(NewProp_VerticalConstraintConfig, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_VerticalConstraintConfig, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_VerticalConstraintConfig, TEXT("ToolTip"), TEXT("Constraint data for vertical constraints"));
			MetaData->SetValue(NewProp_WindMethod, TEXT("Category"), TEXT("ClothConfig"));
			MetaData->SetValue(NewProp_WindMethod, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_WindMethod, TEXT("ToolTip"), TEXT("How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC() { return 2299407081U; }
class UScriptStruct* FClothConstraintSetup::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConstraintSetup(FClothConstraintSetup::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConstraintSetup"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConstraintSetup")),new UScriptStruct::TCppStructOps<FClothConstraintSetup>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup;
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothConstraintSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothConstraintSetup>, EStructFlags(0x00000001));
			UProperty* NewProp_CompressionLimit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CompressionLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CompressionLimit, FClothConstraintSetup), 0x0010000000000001);
			UProperty* NewProp_StretchLimit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StretchLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StretchLimit, FClothConstraintSetup), 0x0010000000000001);
			UProperty* NewProp_StiffnessMultiplier = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StiffnessMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StiffnessMultiplier, FClothConstraintSetup), 0x0010000000000001);
			UProperty* NewProp_Stiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Stiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Stiffness, FClothConstraintSetup), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Container for a constraint setup, these can be horizontal, vertical, shear and bend"));
			MetaData->SetValue(NewProp_CompressionLimit, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_CompressionLimit, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_CompressionLimit, TEXT("ToolTip"), TEXT("The hard limit on how far this constraint can compress"));
			MetaData->SetValue(NewProp_StretchLimit, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_StretchLimit, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_StretchLimit, TEXT("ToolTip"), TEXT("The hard limit on how far this constarint can stretch"));
			MetaData->SetValue(NewProp_StiffnessMultiplier, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_StiffnessMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_StiffnessMultiplier, TEXT("ToolTip"), TEXT("A multiplier affecting the above value"));
			MetaData->SetValue(NewProp_Stiffness, TEXT("Category"), TEXT("Constraint"));
			MetaData->SetValue(NewProp_Stiffness, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Stiffness, TEXT("ToolTip"), TEXT("How stiff this constraint is, this affects how closely it will follow the desired position"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC() { return 1807404523U; }
class UScriptStruct* FClothLODData::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothLODData();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothLODData(FClothLODData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothLODData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothLODData")),new UScriptStruct::TCppStructOps<FClothLODData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothLODData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothLODData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothLODData>, EStructFlags(0x00000001));
#if WITH_EDITORONLY_DATA
			UProperty* NewProp_ParameterMasks = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ParameterMasks"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ParameterMasks, FClothLODData), 0x0010000800000001);
			UProperty* NewProp_ParameterMasks_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ParameterMasks, TEXT("ParameterMasks"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000800000000, Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh());
#endif // WITH_EDITORONLY_DATA
			UProperty* NewProp_CollisionData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CollisionData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CollisionData, FClothLODData), 0x0010000000000001, Z_Construct_UScriptStruct_FClothCollisionData());
			UProperty* NewProp_PhysicalMeshData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PhysicalMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PhysicalMeshData, FClothLODData), 0x0010000000000001, Z_Construct_UScriptStruct_FClothPhysicalMeshData());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_ParameterMasks, TEXT("Category"), TEXT("Masks"));
			MetaData->SetValue(NewProp_ParameterMasks, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_ParameterMasks, TEXT("ToolTip"), TEXT("Parameter masks defining the physics mesh masked data"));
			MetaData->SetValue(NewProp_CollisionData, TEXT("Category"), TEXT("Collision"));
			MetaData->SetValue(NewProp_CollisionData, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_CollisionData, TEXT("ToolTip"), TEXT("Collision primitive and covex data for clothing collisions"));
			MetaData->SetValue(NewProp_PhysicalMeshData, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_PhysicalMeshData, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_PhysicalMeshData, TEXT("ToolTip"), TEXT("Raw phys mesh data"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC() { return 1576481756U; }
class UScriptStruct* FClothPhysicalMeshData::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicalMeshData(FClothPhysicalMeshData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothPhysicalMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicalMeshData")),new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothPhysicalMeshData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>, EStructFlags(0x00000201));
			UProperty* NewProp_SelfCollisionIndices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelfCollisionIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SelfCollisionIndices, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_SelfCollisionIndices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SelfCollisionIndices, TEXT("SelfCollisionIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_NumFixedVerts = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("NumFixedVerts"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumFixedVerts, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_MaxBoneWeights = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxBoneWeights"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxBoneWeights, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_BoneData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BoneData, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_BoneData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BoneData, TEXT("BoneData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FClothVertBoneData());
			UProperty* NewProp_InverseMasses = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InverseMasses"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InverseMasses, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_InverseMasses_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InverseMasses, TEXT("InverseMasses"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_BackstopRadiuses = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BackstopRadiuses"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BackstopRadiuses, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_BackstopRadiuses_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BackstopRadiuses, TEXT("BackstopRadiuses"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_BackstopDistances = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BackstopDistances"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BackstopDistances, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_BackstopDistances_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BackstopDistances, TEXT("BackstopDistances"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MaxDistances = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxDistances"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MaxDistances, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_MaxDistances_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MaxDistances, TEXT("MaxDistances"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Indices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Indices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Indices, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_Indices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Indices, TEXT("Indices"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Normals = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Normals, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_Normals_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Normals, TEXT("Normals"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Vertices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Vertices, FClothPhysicalMeshData), 0x0010000000000001);
			UProperty* NewProp_Vertices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Vertices, TEXT("Vertices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Physical mesh data created during asset import or created from a skeletal mesh"));
			MetaData->SetValue(NewProp_SelfCollisionIndices, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_SelfCollisionIndices, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_SelfCollisionIndices, TEXT("ToolTip"), TEXT("Valid indices to use for self collisions (reduced set of Indices)"));
			MetaData->SetValue(NewProp_NumFixedVerts, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_NumFixedVerts, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_NumFixedVerts, TEXT("ToolTip"), TEXT("Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)"));
			MetaData->SetValue(NewProp_MaxBoneWeights, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_MaxBoneWeights, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_MaxBoneWeights, TEXT("ToolTip"), TEXT("Maximum number of bone weights of any vetex"));
			MetaData->SetValue(NewProp_BoneData, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_BoneData, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BoneData, TEXT("ToolTip"), TEXT("Indices and weights for each vertex, used to skin the mesh to create the reference pose"));
			MetaData->SetValue(NewProp_InverseMasses, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_InverseMasses, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_InverseMasses, TEXT("ToolTip"), TEXT("Inverse mass for each vertex in the physical mesh"));
			MetaData->SetValue(NewProp_BackstopRadiuses, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_BackstopRadiuses, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BackstopRadiuses, TEXT("ToolTip"), TEXT("Radius of movement to allow for backstop movement"));
			MetaData->SetValue(NewProp_BackstopDistances, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_BackstopDistances, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BackstopDistances, TEXT("ToolTip"), TEXT("Distance along the plane of the surface that the particles can travel (separation constraint)"));
			MetaData->SetValue(NewProp_MaxDistances, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_MaxDistances, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_MaxDistances, TEXT("ToolTip"), TEXT("The distance that each vertex can move away from its reference (skinned) position"));
			MetaData->SetValue(NewProp_Indices, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_Indices, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Indices, TEXT("ToolTip"), TEXT("Indices of the simulation mesh triangles"));
			MetaData->SetValue(NewProp_Normals, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_Normals, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Normals, TEXT("ToolTip"), TEXT("Normal at each vertex"));
			MetaData->SetValue(NewProp_Vertices, TEXT("Category"), TEXT("SimMesh"));
			MetaData->SetValue(NewProp_Vertices, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Vertices, TEXT("ToolTip"), TEXT("Positions of each simulation vertex"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC() { return 407361738U; }
class UScriptStruct* FClothVertBoneData::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothVertBoneData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothVertBoneData(FClothVertBoneData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothVertBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothVertBoneData")),new UScriptStruct::TCppStructOps<FClothVertBoneData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothVertBoneData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothVertBoneData>, EStructFlags(0x00000001));
			UProperty* NewProp_BoneWeights = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneWeights"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BoneWeights, FClothVertBoneData), 0x0010000000000000);
			NewProp_BoneWeights->ArrayDim = CPP_ARRAY_DIM(BoneWeights, FClothVertBoneData);
			UProperty* NewProp_BoneIndices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(BoneIndices, FClothVertBoneData), 0x0010000000000000);
			NewProp_BoneIndices->ArrayDim = CPP_ARRAY_DIM(BoneIndices, FClothVertBoneData);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Bone data for a vertex"));
			MetaData->SetValue(NewProp_BoneWeights, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BoneWeights, TEXT("ToolTip"), TEXT("The weights for each entry in BoneIndices"));
			MetaData->SetValue(NewProp_BoneIndices, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_BoneIndices, TEXT("ToolTip"), TEXT("Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC() { return 3494495557U; }
class UScriptStruct* FClothParameterMask_PhysMesh::StaticStruct()
{
	extern CLOTHINGSYSTEMRUNTIME_API class UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh();
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothParameterMask_PhysMesh(FClothParameterMask_PhysMesh::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothParameterMask_PhysMesh"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothParameterMask_PhysMesh")),new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh;
	UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClothParameterMask_PhysMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>, EStructFlags(0x00000201));
			UProperty* NewProp_Values = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Values"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Values, FClothParameterMask_PhysMesh), 0x0010000000000000);
			UProperty* NewProp_Values_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Values, TEXT("Values"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MinValue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinValue, FClothParameterMask_PhysMesh), 0x0010000000000000);
			UProperty* NewProp_MaxValue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxValue, FClothParameterMask_PhysMesh), 0x0010000000000000);
			UProperty* NewProp_CurrentTarget = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CurrentTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentTarget, FClothParameterMask_PhysMesh), 0x0010000000000000, Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh());
			UProperty* NewProp_CurrentTarget_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentTarget, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MaskName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaskName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MaskName, FClothParameterMask_PhysMesh), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A mask is simply some storage for a physical mesh parameter painted onto clothing.\nUsed in the editor for users to paint onto and then target to a parameter, which\nis then later applied to a phys mesh"));
			MetaData->SetValue(NewProp_Values, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_Values, TEXT("ToolTip"), TEXT("The actual values stored in the mask"));
			MetaData->SetValue(NewProp_MinValue, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_MinValue, TEXT("ToolTip"), TEXT("The maximum value currently in the mask value array"));
			MetaData->SetValue(NewProp_MaxValue, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_MaxValue, TEXT("ToolTip"), TEXT("The maximum value currently in the mask value array"));
			MetaData->SetValue(NewProp_CurrentTarget, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_CurrentTarget, TEXT("ToolTip"), TEXT("The currently targeted parameter for the mask"));
			MetaData->SetValue(NewProp_MaskName, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
			MetaData->SetValue(NewProp_MaskName, TEXT("ToolTip"), TEXT("Name of the mask, mainly for users to differentiate"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC() { return 1813649441U; }
	void UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_ClothingSystemRuntime();
			OuterClass = UClothingAssetCustomData::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080081;


				static TCppClassTypeInfo<TCppClassTypeTraits<UClothingAssetCustomData> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Assets/ClothingAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Custom data wrapper for clothing assets\nIf writing a new clothing asset importer, creating a new derived custom data is how to store importer (and possibly simulation)\ndata that importer will create. This needs to be set to the CustomData member on the asset your factory creates.\nTesting whether a UClothingAsset was made from a custom plugin can be achieved with\nif(AssetPtr->CustomData->IsA(UMyCustomData::StaticClass()))"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetCustomData, 1119272155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetCustomData(Z_Construct_UClass_UClothingAssetCustomData, &UClothingAssetCustomData::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAssetCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCustomData);
	void UClothingAsset::StaticRegisterNativesUClothingAsset()
	{
	}
	UClass* Z_Construct_UClass_UClothingAsset_NoRegister()
	{
		return UClothingAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UClothingAssetBase();
			Z_Construct_UPackage__Script_ClothingSystemRuntime();
			OuterClass = UClothingAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CustomData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CustomData, UClothingAsset), 0x0010000000000000, Z_Construct_UClass_UClothingAssetCustomData_NoRegister());
				UProperty* NewProp_ReferenceBoneIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReferenceBoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReferenceBoneIndex, UClothingAsset), 0x0010000000000000);
				UProperty* NewProp_UsedBoneIndices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UsedBoneIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UsedBoneIndices, UClothingAsset), 0x0010000000000000);
				UProperty* NewProp_UsedBoneIndices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UsedBoneIndices, TEXT("UsedBoneIndices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_UsedBoneNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UsedBoneNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(UsedBoneNames, UClothingAsset), 0x0010000000000000);
				UProperty* NewProp_UsedBoneNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_UsedBoneNames, TEXT("UsedBoneNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_LodMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LodMap"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LodMap, UClothingAsset), 0x0010000000000000);
				UProperty* NewProp_LodMap_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LodMap, TEXT("LodMap"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_LodData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LodData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LodData, UClothingAsset), 0x0010000000000000);
				UProperty* NewProp_LodData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LodData, TEXT("LodData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FClothLODData());
				UProperty* NewProp_ClothConfig = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClothConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClothConfig, UClothingAsset), 0x0010000000000001, Z_Construct_UScriptStruct_FClothConfig());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UClothingAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Assets/ClothingAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_CustomData, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_CustomData, TEXT("ToolTip"), TEXT("Custom data applied by the importer depending on where the asset was imported from"));
				MetaData->SetValue(NewProp_ReferenceBoneIndex, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_ReferenceBoneIndex, TEXT("ToolTip"), TEXT("Bone to treat as the root of the simulation space"));
				MetaData->SetValue(NewProp_UsedBoneIndices, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_UsedBoneIndices, TEXT("ToolTip"), TEXT("List of the indices for the bones in UsedBoneNames, used for remapping"));
				MetaData->SetValue(NewProp_UsedBoneNames, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_UsedBoneNames, TEXT("ToolTip"), TEXT("List of bones this asset uses inside its parent mesh"));
				MetaData->SetValue(NewProp_LodMap, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_LodMap, TEXT("ToolTip"), TEXT("Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod)"));
				MetaData->SetValue(NewProp_LodData, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_LodData, TEXT("ToolTip"), TEXT("The actual asset data, listed by LOD"));
				MetaData->SetValue(NewProp_ClothConfig, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_ClothConfig, TEXT("ModuleRelativePath"), TEXT("Public/Assets/ClothingAsset.h"));
				MetaData->SetValue(NewProp_ClothConfig, TEXT("ToolTip"), TEXT("Configuration of the cloth, contains all the parameters for how the clothing behaves"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAsset, 2881910779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAsset(Z_Construct_UClass_UClothingAsset, &UClothingAsset::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAsset);
	void UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv()
	{
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UClothingSimulationFactory();
			Z_Construct_UPackage__Script_ClothingSystemRuntime();
			OuterClass = UClothingSimulationFactoryNv::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UClothingSimulationFactoryNv> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ClothingSimulationFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ClothingSimulationFactory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationFactoryNv, 2927783832);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationFactoryNv(Z_Construct_UClass_UClothingSimulationFactoryNv, &UClothingSimulationFactoryNv::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingSimulationFactoryNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactoryNv);
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ClothingSystemRuntime")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x061E4A6C;
			Guid.B = 0x86079E4E;
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
