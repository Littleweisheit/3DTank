// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProfilerMessages.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ProfilerMessages() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
	PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
	PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
class UScriptStruct* FProfilerServiceRequest::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceRequest, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceRequest(FProfilerServiceRequest::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceRequest")),new UScriptStruct::TCppStructOps<FProfilerServiceRequest>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceRequest>, EStructFlags(0x00000001));
			UProperty* NewProp_Request = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Request"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(Request, FProfilerServiceRequest), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_Request, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Request, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_Request, TEXT("ToolTip"), TEXT("Request @see EProfilerRequestType."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC() { return 1355214303U; }
class UScriptStruct* FProfilerServicePreview::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreview, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreview(FProfilerServicePreview::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreview"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreview")),new UScriptStruct::TCppStructOps<FProfilerServicePreview>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServicePreview"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServicePreview>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRequestedPreviewState, FProfilerServicePreview, bool);
			UProperty* NewProp_bRequestedPreviewState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bRequestedPreviewState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRequestedPreviewState, FProfilerServicePreview), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bRequestedPreviewState, FProfilerServicePreview), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_bRequestedPreviewState, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bRequestedPreviewState, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_bRequestedPreviewState, TEXT("ToolTip"), TEXT("The data preview state that should be set."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC() { return 757935471U; }
class UScriptStruct* FProfilerServiceCapture::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceCapture, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceCapture(FProfilerServiceCapture::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceCapture"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceCapture")),new UScriptStruct::TCppStructOps<FProfilerServiceCapture>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceCapture>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRequestedCaptureState, FProfilerServiceCapture, bool);
			UProperty* NewProp_bRequestedCaptureState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bRequestedCaptureState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRequestedCaptureState, FProfilerServiceCapture), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bRequestedCaptureState, FProfilerServiceCapture), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_bRequestedCaptureState, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_bRequestedCaptureState, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_bRequestedCaptureState, TEXT("ToolTip"), TEXT("The data capture state that should be set."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC() { return 1894659844U; }
class UScriptStruct* FProfilerServiceUnsubscribe::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceUnsubscribe(FProfilerServiceUnsubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceUnsubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceUnsubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceUnsubscribe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>, EStructFlags(0x00000001));
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServiceUnsubscribe), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FProfilerServiceUnsubscribe), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC() { return 2183734505U; }
class UScriptStruct* FProfilerServiceSubscribe::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceSubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceSubscribe(FProfilerServiceSubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceSubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceSubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceSubscribe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>, EStructFlags(0x00000001));
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServiceSubscribe), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FProfilerServiceSubscribe), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC() { return 396104205U; }
class UScriptStruct* FProfilerServicePong::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePong, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePong(FProfilerServicePong::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePong")),new UScriptStruct::TCppStructOps<FProfilerServicePong>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServicePong"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServicePong>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC() { return 3717383517U; }
class UScriptStruct* FProfilerServicePing::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePing, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePing(FProfilerServicePing::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePing")),new UScriptStruct::TCppStructOps<FProfilerServicePing>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServicePing"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServicePing>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC() { return 4011366409U; }
class UScriptStruct* FProfilerServiceFileChunk::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceFileChunk, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceFileChunk(FProfilerServiceFileChunk::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceFileChunk"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceFileChunk")),new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceFileChunk"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>, EStructFlags(0x00000001));
			UProperty* NewProp_ChunkHash = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ChunkHash"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ChunkHash, FProfilerServiceFileChunk), 0x0010000000000001);
			UProperty* NewProp_ChunkHash_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ChunkHash, TEXT("ChunkHash"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Header = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Header"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Header, FProfilerServiceFileChunk), 0x0010000000000001);
			UProperty* NewProp_Header_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Header, TEXT("Header"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_HexData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HexData"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HexData, FProfilerServiceFileChunk), 0x0010000000000001);
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, FProfilerServiceFileChunk), 0x0010000000000001);
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServiceFileChunk), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message for copying a file through the network, as well as for synchronization.\nUnfortunately assumes that InstanceId and Filename are transfered without errors."));
			MetaData->SetValue(NewProp_ChunkHash, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_ChunkHash, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_ChunkHash, TEXT("ToolTip"), TEXT("Hash of this data and header."));
			MetaData->SetValue(NewProp_Header, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Header, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_Header, TEXT("ToolTip"), TEXT("FProfilerFileChunkHeader stored in the array."));
			MetaData->SetValue(NewProp_HexData, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_HexData, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_HexData, TEXT("ToolTip"), TEXT("Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString."));
			MetaData->SetValue(NewProp_Filename, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Filename, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_Filename, TEXT("ToolTip"), TEXT("The file containing this file chunk."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("The ID of the instance where this message should be sent."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC() { return 2382959045U; }
class UScriptStruct* FProfilerServicePreviewAck::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreviewAck, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreviewAck(FProfilerServicePreviewAck::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreviewAck"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreviewAck")),new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServicePreviewAck"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>, EStructFlags(0x00000001));
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServicePreviewAck), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC() { return 3615323371U; }
class UScriptStruct* FProfilerServiceData2::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceData2, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceData2(FProfilerServiceData2::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceData2"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceData2")),new UScriptStruct::TCppStructOps<FProfilerServiceData2>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceData2"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceData2>, EStructFlags(0x00000001));
			UProperty* NewProp_HexData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HexData"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HexData, FProfilerServiceData2), 0x0010000000000001);
			UProperty* NewProp_UncompressedSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UncompressedSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(UncompressedSize, FProfilerServiceData2), 0x0010000000000001);
			UProperty* NewProp_CompressedSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CompressedSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CompressedSize, FProfilerServiceData2), 0x0010000000000001);
			UProperty* NewProp_Frame = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Frame"), RF_Public|RF_Transient|RF_MarkAsNative) UInt64Property(CPP_PROPERTY_BASE(Frame, FProfilerServiceData2), 0x0010000000000001);
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServiceData2), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Profiler Service data."));
			MetaData->SetValue(NewProp_HexData, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_HexData, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_HexData, TEXT("ToolTip"), TEXT("Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation."));
			MetaData->SetValue(NewProp_UncompressedSize, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_UncompressedSize, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_UncompressedSize, TEXT("ToolTip"), TEXT("Size of the uncompressed data."));
			MetaData->SetValue(NewProp_CompressedSize, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_CompressedSize, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_CompressedSize, TEXT("ToolTip"), TEXT("Size of the compressed data."));
			MetaData->SetValue(NewProp_Frame, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Frame, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_Frame, TEXT("ToolTip"), TEXT("Stats frame."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("Instance ID."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC() { return 159222799U; }
class UScriptStruct* FProfilerServiceAuthorize::StaticStruct()
{
	extern PROFILERMESSAGES_API class UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceAuthorize, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceAuthorize(FProfilerServiceAuthorize::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceAuthorize"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceAuthorize")),new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProfilerServiceAuthorize"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>, EStructFlags(0x00000001));
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FProfilerServiceAuthorize), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FProfilerServiceAuthorize), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Profiler Service authorization message."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("Instance ID."));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Public/ProfilerServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ToolTip"), TEXT("Session ID."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC() { return 2642650742U; }
	UPackage* Z_Construct_UPackage__Script_ProfilerMessages()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ProfilerMessages")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x563FFD01;
			Guid.B = 0xD13B56DD;
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
