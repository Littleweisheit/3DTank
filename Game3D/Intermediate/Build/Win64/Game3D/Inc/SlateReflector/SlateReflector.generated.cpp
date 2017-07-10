// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SlateReflector.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SlateReflector() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	SLATEREFLECTOR_API class UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
	SLATEREFLECTOR_API class UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
	SLATEREFLECTOR_API class UPackage* Z_Construct_UPackage__Script_SlateReflector();
class UScriptStruct* FWidgetSnapshotResponse::StaticStruct()
{
	extern SLATEREFLECTOR_API class UPackage* Z_Construct_UPackage__Script_SlateReflector();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API class UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotResponse(FWidgetSnapshotResponse::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotResponse")),new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WidgetSnapshotResponse"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>, EStructFlags(0x00000001));
			UProperty* NewProp_SnapshotData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SnapshotData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SnapshotData, FWidgetSnapshotResponse), 0x0010000000000001);
			UProperty* NewProp_SnapshotData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SnapshotData, TEXT("SnapshotData"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_SnapshotRequestId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SnapshotRequestId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SnapshotRequestId, FWidgetSnapshotResponse), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is used to receive a widget snapshot from a remote target."));
			MetaData->SetValue(NewProp_SnapshotData, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SnapshotData, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(NewProp_SnapshotData, TEXT("ToolTip"), TEXT("The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer"));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("ToolTip"), TEXT("The request ID of this snapshot (used to identify the correct response from the target)"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC() { return 624392084U; }
class UScriptStruct* FWidgetSnapshotRequest::StaticStruct()
{
	extern SLATEREFLECTOR_API class UPackage* Z_Construct_UPackage__Script_SlateReflector();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API class UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotRequest(FWidgetSnapshotRequest::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotRequest"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotRequest")),new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WidgetSnapshotRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>, EStructFlags(0x00000001));
			UProperty* NewProp_SnapshotRequestId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SnapshotRequestId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SnapshotRequestId, FWidgetSnapshotRequest), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_TargetInstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetInstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetInstanceId, FWidgetSnapshotRequest), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is used to request a widget snapshot from a remote target."));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(NewProp_SnapshotRequestId, TEXT("ToolTip"), TEXT("The request ID of this snapshot (used to identify the correct response from the target)"));
			MetaData->SetValue(NewProp_TargetInstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TargetInstanceId, TEXT("ModuleRelativePath"), TEXT("Private/WidgetSnapshotMessages.h"));
			MetaData->SetValue(NewProp_TargetInstanceId, TEXT("ToolTip"), TEXT("The instance ID of the remote target we want to receive a snapshot from"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC() { return 2598671858U; }
	UPackage* Z_Construct_UPackage__Script_SlateReflector()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SlateReflector")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x16581FF7;
			Guid.B = 0x4E972CDD;
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
