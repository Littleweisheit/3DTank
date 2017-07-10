// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SessionMessages.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SessionMessages() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe();
	SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe();
	SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog();
	SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong();
	SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing();
	SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
class UScriptStruct* FSessionServiceLogUnsubscribe::StaticStruct()
{
	extern SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe();
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogUnsubscribe"), sizeof(FSessionServiceLogUnsubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLogUnsubscribe(FSessionServiceLogUnsubscribe::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLogUnsubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLogUnsubscribe")),new UScriptStruct::TCppStructOps<FSessionServiceLogUnsubscribe>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogUnsubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLogUnsubscribe"), sizeof(FSessionServiceLogUnsubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionServiceLogUnsubscribe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionServiceLogUnsubscribe>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message to unsubscribe from an application's console log."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC() { return 3042042991U; }
class UScriptStruct* FSessionServiceLogSubscribe::StaticStruct()
{
	extern SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe();
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogSubscribe"), sizeof(FSessionServiceLogSubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLogSubscribe(FSessionServiceLogSubscribe::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLogSubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLogSubscribe")),new UScriptStruct::TCppStructOps<FSessionServiceLogSubscribe>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLogSubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLogSubscribe"), sizeof(FSessionServiceLogSubscribe), Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionServiceLogSubscribe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionServiceLogSubscribe>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message to subscribe to an application's console log."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC() { return 3881793198U; }
class UScriptStruct* FSessionServiceLog::StaticStruct()
{
	extern SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog();
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLog, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLog"), sizeof(FSessionServiceLog), Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServiceLog(FSessionServiceLog::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServiceLog"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServiceLog")),new UScriptStruct::TCppStructOps<FSessionServiceLog>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServiceLog;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServiceLog"), sizeof(FSessionServiceLog), Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionServiceLog"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionServiceLog>, EStructFlags(0x00000001));
			UProperty* NewProp_Verbosity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Verbosity"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Verbosity, FSessionServiceLog), 0x0010000000000001);
			UProperty* NewProp_TimeSeconds = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TimeSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UDoubleProperty(CPP_PROPERTY_BASE(TimeSeconds, FSessionServiceLog), 0x0010000000000001);
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FSessionServiceLog), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_Data = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Data, FSessionServiceLog), 0x0010000000000001);
			UProperty* NewProp_Category = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Category"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Category, FSessionServiceLog), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that contains a console log entry."));
			MetaData->SetValue(NewProp_Verbosity, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Verbosity, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_Verbosity, TEXT("ToolTip"), TEXT("Holds the log message's verbosity level."));
			MetaData->SetValue(NewProp_TimeSeconds, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_TimeSeconds, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_TimeSeconds, TEXT("ToolTip"), TEXT("Holds the time in seconds since the application was started."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("Holds the application instance identifier."));
			MetaData->SetValue(NewProp_Data, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Data, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_Data, TEXT("ToolTip"), TEXT("Holds the log message data."));
			MetaData->SetValue(NewProp_Category, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Category, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_Category, TEXT("ToolTip"), TEXT("Holds the log message category."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC() { return 1951345007U; }
class UScriptStruct* FSessionServicePong::StaticStruct()
{
	extern SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong();
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePong, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePong"), sizeof(FSessionServicePong), Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServicePong(FSessionServicePong::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServicePong")),new UScriptStruct::TCppStructOps<FSessionServicePong>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePong;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServicePong"), sizeof(FSessionServicePong), Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionServicePong"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionServicePong>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Standalone, FSessionServicePong, bool);
			UProperty* NewProp_Standalone = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Standalone"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Standalone, FSessionServicePong), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(Standalone, FSessionServicePong), sizeof(bool), true);
			UProperty* NewProp_SessionOwner = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionOwner"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SessionOwner, FSessionServicePong), 0x0010000000000001);
			UProperty* NewProp_SessionName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SessionName, FSessionServicePong), 0x0010000000000001);
			UProperty* NewProp_SessionId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SessionId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SessionId, FSessionServicePong), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_PlatformName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PlatformName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(PlatformName, FSessionServicePong), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsConsoleBuild, FSessionServicePong, bool);
			UProperty* NewProp_IsConsoleBuild = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsConsoleBuild"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsConsoleBuild, FSessionServicePong), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(IsConsoleBuild, FSessionServicePong), sizeof(bool), true);
			UProperty* NewProp_InstanceName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(InstanceName, FSessionServicePong), 0x0010000000000001);
			UProperty* NewProp_InstanceId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InstanceId"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstanceId, FSessionServicePong), 0x0010000000000001, Z_Construct_UScriptStruct_FGuid());
			UProperty* NewProp_DeviceName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeviceName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DeviceName, FSessionServicePong), 0x0010000000000001);
			UProperty* NewProp_BuildDate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BuildDate"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BuildDate, FSessionServicePong), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Authorized, FSessionServicePong, bool);
			UProperty* NewProp_Authorized = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Authorized"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Authorized, FSessionServicePong), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(Authorized, FSessionServicePong), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is published in response to FSessionServicePing."));
			MetaData->SetValue(NewProp_Standalone, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Standalone, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_Standalone, TEXT("ToolTip"), TEXT("Indicates whether the application is the only one in that session."));
			MetaData->SetValue(NewProp_SessionOwner, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionOwner, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionOwner, TEXT("ToolTip"), TEXT("Holds the name of the user that started the session."));
			MetaData->SetValue(NewProp_SessionName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionName, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionName, TEXT("ToolTip"), TEXT("Holds the user defined name of the session."));
			MetaData->SetValue(NewProp_SessionId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_SessionId, TEXT("ToolTip"), TEXT("Holds the identifier of the session that the application belongs to."));
			MetaData->SetValue(NewProp_PlatformName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_PlatformName, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_PlatformName, TEXT("ToolTip"), TEXT("Holds the name of the platform that the application is running on."));
			MetaData->SetValue(NewProp_IsConsoleBuild, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_IsConsoleBuild, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_IsConsoleBuild, TEXT("ToolTip"), TEXT("Indicates whether the application is running on a console."));
			MetaData->SetValue(NewProp_InstanceName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceName, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceName, TEXT("ToolTip"), TEXT("Holds the application's instance name."));
			MetaData->SetValue(NewProp_InstanceId, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_InstanceId, TEXT("ToolTip"), TEXT("Holds the application's instance identifier."));
			MetaData->SetValue(NewProp_DeviceName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_DeviceName, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_DeviceName, TEXT("ToolTip"), TEXT("Holds the name of the device that the application is running on."));
			MetaData->SetValue(NewProp_BuildDate, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_BuildDate, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_BuildDate, TEXT("ToolTip"), TEXT("Holds the application's build date."));
			MetaData->SetValue(NewProp_Authorized, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_Authorized, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_Authorized, TEXT("ToolTip"), TEXT("Indicates whether the pinging user is authorized to interact with this session."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC() { return 2396488498U; }
class UScriptStruct* FSessionServicePing::StaticStruct()
{
	extern SESSIONMESSAGES_API class UPackage* Z_Construct_UPackage__Script_SessionMessages();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SESSIONMESSAGES_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing();
		extern SESSIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePing, Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePing"), sizeof(FSessionServicePing), Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionServicePing(FSessionServicePing::StaticStruct, TEXT("/Script/SessionMessages"), TEXT("SessionServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing
{
	FScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionServicePing")),new UScriptStruct::TCppStructOps<FSessionServicePing>);
	}
} ScriptStruct_SessionMessages_StaticRegisterNativesFSessionServicePing;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SessionMessages();
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionServicePing"), sizeof(FSessionServicePing), Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SessionServicePing"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSessionServicePing>, EStructFlags(0x00000001));
			UProperty* NewProp_UserName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UserName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UserName, FSessionServicePing), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Implements a message that is published to discover existing application sessions."));
			MetaData->SetValue(NewProp_UserName, TEXT("Category"), TEXT("Message"));
			MetaData->SetValue(NewProp_UserName, TEXT("ModuleRelativePath"), TEXT("Public/SessionServiceMessages.h"));
			MetaData->SetValue(NewProp_UserName, TEXT("ToolTip"), TEXT("The name of the user who sent this ping."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC() { return 688184965U; }
	UPackage* Z_Construct_UPackage__Script_SessionMessages()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SessionMessages")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x66612D3C;
			Guid.B = 0x02B22DE2;
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
