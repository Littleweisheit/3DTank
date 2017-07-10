// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CinematicCamera.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CinematicCamera() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACameraActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterial_NoRegister();

	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACameraRig_Crane();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACameraRig_Rail();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
	CINEMATICCAMERA_API class UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_ACineCameraActor();
	CINEMATICCAMERA_API class UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
	CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API class UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView();
	CINEMATICCAMERA_API class UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API class UClass* Z_Construct_UClass_UCineCameraComponent();
	CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	void ACameraRig_Crane::StaticRegisterNativesACameraRig_Crane()
	{
	}
	UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister()
	{
		return ACameraRig_Crane::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraRig_Crane()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CinematicCamera();
			OuterClass = ACameraRig_Crane::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_PreviewMesh_CraneCounterWeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_CraneCounterWeight"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_CraneCounterWeight, ACameraRig_Crane), 0x0040000800080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_PreviewMesh_CraneMount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_CraneMount"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_CraneMount, ACameraRig_Crane), 0x0040000800080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_PreviewMesh_CraneBase = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_CraneBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_CraneBase, ACameraRig_Crane), 0x0040000800080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_PreviewMesh_CraneArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_CraneArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_CraneArm, ACameraRig_Crane), 0x0040000800080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_CraneCameraMount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CraneCameraMount"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CraneCameraMount, ACameraRig_Crane), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_CranePitchControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CranePitchControl"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CranePitchControl, ACameraRig_Crane), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_CraneYawControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CraneYawControl"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CraneYawControl, ACameraRig_Crane), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_TransformComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransformComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TransformComponent, ACameraRig_Crane), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLockMountYaw, ACameraRig_Crane, bool);
				UProperty* NewProp_bLockMountYaw = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLockMountYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLockMountYaw, ACameraRig_Crane), 0x0010000200000005, CPP_BOOL_PROPERTY_BITMASK(bLockMountYaw, ACameraRig_Crane), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLockMountPitch, ACameraRig_Crane, bool);
				UProperty* NewProp_bLockMountPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLockMountPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLockMountPitch, ACameraRig_Crane), 0x0010000200000005, CPP_BOOL_PROPERTY_BITMASK(bLockMountPitch, ACameraRig_Crane), sizeof(bool), true);
				UProperty* NewProp_CraneArmLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CraneArmLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CraneArmLength, ACameraRig_Crane), 0x0010000200000005);
				UProperty* NewProp_CraneYaw = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CraneYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CraneYaw, ACameraRig_Crane), 0x0010000200000005);
				UProperty* NewProp_CranePitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CranePitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CranePitch, ACameraRig_Crane), 0x0010000200000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraRig_Crane> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraRig_Crane.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A simple rig for simulating crane-like camera movements."));
				MetaData->SetValue(NewProp_PreviewMesh_CraneCounterWeight, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneCounterWeight, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneMount, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneMount, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneBase, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneBase, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneArm, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_PreviewMesh_CraneArm, TEXT("ToolTip"), TEXT("Preview meshes for visualization"));
				MetaData->SetValue(NewProp_CraneCameraMount, TEXT("Category"), TEXT("Crane Components"));
				MetaData->SetValue(NewProp_CraneCameraMount, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CraneCameraMount, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CraneCameraMount, TEXT("ToolTip"), TEXT("Component to define the attach point for cameras."));
				MetaData->SetValue(NewProp_CranePitchControl, TEXT("Category"), TEXT("Crane Components"));
				MetaData->SetValue(NewProp_CranePitchControl, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CranePitchControl, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CranePitchControl, TEXT("ToolTip"), TEXT("Component to control Pitch."));
				MetaData->SetValue(NewProp_CraneYawControl, TEXT("Category"), TEXT("Crane Components"));
				MetaData->SetValue(NewProp_CraneYawControl, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CraneYawControl, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CraneYawControl, TEXT("ToolTip"), TEXT("Component to control Yaw."));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("Category"), TEXT("Crane Components"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("ToolTip"), TEXT("Root component to give the whole actor a transform."));
				MetaData->SetValue(NewProp_bLockMountYaw, TEXT("Category"), TEXT("Crane Controls"));
				MetaData->SetValue(NewProp_bLockMountYaw, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_bLockMountYaw, TEXT("ToolTip"), TEXT("Lock the mount yaw so that an attached camera is locked and oriented in the direction of the crane arm"));
				MetaData->SetValue(NewProp_bLockMountPitch, TEXT("Category"), TEXT("Crane Controls"));
				MetaData->SetValue(NewProp_bLockMountPitch, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_bLockMountPitch, TEXT("ToolTip"), TEXT("Lock the mount pitch so that an attached camera is locked and pitched in the direction of the crane arm"));
				MetaData->SetValue(NewProp_CraneArmLength, TEXT("Category"), TEXT("Crane Controls"));
				MetaData->SetValue(NewProp_CraneArmLength, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_CraneArmLength, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CraneArmLength, TEXT("ToolTip"), TEXT("Controls the length of the crane arm."));
				MetaData->SetValue(NewProp_CraneArmLength, TEXT("Units"), TEXT("cm"));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("Category"), TEXT("Crane Controls"));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("ToolTip"), TEXT("Controls the yaw of the crane arm."));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("UIMax"), TEXT("360"));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("UIMin"), TEXT("-360"));
				MetaData->SetValue(NewProp_CraneYaw, TEXT("Units"), TEXT("deg"));
				MetaData->SetValue(NewProp_CranePitch, TEXT("Category"), TEXT("Crane Controls"));
				MetaData->SetValue(NewProp_CranePitch, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Crane.h"));
				MetaData->SetValue(NewProp_CranePitch, TEXT("ToolTip"), TEXT("Controls the pitch of the crane arm."));
				MetaData->SetValue(NewProp_CranePitch, TEXT("UIMax"), TEXT("360"));
				MetaData->SetValue(NewProp_CranePitch, TEXT("UIMin"), TEXT("-360"));
				MetaData->SetValue(NewProp_CranePitch, TEXT("Units"), TEXT("deg"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraRig_Crane, 2165629502);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraRig_Crane(Z_Construct_UClass_ACameraRig_Crane, &ACameraRig_Crane::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACameraRig_Crane"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Crane);
	void ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail()
	{
	}
	UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister()
	{
		return ACameraRig_Rail::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraRig_Rail()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CinematicCamera();
			OuterClass = ACameraRig_Rail::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_PreviewMesh_Mount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_Mount"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_Mount, ACameraRig_Rail), 0x0040000800080008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_PreviewRailStaticMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewRailStaticMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewRailStaticMesh, ACameraRig_Rail), 0x0040000800000000, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_PreviewRailMeshSegments = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewRailMeshSegments"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PreviewRailMeshSegments, ACameraRig_Rail), 0x0040008800000008);
				UProperty* NewProp_PreviewRailMeshSegments_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PreviewRailMeshSegments, TEXT("PreviewRailMeshSegments"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000800080008, Z_Construct_UClass_USplineMeshComponent_NoRegister());
				UProperty* NewProp_PreviewMesh_Rail = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreviewMesh_Rail"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PreviewMesh_Rail, ACameraRig_Rail), 0x0040000800080008, Z_Construct_UClass_USplineMeshComponent_NoRegister());
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_RailCameraMount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RailCameraMount"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RailCameraMount, ACameraRig_Rail), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_RailSplineComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RailSplineComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RailSplineComponent, ACameraRig_Rail), 0x0040000000090009, Z_Construct_UClass_USplineComponent_NoRegister());
				UProperty* NewProp_TransformComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransformComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TransformComponent, ACameraRig_Rail), 0x0040000000090009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_CurrentPositionOnRail = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentPositionOnRail"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentPositionOnRail, ACameraRig_Rail), 0x0010000200000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraRig_Rail> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraRig_Rail.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_PreviewMesh_Mount, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_Mount, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_PreviewRailStaticMesh, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_PreviewRailMeshSegments, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewRailMeshSegments, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_PreviewMesh_Rail, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PreviewMesh_Rail, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_PreviewMesh_Rail, TEXT("ToolTip"), TEXT("Preview meshes for visualization"));
				MetaData->SetValue(NewProp_RailCameraMount, TEXT("Category"), TEXT("Rail Components"));
				MetaData->SetValue(NewProp_RailCameraMount, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RailCameraMount, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_RailCameraMount, TEXT("ToolTip"), TEXT("Component to define the attach point for cameras. Moves along the rail."));
				MetaData->SetValue(NewProp_RailSplineComponent, TEXT("Category"), TEXT("Rail Components"));
				MetaData->SetValue(NewProp_RailSplineComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RailSplineComponent, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_RailSplineComponent, TEXT("ToolTip"), TEXT("Spline component to define the rail path."));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("Category"), TEXT("Rail Components"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_TransformComponent, TEXT("ToolTip"), TEXT("Root component to give the whole actor a transform."));
				MetaData->SetValue(NewProp_CurrentPositionOnRail, TEXT("Category"), TEXT("Rail Controls"));
				MetaData->SetValue(NewProp_CurrentPositionOnRail, TEXT("ClampMax"), TEXT("1.0"));
				MetaData->SetValue(NewProp_CurrentPositionOnRail, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_CurrentPositionOnRail, TEXT("ModuleRelativePath"), TEXT("Public/CameraRig_Rail.h"));
				MetaData->SetValue(NewProp_CurrentPositionOnRail, TEXT("ToolTip"), TEXT("Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraRig_Rail, 292978864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraRig_Rail(Z_Construct_UClass_ACameraRig_Rail, &ACameraRig_Rail::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACameraRig_Rail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Rail);
class UScriptStruct* FCameraLookatTrackingSettings::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLookatTrackingSettings(FCameraLookatTrackingSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLookatTrackingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLookatTrackingSettings")),new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLookatTrackingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLookatTrackingSettings"), sizeof(FCameraLookatTrackingSettings), Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraLookatTrackingSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_RelativeOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RelativeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RelativeOffset, FCameraLookatTrackingSettings), 0x0010000200000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ActorToTrack = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorToTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorToTrack, FCameraLookatTrackingSettings), 0x0010000200000005, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_LookAtTrackingInterpSpeed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LookAtTrackingInterpSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LookAtTrackingInterpSpeed, FCameraLookatTrackingSettings), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawDebugLookAtTrackingPosition, FCameraLookatTrackingSettings, uint8);
			UProperty* NewProp_bDrawDebugLookAtTrackingPosition = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDrawDebugLookAtTrackingPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawDebugLookAtTrackingPosition, FCameraLookatTrackingSettings), 0x0010000000002005, CPP_BOOL_PROPERTY_BITMASK(bDrawDebugLookAtTrackingPosition, FCameraLookatTrackingSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableLookAtTracking, FCameraLookatTrackingSettings, uint8);
			UProperty* NewProp_bEnableLookAtTracking = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnableLookAtTracking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableLookAtTracking, FCameraLookatTrackingSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnableLookAtTracking, FCameraLookatTrackingSettings), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Settings to control the camera's lookat feature"));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("Category"), TEXT("LookAt"));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("ToolTip"), TEXT("Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise."));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("Category"), TEXT("LookAt"));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("ToolTip"), TEXT("If set, camera will track this actor's location"));
			MetaData->SetValue(NewProp_LookAtTrackingInterpSpeed, TEXT("Category"), TEXT("LookAt"));
			MetaData->SetValue(NewProp_LookAtTrackingInterpSpeed, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(NewProp_LookAtTrackingInterpSpeed, TEXT("ToolTip"), TEXT("Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking."));
			MetaData->SetValue(NewProp_bDrawDebugLookAtTrackingPosition, TEXT("Category"), TEXT("LookAt"));
			MetaData->SetValue(NewProp_bDrawDebugLookAtTrackingPosition, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(NewProp_bDrawDebugLookAtTrackingPosition, TEXT("ToolTip"), TEXT("True to draw a debug representation of the lookat location"));
			MetaData->SetValue(NewProp_bEnableLookAtTracking, TEXT("Category"), TEXT("LookAt"));
			MetaData->SetValue(NewProp_bEnableLookAtTracking, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(NewProp_bEnableLookAtTracking, TEXT("ToolTip"), TEXT("Interp,"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC() { return 3026083371U; }
	void ACineCameraActor::StaticRegisterNativesACineCameraActor()
	{
		UClass* Class = ACineCameraActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCineCameraComponent", (Native)&ACineCameraActor::execGetCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent()
	{
		struct CineCameraActor_eventGetCineCameraComponent_Parms
		{
			UCineCameraComponent* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACineCameraActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCineCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CineCameraActor_eventGetCineCameraComponent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CineCameraActor_eventGetCineCameraComponent_Parms), 0x0010000000080588, Z_Construct_UClass_UCineCameraComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the CineCameraComponent of this CineCamera"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACineCameraActor_NoRegister()
	{
		return ACineCameraActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACineCameraActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACameraActor();
			Z_Construct_UPackage__Script_CinematicCamera();
			OuterClass = ACineCameraActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LookatTrackingSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LookatTrackingSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LookatTrackingSettings, ACineCameraActor), 0x0010000000000005, Z_Construct_UScriptStruct_FCameraLookatTrackingSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent(), "GetCineCameraComponent"); // 4179282127
				static TCppClassTypeInfo<TCppClassTypeTraits<ACineCameraActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Common"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Rendering AutoPlayerActivation Input Rendering"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CineCameraActor.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A CineCameraActor is a CameraActor specialized to work like a cinematic camera."));
				MetaData->SetValue(NewProp_LookatTrackingSettings, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_LookatTrackingSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACineCameraActor, 2571629756);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACineCameraActor(Z_Construct_UClass_ACineCameraActor, &ACineCameraActor::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACineCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraActor);
static UEnum* ECameraFocusMethod_StaticEnum()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
		Singleton = GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("ECameraFocusMethod"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraFocusMethod(ECameraFocusMethod_StaticEnum, TEXT("/Script/CinematicCamera"), TEXT("ECameraFocusMethod"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraFocusMethod"), 0, Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ECameraFocusMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ECameraFocusMethod::None"), 0);
			EnumNames.Emplace(TEXT("ECameraFocusMethod::Manual"), 1);
			EnumNames.Emplace(TEXT("ECameraFocusMethod::Tracking"), 2);
			EnumNames.Emplace(TEXT("ECameraFocusMethod::ECameraFocusMethod_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ECameraFocusMethod");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Manual.ToolTip"), TEXT("Disables DoF entirely."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Supported methods for focusing the camera."));
			MetaData->SetValue(ReturnEnum, TEXT("Tracking.ToolTip"), TEXT("Allows for specifying or animating exact focus distances."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_CRC() { return 3410089044U; }
class UScriptStruct* FCameraFocusSettings::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFocusSettings(FCameraFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFocusSettings")),new UScriptStruct::TCppStructOps<FCameraFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFocusSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFocusSettings"), sizeof(FCameraFocusSettings), Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraFocusSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCameraFocusSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_FocusOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FocusOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FocusOffset, FCameraFocusSettings), 0x0010000200000005);
			UProperty* NewProp_FocusSmoothingInterpSpeed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FocusSmoothingInterpSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FocusSmoothingInterpSpeed, FCameraFocusSettings), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSmoothFocusChanges, FCameraFocusSettings, uint8);
			UProperty* NewProp_bSmoothFocusChanges = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSmoothFocusChanges"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSmoothFocusChanges, FCameraFocusSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bSmoothFocusChanges, FCameraFocusSettings), sizeof(uint8), false);
			UProperty* NewProp_DebugFocusPlaneColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DebugFocusPlaneColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DebugFocusPlaneColor, FCameraFocusSettings), 0x0010000000000001, Z_Construct_UScriptStruct_FColor());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawDebugFocusPlane, FCameraFocusSettings, uint8);
			UProperty* NewProp_bDrawDebugFocusPlane = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDrawDebugFocusPlane"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawDebugFocusPlane, FCameraFocusSettings), 0x0010000000002001, CPP_BOOL_PROPERTY_BITMASK(bDrawDebugFocusPlane, FCameraFocusSettings), sizeof(uint8), false);
			UProperty* NewProp_TrackingFocusSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TrackingFocusSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TrackingFocusSettings, FCameraFocusSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings());
			UProperty* NewProp_ManualFocusDistance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ManualFocusDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ManualFocusDistance, FCameraFocusSettings), 0x0010000200000005);
			UProperty* NewProp_FocusMethod = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FocusMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FocusMethod, FCameraFocusSettings), 0x0010000000000005, Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod());
			UProperty* NewProp_FocusMethod_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FocusMethod, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Settings to control camera focus"));
			MetaData->SetValue(NewProp_FocusOffset, TEXT("Category"), TEXT("Focus Settings"));
			MetaData->SetValue(NewProp_FocusOffset, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_FocusOffset, TEXT("ToolTip"), TEXT("Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment"));
			MetaData->SetValue(NewProp_FocusSmoothingInterpSpeed, TEXT("Category"), TEXT("Focus Settings"));
			MetaData->SetValue(NewProp_FocusSmoothingInterpSpeed, TEXT("EditCondition"), TEXT("bSmoothFocusChanges"));
			MetaData->SetValue(NewProp_FocusSmoothingInterpSpeed, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_FocusSmoothingInterpSpeed, TEXT("ToolTip"), TEXT("Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false."));
			MetaData->SetValue(NewProp_bSmoothFocusChanges, TEXT("Category"), TEXT("Focus Settings"));
			MetaData->SetValue(NewProp_bSmoothFocusChanges, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_bSmoothFocusChanges, TEXT("ToolTip"), TEXT("True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous."));
			MetaData->SetValue(NewProp_DebugFocusPlaneColor, TEXT("Category"), TEXT("Focus Settings"));
			MetaData->SetValue(NewProp_DebugFocusPlaneColor, TEXT("EditCondition"), TEXT("bDrawDebugFocusPlane"));
			MetaData->SetValue(NewProp_DebugFocusPlaneColor, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_DebugFocusPlaneColor, TEXT("ToolTip"), TEXT("For customizing the focus plane color, in case the default doesn't show up well in your scene."));
			MetaData->SetValue(NewProp_bDrawDebugFocusPlane, TEXT("Category"), TEXT("Focus Settings"));
			MetaData->SetValue(NewProp_bDrawDebugFocusPlane, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_bDrawDebugFocusPlane, TEXT("ToolTip"), TEXT("True to draw a translucent plane at the current focus depth, for easy tweaking."));
			MetaData->SetValue(NewProp_TrackingFocusSettings, TEXT("Category"), TEXT("Tracking Focus Settings"));
			MetaData->SetValue(NewProp_TrackingFocusSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_TrackingFocusSettings, TEXT("ToolTip"), TEXT("Settings to control tracking focus (tracking focus mode only)"));
			MetaData->SetValue(NewProp_ManualFocusDistance, TEXT("Category"), TEXT("Manual Focus Settings"));
			MetaData->SetValue(NewProp_ManualFocusDistance, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_ManualFocusDistance, TEXT("ToolTip"), TEXT("Manually-controlled focus distance (manual focus mode only)"));
			MetaData->SetValue(NewProp_ManualFocusDistance, TEXT("Units"), TEXT("cm"));
			MetaData->SetValue(NewProp_FocusMethod, TEXT("Category"), TEXT("Focus Method"));
			MetaData->SetValue(NewProp_FocusMethod, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_FocusMethod, TEXT("ToolTip"), TEXT("Which method to use to handle camera focus"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC() { return 3447776859U; }
class UScriptStruct* FCameraTrackingFocusSettings::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraTrackingFocusSettings(FCameraTrackingFocusSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraTrackingFocusSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraTrackingFocusSettings")),new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraTrackingFocusSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraTrackingFocusSettings"), sizeof(FCameraTrackingFocusSettings), Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraTrackingFocusSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawDebugTrackingFocusPoint, FCameraTrackingFocusSettings, uint8);
			UProperty* NewProp_bDrawDebugTrackingFocusPoint = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDrawDebugTrackingFocusPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawDebugTrackingFocusPoint, FCameraTrackingFocusSettings), 0x0010000000002005, CPP_BOOL_PROPERTY_BITMASK(bDrawDebugTrackingFocusPoint, FCameraTrackingFocusSettings), sizeof(uint8), false);
			UProperty* NewProp_RelativeOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RelativeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RelativeOffset, FCameraTrackingFocusSettings), 0x0010000200000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ActorToTrack = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorToTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorToTrack, FCameraTrackingFocusSettings), 0x0010000200000005, Z_Construct_UClass_AActor_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Settings to control tracking-focus mode."));
			MetaData->SetValue(NewProp_bDrawDebugTrackingFocusPoint, TEXT("Category"), TEXT("Tracking Focus"));
			MetaData->SetValue(NewProp_bDrawDebugTrackingFocusPoint, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_bDrawDebugTrackingFocusPoint, TEXT("ToolTip"), TEXT("True to draw a debug representation of the tracked position."));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("Category"), TEXT("Tracking Focus"));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_RelativeOffset, TEXT("ToolTip"), TEXT("Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise."));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("Category"), TEXT("Tracking Focus"));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_ActorToTrack, TEXT("ToolTip"), TEXT("Focus distance will be tied to this actor's location."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC() { return 2721135239U; }
class UScriptStruct* FNamedLensPreset::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedLensPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedLensPreset(FNamedLensPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedLensPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedLensPreset")),new UScriptStruct::TCppStructOps<FNamedLensPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedLensPreset;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedLensPreset"), sizeof(FNamedLensPreset), Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NamedLensPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNamedLensPreset>, EStructFlags(0x00000001));
			UProperty* NewProp_LensSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LensSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LensSettings, FNamedLensPreset), 0x0010000000000000, Z_Construct_UScriptStruct_FCameraLensSettings());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FNamedLensPreset), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A named bundle of lens settings used to implement lens presets."));
			MetaData->SetValue(NewProp_LensSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Name for the preset."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC() { return 2636247980U; }
class UScriptStruct* FCameraLensSettings::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraLensSettings(FCameraLensSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraLensSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraLensSettings")),new UScriptStruct::TCppStructOps<FCameraLensSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraLensSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraLensSettings"), sizeof(FCameraLensSettings), Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraLensSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCameraLensSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_MinimumFocusDistance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinimumFocusDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinimumFocusDistance, FCameraLensSettings), 0x0010000000000005);
			UProperty* NewProp_MaxFStop = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxFStop"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxFStop, FCameraLensSettings), 0x0010000000000005);
			UProperty* NewProp_MinFStop = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinFStop"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinFStop, FCameraLensSettings), 0x0010000000000005);
			UProperty* NewProp_MaxFocalLength = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxFocalLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxFocalLength, FCameraLensSettings), 0x0010000000000005);
			UProperty* NewProp_MinFocalLength = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinFocalLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinFocalLength, FCameraLensSettings), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h"));
			MetaData->SetValue(NewProp_MinimumFocusDistance, TEXT("Category"), TEXT("Lens"));
			MetaData->SetValue(NewProp_MinimumFocusDistance, TEXT("ForceUnits"), TEXT("mm"));
			MetaData->SetValue(NewProp_MinimumFocusDistance, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_MinimumFocusDistance, TEXT("ToolTip"), TEXT("Shortest distance this lens can focus on."));
			MetaData->SetValue(NewProp_MaxFStop, TEXT("Category"), TEXT("Lens"));
			MetaData->SetValue(NewProp_MaxFStop, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_MaxFStop, TEXT("ToolTip"), TEXT("Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)"));
			MetaData->SetValue(NewProp_MinFStop, TEXT("Category"), TEXT("Lens"));
			MetaData->SetValue(NewProp_MinFStop, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_MinFStop, TEXT("ToolTip"), TEXT("Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)"));
			MetaData->SetValue(NewProp_MaxFocalLength, TEXT("Category"), TEXT("Lens"));
			MetaData->SetValue(NewProp_MaxFocalLength, TEXT("ForceUnits"), TEXT("mm"));
			MetaData->SetValue(NewProp_MaxFocalLength, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_MaxFocalLength, TEXT("ToolTip"), TEXT("Maximum focal length for this lens"));
			MetaData->SetValue(NewProp_MinFocalLength, TEXT("Category"), TEXT("Lens"));
			MetaData->SetValue(NewProp_MinFocalLength, TEXT("ForceUnits"), TEXT("mm"));
			MetaData->SetValue(NewProp_MinFocalLength, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_MinFocalLength, TEXT("ToolTip"), TEXT("Minimum focal length for this lens"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraLensSettings_CRC() { return 726627724U; }
class UScriptStruct* FNamedFilmbackPreset::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFilmbackPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedFilmbackPreset(FNamedFilmbackPreset::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("NamedFilmbackPreset"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedFilmbackPreset")),new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFNamedFilmbackPreset;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedFilmbackPreset"), sizeof(FNamedFilmbackPreset), Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NamedFilmbackPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>, EStructFlags(0x00000001));
			UProperty* NewProp_FilmbackSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FilmbackSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FilmbackSettings, FNamedFilmbackPreset), 0x0010000000000000, Z_Construct_UScriptStruct_FCameraFilmbackSettings());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FNamedFilmbackPreset), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A named bundle of filmback settings used to implement filmback presets"));
			MetaData->SetValue(NewProp_FilmbackSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Name for the preset."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC() { return 2413016149U; }
class UScriptStruct* FCameraFilmbackSettings::StaticStruct()
{
	extern CINEMATICCAMERA_API class UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
		extern CINEMATICCAMERA_API uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFilmbackSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraFilmbackSettings(FCameraFilmbackSettings::StaticStruct, TEXT("/Script/CinematicCamera"), TEXT("CameraFilmbackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings
{
	FScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraFilmbackSettings")),new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>);
	}
} ScriptStruct_CinematicCamera_StaticRegisterNativesFCameraFilmbackSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CinematicCamera();
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraFilmbackSettings"), sizeof(FCameraFilmbackSettings), Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraFilmbackSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>, EStructFlags(0x00000001));
			UProperty* NewProp_SensorAspectRatio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SensorAspectRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SensorAspectRatio, FCameraFilmbackSettings), 0x0010000000020015);
			UProperty* NewProp_SensorHeight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SensorHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SensorHeight, FCameraFilmbackSettings), 0x0010000000000005);
			UProperty* NewProp_SensorWidth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SensorWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SensorWidth, FCameraFilmbackSettings), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("#note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h"));
			MetaData->SetValue(NewProp_SensorAspectRatio, TEXT("Category"), TEXT("Filmback"));
			MetaData->SetValue(NewProp_SensorAspectRatio, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_SensorAspectRatio, TEXT("ToolTip"), TEXT("Read-only. Computed from Sensor dimensions."));
			MetaData->SetValue(NewProp_SensorHeight, TEXT("Category"), TEXT("Filmback"));
			MetaData->SetValue(NewProp_SensorHeight, TEXT("ClampMin"), TEXT("0.001"));
			MetaData->SetValue(NewProp_SensorHeight, TEXT("ForceUnits"), TEXT("mm"));
			MetaData->SetValue(NewProp_SensorHeight, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_SensorHeight, TEXT("ToolTip"), TEXT("Vertical size of filmback or digital sensor, in mm."));
			MetaData->SetValue(NewProp_SensorWidth, TEXT("Category"), TEXT("Filmback"));
			MetaData->SetValue(NewProp_SensorWidth, TEXT("ClampMin"), TEXT("0.001"));
			MetaData->SetValue(NewProp_SensorWidth, TEXT("ForceUnits"), TEXT("mm"));
			MetaData->SetValue(NewProp_SensorWidth, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(NewProp_SensorWidth, TEXT("ToolTip"), TEXT("Horizontal size of filmback or digital sensor, in mm."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC() { return 2974008920U; }
	void UCineCameraComponent::StaticRegisterNativesUCineCameraComponent()
	{
		UClass* Class = UCineCameraComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetHorizontalFieldOfView", (Native)&UCineCameraComponent::execGetHorizontalFieldOfView },
			{ "GetVerticalFieldOfView", (Native)&UCineCameraComponent::execGetVerticalFieldOfView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView()
	{
		struct CineCameraComponent_eventGetHorizontalFieldOfView_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCineCameraComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHorizontalFieldOfView"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CineCameraComponent_eventGetHorizontalFieldOfView_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, CineCameraComponent_eventGetHorizontalFieldOfView_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Cine Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the horizonal FOV of the camera with current settings."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView()
	{
		struct CineCameraComponent_eventGetVerticalFieldOfView_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCineCameraComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVerticalFieldOfView"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CineCameraComponent_eventGetVerticalFieldOfView_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, CineCameraComponent_eventGetVerticalFieldOfView_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Cine Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the vertical FOV of the camera with current settings."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister()
	{
		return UCineCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCineCameraComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCameraComponent();
			Z_Construct_UPackage__Script_CinematicCamera();
			OuterClass = UCineCameraComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;

				OuterClass->LinkChild(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView());
				OuterClass->LinkChild(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DefaultLensFStop = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultLensFStop"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultLensFStop, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_DefaultLensFocalLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultLensFocalLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultLensFocalLength, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_DefaultLensPresetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultLensPresetName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DefaultLensPresetName, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_DefaultFilmbackPresetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultFilmbackPresetName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DefaultFilmbackPresetName, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_LensPresets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LensPresets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LensPresets, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_LensPresets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LensPresets, TEXT("LensPresets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FNamedLensPreset());
				UProperty* NewProp_FilmbackPresets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FilmbackPresets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(FilmbackPresets, UCineCameraComponent), 0x0020080000004000);
				UProperty* NewProp_FilmbackPresets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_FilmbackPresets, TEXT("FilmbackPresets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FNamedFilmbackPreset());
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_DebugFocusPlaneMID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugFocusPlaneMID"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugFocusPlaneMID, UCineCameraComponent), 0x0020080800002000, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_DebugFocusPlaneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugFocusPlaneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugFocusPlaneComponent, UCineCameraComponent), 0x0020080800082008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_DebugFocusPlaneMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugFocusPlaneMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugFocusPlaneMaterial, UCineCameraComponent), 0x0020080800002000, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_DebugFocusPlaneMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugFocusPlaneMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugFocusPlaneMesh, UCineCameraComponent), 0x0020080800002000, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_CurrentHorizontalFOV = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentHorizontalFOV"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentHorizontalFOV, UCineCameraComponent), 0x0010000800020001);
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_CurrentFocusDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentFocusDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentFocusDistance, UCineCameraComponent), 0x0010000000020015);
				UProperty* NewProp_CurrentAperture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAperture"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAperture, UCineCameraComponent), 0x0010000200000005);
				UProperty* NewProp_CurrentFocalLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentFocalLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentFocalLength, UCineCameraComponent), 0x0010000200000005);
				UProperty* NewProp_FocusSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FocusSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FocusSettings, UCineCameraComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FCameraFocusSettings());
				UProperty* NewProp_LensSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LensSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LensSettings, UCineCameraComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FCameraLensSettings());
				UProperty* NewProp_FilmbackSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FilmbackSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FilmbackSettings, UCineCameraComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FCameraFilmbackSettings());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView(), "GetHorizontalFieldOfView"); // 3238303387
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView(), "GetVerticalFieldOfView"); // 2924084955
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCineCameraComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Camera"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("CameraSettings Mobility Rendering LOD Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("HideFunctions"), TEXT("SetFieldOfView SetAspectRatio SetConstraintAspectRatio"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CineCameraComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A specialized version of a camera component, geared toward cinematic usage."));
				MetaData->SetValue(NewProp_DefaultLensFStop, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DefaultLensFStop, TEXT("ToolTip"), TEXT("Default aperture (will be constrained by default lens)"));
				MetaData->SetValue(NewProp_DefaultLensFocalLength, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DefaultLensFocalLength, TEXT("ToolTip"), TEXT("Default focal length (will be constrained by default lens)"));
				MetaData->SetValue(NewProp_DefaultLensPresetName, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DefaultLensPresetName, TEXT("ToolTip"), TEXT("Name of the default lens preset"));
				MetaData->SetValue(NewProp_DefaultFilmbackPresetName, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DefaultFilmbackPresetName, TEXT("ToolTip"), TEXT("Name of the default filmback preset"));
				MetaData->SetValue(NewProp_LensPresets, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_LensPresets, TEXT("ToolTip"), TEXT("List of available lens presets"));
				MetaData->SetValue(NewProp_FilmbackPresets, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_FilmbackPresets, TEXT("ToolTip"), TEXT("List of available filmback presets"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMID, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMID, TEXT("ToolTip"), TEXT("Dynamic material instance for the debug focus plane visualization"));
				MetaData->SetValue(NewProp_DebugFocusPlaneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DebugFocusPlaneComponent, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DebugFocusPlaneComponent, TEXT("ToolTip"), TEXT("Component for the debug focus plane visualization"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMaterial, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMaterial, TEXT("ToolTip"), TEXT("Material used for debug focus plane visualization"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMesh, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_DebugFocusPlaneMesh, TEXT("ToolTip"), TEXT("Mesh used for debug focus plane visualization"));
				MetaData->SetValue(NewProp_CurrentHorizontalFOV, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_CurrentHorizontalFOV, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_CurrentHorizontalFOV, TEXT("ToolTip"), TEXT("Read-only. Control this value with CurrentFocalLength (and filmback settings)."));
				MetaData->SetValue(NewProp_CurrentFocusDistance, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_CurrentFocusDistance, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_CurrentFocusDistance, TEXT("ToolTip"), TEXT("Read-only. Control this value via FocusSettings."));
				MetaData->SetValue(NewProp_CurrentAperture, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_CurrentAperture, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_CurrentAperture, TEXT("ToolTip"), TEXT("Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)"));
				MetaData->SetValue(NewProp_CurrentFocalLength, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_CurrentFocalLength, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_CurrentFocalLength, TEXT("ToolTip"), TEXT("Current focal length of the camera (i.e. controls FoV, zoom)"));
				MetaData->SetValue(NewProp_FocusSettings, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_FocusSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_FocusSettings, TEXT("ToolTip"), TEXT("Controls the camera's focus."));
				MetaData->SetValue(NewProp_LensSettings, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_LensSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_LensSettings, TEXT("ToolTip"), TEXT("Controls the camera's lens."));
				MetaData->SetValue(NewProp_FilmbackSettings, TEXT("Category"), TEXT("Current Camera Settings"));
				MetaData->SetValue(NewProp_FilmbackSettings, TEXT("ModuleRelativePath"), TEXT("Public/CineCameraComponent.h"));
				MetaData->SetValue(NewProp_FilmbackSettings, TEXT("ToolTip"), TEXT("Controls the filmback of the camera."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCineCameraComponent, 1823870392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCineCameraComponent(Z_Construct_UClass_UCineCameraComponent, &UCineCameraComponent::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("UCineCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraComponent);
	UPackage* Z_Construct_UPackage__Script_CinematicCamera()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/CinematicCamera")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x4B984F73;
			Guid.B = 0x26E6A3F5;
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
