// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HeadMountedDisplay.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1HeadMountedDisplay() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent();
	INPUTCORE_API class UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	HEADMOUNTEDDISPLAY_API class UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
	HEADMOUNTEDDISPLAY_API class UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UVRNotificationsComponent();
	HEADMOUNTEDDISPLAY_API class UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
static UEnum* ETrackingStatus_StaticEnum()
{
	extern HEADMOUNTEDDISPLAY_API class UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API class UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
		Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ETrackingStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingStatus(ETrackingStatus_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("ETrackingStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_HeadMountedDisplay();
		extern uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingStatus"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETrackingStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETrackingStatus::NotTracked"), 0);
			EnumNames.Emplace(TEXT("ETrackingStatus::InertialOnly"), 1);
			EnumNames.Emplace(TEXT("ETrackingStatus::Tracked"), 2);
			EnumNames.Emplace(TEXT("ETrackingStatus::ETrackingStatus_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETrackingStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/IMotionController.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_CRC() { return 370267241U; }
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsTracked", (Native)&UMotionControllerComponent::execIsTracked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		struct MotionControllerComponent_eventIsTracked_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionControllerComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsTracked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(MotionControllerComponent_eventIsTracked_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionControllerComponent_eventIsTracked_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionControllerComponent_eventIsTracked_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionControllerComponent_eventIsTracked_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("MotionController"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Whether or not this component had a valid tracked device this frame"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage__Script_HeadMountedDisplay();
			OuterClass = UMotionControllerComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMotionControllerComponent_IsTracked());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentTrackingStatus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentTrackingStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentTrackingStatus, UMotionControllerComponent), 0x0010000000000014, Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus());
				UProperty* NewProp_CurrentTrackingStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentTrackingStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisableLowLatencyUpdate, UMotionControllerComponent, uint8);
				UProperty* NewProp_bDisableLowLatencyUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDisableLowLatencyUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisableLowLatencyUpdate, UMotionControllerComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDisableLowLatencyUpdate, UMotionControllerComponent), sizeof(uint8), false);
				UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hand, UMotionControllerComponent), 0x0010000000000005, Z_Construct_UEnum_InputCore_EControllerHand());
				UProperty* NewProp_Hand_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hand, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, UMotionControllerComponent), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionControllerComponent_IsTracked(), "IsTracked"); // 858284947
				static TCppClassTypeInfo<TCppClassTypeTraits<UMotionControllerComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("MotionController"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MotionControllerComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
				MetaData->SetValue(NewProp_CurrentTrackingStatus, TEXT("Category"), TEXT("MotionController"));
				MetaData->SetValue(NewProp_CurrentTrackingStatus, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
				MetaData->SetValue(NewProp_CurrentTrackingStatus, TEXT("ToolTip"), TEXT("The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)"));
				MetaData->SetValue(NewProp_bDisableLowLatencyUpdate, TEXT("Category"), TEXT("MotionController"));
				MetaData->SetValue(NewProp_bDisableLowLatencyUpdate, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
				MetaData->SetValue(NewProp_bDisableLowLatencyUpdate, TEXT("ToolTip"), TEXT("If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering."));
				MetaData->SetValue(NewProp_Hand, TEXT("Category"), TEXT("MotionController"));
				MetaData->SetValue(NewProp_Hand, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
				MetaData->SetValue(NewProp_Hand, TEXT("ToolTip"), TEXT("Which hand this component should automatically follow"));
				MetaData->SetValue(NewProp_PlayerIndex, TEXT("Category"), TEXT("MotionController"));
				MetaData->SetValue(NewProp_PlayerIndex, TEXT("ModuleRelativePath"), TEXT("Public/MotionControllerComponent.h"));
				MetaData->SetValue(NewProp_PlayerIndex, TEXT("ToolTip"), TEXT("Which player index this motion controller should automatically follow"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionControllerComponent, 1954989469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionControllerComponent(Z_Construct_UClass_UMotionControllerComponent, &UMotionControllerComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
	void UMotionTrackedDeviceFunctionLibrary::StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary()
	{
		UClass* Class = UMotionTrackedDeviceFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "DisableMotionTrackingForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingForComponent },
			{ "DisableMotionTrackingOfAllControllers", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfAllControllers },
			{ "DisableMotionTrackingOfControllersForPlayer", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfControllersForPlayer },
			{ "DisableMotionTrackingOfDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfDevice },
			{ "EnableMotionTrackingForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingForComponent },
			{ "EnableMotionTrackingOfDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfDevice },
			{ "GetMaximumMotionTrackedControllerCount", (Native)&UMotionTrackedDeviceFunctionLibrary::execGetMaximumMotionTrackedControllerCount },
			{ "GetMotionTrackingEnabledControllerCount", (Native)&UMotionTrackedDeviceFunctionLibrary::execGetMotionTrackingEnabledControllerCount },
			{ "IsMotionTrackedDeviceCountManagementNecessary", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackedDeviceCountManagementNecessary },
			{ "IsMotionTrackingEnabledForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForComponent },
			{ "IsMotionTrackingEnabledForDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForDevice },
			{ "SetIsControllerMotionTrackingEnabledByDefault", (Native)&UMotionTrackedDeviceFunctionLibrary::execSetIsControllerMotionTrackingEnabledByDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 12);
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableMotionTrackingForComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms));
			UProperty* NewProp_MotionControllerComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionControllerComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionControllerComponent, MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms), 0x0010000000080082, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Disable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted."));
			MetaData->SetValue(NewProp_MotionControllerComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_MotionControllerComponent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers()
	{
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableMotionTrackingOfAllControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Disable tracking for all controllers."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms
		{
			int32 PlayerIndex;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableMotionTrackingOfControllersForPlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms));
			UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Disable tracking for all controllers associated with the specified player.\n\n@param PlayerIndex                                    (in) The index of the player."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableMotionTrackingOfDevice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms));
			UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hand, MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms), 0x0010000000000080, Z_Construct_UEnum_InputCore_EControllerHand());
			UProperty* NewProp_Hand_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hand, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Disable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms
		{
			UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnableMotionTrackingForComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), sizeof(bool), true);
			UProperty* NewProp_MotionControllerComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionControllerComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionControllerComponent, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), 0x0010000000080080, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input."));
			MetaData->SetValue(NewProp_MotionControllerComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnableMotionTrackingOfDevice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), sizeof(bool), true);
			UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hand, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), 0x0010000000000080, Z_Construct_UEnum_InputCore_EControllerHand());
			UProperty* NewProp_Hand_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hand, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The device type.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMaximumMotionTrackedControllerCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the maximum number of controllers that can be tracked.\n\n@return (int) number of controllers that can be tracked, or -1 if there is no limit (IsMotionTrackedDeviceCountManagementNecessary() should return false)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMotionTrackingEnabledControllerCount"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the number of controllers for which tracking is enabled.\n\n@return (int) number of controllers tracked now, or -1 if this query is unsupported (IsMotionTrackedDeviceCountManagementNecessary() should return false)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMotionTrackedDeviceCountManagementNecessary"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if it is necessary for the game to manage how many motion tracked devices it is asking to be tracked simultaneously.\nOn some platforms this is unnecessary because all supported devices can be tracked simultaneously.\n\n@return (Boolean) true if the game might need to manage which motion tracked devices are actively tracked."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMotionTrackingEnabledForComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), sizeof(bool), true);
			UProperty* NewProp_MotionControllerComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionControllerComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionControllerComponent, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), 0x0010000000080082, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if tracking is enabled for the specified device.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is set to be tracked."));
			MetaData->SetValue(NewProp_MotionControllerComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_MotionControllerComponent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMotionTrackingEnabledForDevice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), sizeof(bool), true);
			UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hand, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), 0x0010000000000080, Z_Construct_UEnum_InputCore_EControllerHand());
			UProperty* NewProp_Hand_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hand, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_PlayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PlayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerIndex, MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if tracking is enabled for the specified device.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type.\n\n@return (Boolean) true if the specified device is set to be tracked."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms
		{
			bool Enable;
		};
		UObject* Outer=Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIsControllerMotionTrackingEnabledByDefault"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Enable, MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms, bool);
			UProperty* NewProp_Enable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Enable, MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Enable, MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input|MotionTracking"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set whether motion tracked controllers activate on creation by default, or do not and must be explicitly activated.\n\n@param Require                                        (in) True means controllers are enabled by default.  Enables beyond the controller count limit will fail."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister()
	{
		return UMotionTrackedDeviceFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_HeadMountedDisplay();
			OuterClass = UMotionTrackedDeviceFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice());
				OuterClass->LinkChild(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent(), "DisableMotionTrackingForComponent"); // 1081151781
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers(), "DisableMotionTrackingOfAllControllers"); // 2927928439
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer(), "DisableMotionTrackingOfControllersForPlayer"); // 3883442618
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice(), "DisableMotionTrackingOfDevice"); // 3453239560
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent(), "EnableMotionTrackingForComponent"); // 4217208447
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice(), "EnableMotionTrackingOfDevice"); // 1233752681
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount(), "GetMaximumMotionTrackedControllerCount"); // 2699574119
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount(), "GetMotionTrackingEnabledControllerCount"); // 3276970081
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary(), "IsMotionTrackedDeviceCountManagementNecessary"); // 768156381
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent(), "IsMotionTrackingEnabledForComponent"); // 3564885896
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice(), "IsMotionTrackingEnabledForDevice"); // 4227831684
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault(), "SetIsControllerMotionTrackingEnabledByDefault"); // 500749491
				static TCppClassTypeInfo<TCppClassTypeTraits<UMotionTrackedDeviceFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MotionTrackedDeviceFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MotionTrackedDeviceFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionTrackedDeviceFunctionLibrary, 1984757474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionTrackedDeviceFunctionLibrary(Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, &UMotionTrackedDeviceFunctionLibrary::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionTrackedDeviceFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrackedDeviceFunctionLibrary);
	UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UClass_UVRNotificationsComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VRNotificationsDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UVRNotificationsComponent::StaticRegisterNativesUVRNotificationsComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister()
	{
		return UVRNotificationsComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRNotificationsComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_HeadMountedDisplay();
			OuterClass = UVRNotificationsComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_HMDRemovedFromHeadDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDRemovedFromHeadDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDRemovedFromHeadDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDPutOnHeadDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDPutOnHeadDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDPutOnHeadDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDConnectCanceledDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDConnectCanceledDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDConnectCanceledDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDReconnectedDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDReconnectedDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDReconnectedDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDLostDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDLostDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDLostDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDRecenteredDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDRecenteredDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDRecenteredDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDTrackingInitializedDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDTrackingInitializedDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDTrackingInitializedDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
				UProperty* NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate, UVRNotificationsComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature(), "VRNotificationsDelegate__DelegateSignature"); // 826297385
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRNotificationsComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("HeadMountedDisplay"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRNotificationsComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDRemovedFromHeadDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDRemovedFromHeadDelegate, TEXT("ToolTip"), TEXT("This will be called when the HMD detects that it has been taken off by a player (disconnecting the hmd also causes it to register as taken off)."));
				MetaData->SetValue(NewProp_HMDPutOnHeadDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDPutOnHeadDelegate, TEXT("ToolTip"), TEXT("This will be called when the HMD detects that it has been put on by a player."));
				MetaData->SetValue(NewProp_HMDConnectCanceledDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDConnectCanceledDelegate, TEXT("ToolTip"), TEXT("This will be called when the user declines to connect the HMD when prompted to do so by a system dialog. (PS4 Only)"));
				MetaData->SetValue(NewProp_HMDReconnectedDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDReconnectedDelegate, TEXT("ToolTip"), TEXT("This will be called when connection to HMD is restored."));
				MetaData->SetValue(NewProp_HMDLostDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDLostDelegate, TEXT("ToolTip"), TEXT("This will be called when connection to HMD is lost."));
				MetaData->SetValue(NewProp_HMDRecenteredDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDRecenteredDelegate, TEXT("ToolTip"), TEXT("This will be called when the application is asked for VR headset recenter."));
				MetaData->SetValue(NewProp_HMDTrackingInitializedDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDTrackingInitializedDelegate, TEXT("ToolTip"), TEXT("This will be called on Morpheus when the HMD is done initializing and therefore\nreprojection will start functioning.\nThe app can continue now. (PS4 Only)"));
				MetaData->SetValue(NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate, TEXT("ModuleRelativePath"), TEXT("Public/VRNotificationsComponent.h"));
				MetaData->SetValue(NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate, TEXT("ToolTip"), TEXT("This will be called on Morpheus if the HMD starts up and is not fully initialized (in NOT_STARTED or CALIBRATING states).\nThe HMD will stay in NOT_STARTED until it is successfully position tracked.  Until it exits NOT_STARTED orientation\nbased reprojection does not happen.  Therefore we do not update rotation at all to avoid user discomfort.\nInstructions to get the hmd tracked should be shown to the user.\nSony may fix this eventually. (PS4 Only)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRNotificationsComponent, 4135008003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRNotificationsComponent(Z_Construct_UClass_UVRNotificationsComponent, &UVRNotificationsComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UVRNotificationsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRNotificationsComponent);
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/HeadMountedDisplay")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xEDB0BE6F;
			Guid.B = 0xED4C606A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
