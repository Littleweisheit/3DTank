// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameplayDebugger.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GameplayDebugger() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController_NoRegister();
	INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent();

	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
	GAMEPLAYDEBUGGER_API class UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent();
	GAMEPLAYDEBUGGER_API class UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent();
	GAMEPLAYDEBUGGER_API class UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled();
	GAMEPLAYDEBUGGER_API class UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor();
	GAMEPLAYDEBUGGER_API class UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
	GAMEPLAYDEBUGGER_API class UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode();
	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig();
	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig();
	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerConfig();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerLocalController();
	GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
	GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent();
	GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
class UScriptStruct* FGameplayDebuggerDebugActor::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerDebugActor(FGameplayDebuggerDebugActor::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerDebugActor"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerDebugActor")),new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerDebugActor"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>, EStructFlags(0x00000001));
			UProperty* NewProp_SyncCounter = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SyncCounter"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SyncCounter, FGameplayDebuggerDebugActor), 0x0010000000000000);
			UProperty* NewProp_ActorName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActorName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ActorName, FGameplayDebuggerDebugActor), 0x0010000000000000);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, FGameplayDebuggerDebugActor), 0x0010000000000000, Z_Construct_UClass_AActor_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
			MetaData->SetValue(NewProp_SyncCounter, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
			MetaData->SetValue(NewProp_ActorName, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
			MetaData->SetValue(NewProp_Actor, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_CRC() { return 2357869748U; }
class UScriptStruct* FGameplayDebuggerNetPack::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerNetPack(FGameplayDebuggerNetPack::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerNetPack"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerNetPack")),new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerNetPack"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_CRC() { return 1131911559U; }
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent = FName(TEXT("ServerSendCategoryInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent = FName(TEXT("ServerSendExtensionInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms Parms;
		Parms.ExtensionId=ExtensionId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled = FName(TEXT("ServerSetCategoryEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor = FName(TEXT("ServerSetDebugActor"));
	void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(AActor* Actor)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms Parms;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled),&Parms);
	}
	void AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator()
	{
		UClass* Class = AGameplayDebuggerCategoryReplicator::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ServerSendCategoryInputEvent", (Native)&AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent },
			{ "ServerSendExtensionInputEvent", (Native)&AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent },
			{ "ServerSetCategoryEnabled", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled },
			{ "ServerSetDebugActor", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetDebugActor },
			{ "ServerSetEnabled", (Native)&AGameplayDebuggerCategoryReplicator::execServerSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 5);
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent()
	{
		UObject* Outer=Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSendCategoryInputEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms));
			UProperty* NewProp_HandlerId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HandlerId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HandlerId, GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CategoryId, GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallInEditor"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("helper function for replicating input for category handlers"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent()
	{
		UObject* Outer=Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSendExtensionInputEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms));
			UProperty* NewProp_HandlerId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HandlerId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HandlerId, GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), 0x0010000000000080);
			UProperty* NewProp_ExtensionId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ExtensionId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ExtensionId, GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallInEditor"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("helper function for replicating input for extension handlers"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled()
	{
		UObject* Outer=Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetCategoryEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms, bool);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), sizeof(bool), true);
			UProperty* NewProp_CategoryId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CategoryId, GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallInEditor"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor()
	{
		UObject* Outer=Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetDebugActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallInEditor"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled()
	{
		UObject* Outer=Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerSetEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80280CC0, 65535, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms, bool);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallInEditor"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GameplayDebugger();
			OuterClass = AGameplayDebuggerCategoryReplicator::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x24900288;

				OuterClass->LinkChild(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor());
				OuterClass->LinkChild(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_RenderingComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RenderingComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RenderingComp, AGameplayDebuggerCategoryReplicator), 0x0020080000080008, Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister());
				UProperty* NewProp_DebugActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugActor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DebugActor, AGameplayDebuggerCategoryReplicator), 0x0020080000000020, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor());
				UProperty* NewProp_ReplicatedData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReplicatedData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReplicatedData, AGameplayDebuggerCategoryReplicator), 0x0020080000000020, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsEnabled, AGameplayDebuggerCategoryReplicator, bool);
				UProperty* NewProp_bIsEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsEnabled, AGameplayDebuggerCategoryReplicator), 0x0020080000000020, CPP_BOOL_PROPERTY_BITMASK(bIsEnabled, AGameplayDebuggerCategoryReplicator), sizeof(bool), true);
				UProperty* NewProp_OwnerPC = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OwnerPC"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OwnerPC, AGameplayDebuggerCategoryReplicator), 0x0020080000000020, Z_Construct_UClass_APlayerController_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent(), "ServerSendCategoryInputEvent"); // 1634571075
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent(), "ServerSendExtensionInputEvent"); // 740282801
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled(), "ServerSetCategoryEnabled"); // 535706296
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor(), "ServerSetDebugActor"); // 745841629
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled(), "ServerSetEnabled"); // 3131265499
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameplayDebuggerCategoryReplicator> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(OuterClass, TEXT("NotBlueprintType"), TEXT("true"));
				MetaData->SetValue(NewProp_RenderingComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RenderingComp, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(NewProp_RenderingComp, TEXT("ToolTip"), TEXT("rendering component needs to attached to some actor, and this is as good as any"));
				MetaData->SetValue(NewProp_DebugActor, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(NewProp_ReplicatedData, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(NewProp_bIsEnabled, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
				MetaData->SetValue(NewProp_OwnerPC, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerCategoryReplicator.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayDebuggerCategoryReplicator, 2535927604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerCategoryReplicator(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, &AGameplayDebuggerCategoryReplicator::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerCategoryReplicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerCategoryReplicator);
static UEnum* EGameplayDebuggerOverrideMode_StaticEnum()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("EGameplayDebuggerOverrideMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayDebuggerOverrideMode(EGameplayDebuggerOverrideMode_StaticEnum, TEXT("/Script/GameplayDebugger"), TEXT("EGameplayDebuggerOverrideMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayDebuggerOverrideMode"), 0, Get_Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGameplayDebuggerOverrideMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGameplayDebuggerOverrideMode::Enable"), 0);
			EnumNames.Emplace(TEXT("EGameplayDebuggerOverrideMode::Disable"), 1);
			EnumNames.Emplace(TEXT("EGameplayDebuggerOverrideMode::UseDefault"), 2);
			EnumNames.Emplace(TEXT("EGameplayDebuggerOverrideMode::EGameplayDebuggerOverrideMode_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGameplayDebuggerOverrideMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_CRC() { return 2584476924U; }
class UScriptStruct* FGameplayDebuggerExtensionConfig::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerExtensionConfig"), sizeof(FGameplayDebuggerExtensionConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerExtensionConfig(FGameplayDebuggerExtensionConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerExtensionConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerExtensionConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerExtensionConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerExtensionConfig"), sizeof(FGameplayDebuggerExtensionConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerExtensionConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerExtensionConfig>, EStructFlags(0x00000001));
			UProperty* NewProp_InputHandlers = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InputHandlers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InputHandlers, FGameplayDebuggerExtensionConfig), 0x0010000000000041);
			UProperty* NewProp_InputHandlers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InputHandlers, TEXT("InputHandlers"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig());
			UProperty* NewProp_UseExtension = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UseExtension"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(UseExtension, FGameplayDebuggerExtensionConfig), 0x0010000000000001, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode());
			UProperty* NewProp_UseExtension_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_UseExtension, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_ExtensionName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExtensionName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ExtensionName, FGameplayDebuggerExtensionConfig), 0x0010000000020001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_InputHandlers, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_InputHandlers, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_UseExtension, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_UseExtension, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_ExtensionName, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_ExtensionName, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC() { return 700228683U; }
class UScriptStruct* FGameplayDebuggerCategoryConfig::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerCategoryConfig"), sizeof(FGameplayDebuggerCategoryConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerCategoryConfig(FGameplayDebuggerCategoryConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerCategoryConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerCategoryConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerCategoryConfig"), sizeof(FGameplayDebuggerCategoryConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerCategoryConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryConfig>, EStructFlags(0x00000001));
			UProperty* NewProp_InputHandlers = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InputHandlers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InputHandlers, FGameplayDebuggerCategoryConfig), 0x0010000000000041);
			UProperty* NewProp_InputHandlers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InputHandlers, TEXT("InputHandlers"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideSlotIdx, FGameplayDebuggerCategoryConfig, uint8);
			UProperty* NewProp_bOverrideSlotIdx = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideSlotIdx"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideSlotIdx, FGameplayDebuggerCategoryConfig), 0x0010040000000001, CPP_BOOL_PROPERTY_BITMASK(bOverrideSlotIdx, FGameplayDebuggerCategoryConfig), sizeof(uint8), false);
			UProperty* NewProp_Hidden = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Hidden"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hidden, FGameplayDebuggerCategoryConfig), 0x0010000000000001, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode());
			UProperty* NewProp_Hidden_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hidden, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_ActiveInSimulate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActiveInSimulate"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ActiveInSimulate, FGameplayDebuggerCategoryConfig), 0x0010000000000001, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode());
			UProperty* NewProp_ActiveInSimulate_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ActiveInSimulate, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_ActiveInGame = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActiveInGame"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ActiveInGame, FGameplayDebuggerCategoryConfig), 0x0010000000000001, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode());
			UProperty* NewProp_ActiveInGame_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ActiveInGame, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_SlotIdx = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SlotIdx"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SlotIdx, FGameplayDebuggerCategoryConfig), 0x0010000000000001);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, FGameplayDebuggerCategoryConfig), 0x0010000000020001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_InputHandlers, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_InputHandlers, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_bOverrideSlotIdx, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bOverrideSlotIdx, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_Hidden, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_Hidden, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_ActiveInSimulate, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_ActiveInSimulate, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_ActiveInGame, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_ActiveInGame, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("ClampMax"), TEXT("9"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("ClampMin"), TEXT("-1"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("EditCondition"), TEXT("bOverrideSlotIdx"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("UIMax"), TEXT("9"));
			MetaData->SetValue(NewProp_SlotIdx, TEXT("UIMin"), TEXT("-1"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC() { return 3441977739U; }
class UScriptStruct* FGameplayDebuggerInputConfig::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerInputConfig"), sizeof(FGameplayDebuggerInputConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerInputConfig(FGameplayDebuggerInputConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerInputConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerInputConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerInputConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerInputConfig"), sizeof(FGameplayDebuggerInputConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerInputConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerInputConfig>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bModCmd, FGameplayDebuggerInputConfig, uint8);
			UProperty* NewProp_bModCmd = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bModCmd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bModCmd, FGameplayDebuggerInputConfig), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bModCmd, FGameplayDebuggerInputConfig), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bModAlt, FGameplayDebuggerInputConfig, uint8);
			UProperty* NewProp_bModAlt = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bModAlt"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bModAlt, FGameplayDebuggerInputConfig), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bModAlt, FGameplayDebuggerInputConfig), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bModCtrl, FGameplayDebuggerInputConfig, uint8);
			UProperty* NewProp_bModCtrl = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bModCtrl"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bModCtrl, FGameplayDebuggerInputConfig), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bModCtrl, FGameplayDebuggerInputConfig), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bModShift, FGameplayDebuggerInputConfig, uint8);
			UProperty* NewProp_bModShift = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bModShift"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bModShift, FGameplayDebuggerInputConfig), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bModShift, FGameplayDebuggerInputConfig), sizeof(uint8), false);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FGameplayDebuggerInputConfig), 0x0010000000000001, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_ConfigName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ConfigName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ConfigName, FGameplayDebuggerInputConfig), 0x0010000000020001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_bModCmd, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_bModCmd, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_bModAlt, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_bModAlt, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_bModCtrl, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_bModCtrl, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_bModShift, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_bModShift, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
			MetaData->SetValue(NewProp_ConfigName, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_ConfigName, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC() { return 3832673719U; }
	void UGameplayDebuggerConfig::StaticRegisterNativesUGameplayDebuggerConfig()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister()
	{
		return UGameplayDebuggerConfig::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_GameplayDebugger();
			OuterClass = UGameplayDebuggerConfig::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Extensions = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Extensions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Extensions, UGameplayDebuggerConfig), 0x0010000000004041);
				UProperty* NewProp_Extensions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Extensions, TEXT("Extensions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig());
				UProperty* NewProp_Categories = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Categories"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Categories, UGameplayDebuggerConfig), 0x0010000000004041);
				UProperty* NewProp_Categories_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Categories, TEXT("Categories"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig());
				UProperty* NewProp_DebugCanvasPaddingBottom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugCanvasPaddingBottom"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DebugCanvasPaddingBottom, UGameplayDebuggerConfig), 0x0010000000004001);
				UProperty* NewProp_DebugCanvasPaddingTop = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugCanvasPaddingTop"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DebugCanvasPaddingTop, UGameplayDebuggerConfig), 0x0010000000004001);
				UProperty* NewProp_DebugCanvasPaddingRight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugCanvasPaddingRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DebugCanvasPaddingRight, UGameplayDebuggerConfig), 0x0010000000004001);
				UProperty* NewProp_DebugCanvasPaddingLeft = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugCanvasPaddingLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DebugCanvasPaddingLeft, UGameplayDebuggerConfig), 0x0010000000004001);
				UProperty* NewProp_CategorySlot9 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot9"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot9, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot8 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot8"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot8, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot7 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot7"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot7, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot6 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot6"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot6, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot5 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot5"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot5, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot4 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot4"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot4, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot3 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot3"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot3, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot2 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot2, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot1, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategorySlot0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategorySlot0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategorySlot0, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategoryRowPrevKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategoryRowPrevKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategoryRowPrevKey, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_CategoryRowNextKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategoryRowNextKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CategoryRowNextKey, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_ActivationKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ActivationKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ActivationKey, UGameplayDebuggerConfig), 0x0010000000004001, Z_Construct_UScriptStruct_FKey());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameplayDebuggerConfig> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayDebuggerConfig.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_Extensions, TEXT("Category"), TEXT("AddOns"));
				MetaData->SetValue(NewProp_Extensions, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_Categories, TEXT("Category"), TEXT("AddOns"));
				MetaData->SetValue(NewProp_Categories, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingBottom, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingBottom, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingBottom, TEXT("ToolTip"), TEXT("additional canvas padding: bottom"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingTop, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingTop, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingTop, TEXT("ToolTip"), TEXT("additional canvas padding: top"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingRight, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingRight, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingRight, TEXT("ToolTip"), TEXT("additional canvas padding: right"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingLeft, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingLeft, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_DebugCanvasPaddingLeft, TEXT("ToolTip"), TEXT("additional canvas padding: left"));
				MetaData->SetValue(NewProp_CategorySlot9, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot9, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot9, TEXT("ToolTip"), TEXT("select category slot 9"));
				MetaData->SetValue(NewProp_CategorySlot8, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot8, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot8, TEXT("ToolTip"), TEXT("select category slot 8"));
				MetaData->SetValue(NewProp_CategorySlot7, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot7, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot7, TEXT("ToolTip"), TEXT("select category slot 7"));
				MetaData->SetValue(NewProp_CategorySlot6, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot6, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot6, TEXT("ToolTip"), TEXT("select category slot 6"));
				MetaData->SetValue(NewProp_CategorySlot5, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot5, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot5, TEXT("ToolTip"), TEXT("select category slot 5"));
				MetaData->SetValue(NewProp_CategorySlot4, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot4, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot4, TEXT("ToolTip"), TEXT("select category slot 4"));
				MetaData->SetValue(NewProp_CategorySlot3, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot3, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot3, TEXT("ToolTip"), TEXT("select category slot 3"));
				MetaData->SetValue(NewProp_CategorySlot2, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot2, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot2, TEXT("ToolTip"), TEXT("select category slot 2"));
				MetaData->SetValue(NewProp_CategorySlot1, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot1, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot1, TEXT("ToolTip"), TEXT("select category slot 1"));
				MetaData->SetValue(NewProp_CategorySlot0, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategorySlot0, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategorySlot0, TEXT("ToolTip"), TEXT("select category slot 0"));
				MetaData->SetValue(NewProp_CategoryRowPrevKey, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategoryRowPrevKey, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategoryRowPrevKey, TEXT("ToolTip"), TEXT("select previous category row"));
				MetaData->SetValue(NewProp_CategoryRowNextKey, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_CategoryRowNextKey, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_CategoryRowNextKey, TEXT("ToolTip"), TEXT("select next category row"));
				MetaData->SetValue(NewProp_ActivationKey, TEXT("Category"), TEXT("Input"));
				MetaData->SetValue(NewProp_ActivationKey, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerConfig.h"));
				MetaData->SetValue(NewProp_ActivationKey, TEXT("ToolTip"), TEXT("key used to activate visual debugger tool"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayDebuggerConfig, 2887589095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerConfig(Z_Construct_UClass_UGameplayDebuggerConfig, &UGameplayDebuggerConfig::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerConfig);
	void UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_GameplayDebugger();
			OuterClass = UGameplayDebuggerLocalController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x24000088;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DebugActorCandidate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugActorCandidate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugActorCandidate, UGameplayDebuggerLocalController), 0x0020080000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_CachedPlayerManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CachedPlayerManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CachedPlayerManager, UGameplayDebuggerLocalController), 0x0020080000000000, Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister());
				UProperty* NewProp_CachedReplicator = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CachedReplicator"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CachedReplicator, UGameplayDebuggerLocalController), 0x0020080000000000, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameplayDebuggerLocalController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayDebuggerLocalController.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerLocalController.h"));
				MetaData->SetValue(OuterClass, TEXT("NotBlueprintType"), TEXT("true"));
				MetaData->SetValue(NewProp_DebugActorCandidate, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerLocalController.h"));
				MetaData->SetValue(NewProp_CachedPlayerManager, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerLocalController.h"));
				MetaData->SetValue(NewProp_CachedReplicator, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerLocalController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayDebuggerLocalController, 1759312231);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerLocalController(Z_Construct_UClass_UGameplayDebuggerLocalController, &UGameplayDebuggerLocalController::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerLocalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerLocalController);
class UScriptStruct* FGameplayDebuggerPlayerData::StaticStruct()
{
	extern GAMEPLAYDEBUGGER_API class UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerPlayerData(FGameplayDebuggerPlayerData::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerPlayerData")),new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerPlayerData;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerPlayerData"), sizeof(FGameplayDebuggerPlayerData), Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameplayDebuggerPlayerData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>, EStructFlags(0x00000005));
			UProperty* NewProp_Replicator = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Replicator"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Replicator, FGameplayDebuggerPlayerData), 0x0010000000000000, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister());
			UProperty* NewProp_InputComponent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InputComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InputComponent, FGameplayDebuggerPlayerData), 0x0010000000080008, Z_Construct_UClass_UInputComponent_NoRegister());
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FGameplayDebuggerPlayerData), 0x0010000000000000, Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
			MetaData->SetValue(NewProp_Replicator, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
			MetaData->SetValue(NewProp_InputComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_InputComponent, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
			MetaData->SetValue(NewProp_Controller, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_CRC() { return 1789679497U; }
	void AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager()
	{
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GameplayDebugger();
			OuterClass = AGameplayDebuggerPlayerManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x24800288;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PendingRegistrations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PendingRegistrations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PendingRegistrations, AGameplayDebuggerPlayerManager), 0x0020080000000000);
				UProperty* NewProp_PendingRegistrations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PendingRegistrations, TEXT("PendingRegistrations"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister());
				UProperty* NewProp_PlayerData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PlayerData, AGameplayDebuggerPlayerManager), 0x0020088000000000);
				UProperty* NewProp_PlayerData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PlayerData, TEXT("PlayerData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000008000000000, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameplayDebuggerPlayerManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayDebuggerPlayerManager.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
				MetaData->SetValue(OuterClass, TEXT("NotBlueprintType"), TEXT("true"));
				MetaData->SetValue(NewProp_PendingRegistrations, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
				MetaData->SetValue(NewProp_PlayerData, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerPlayerManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayDebuggerPlayerManager, 1468117279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerPlayerManager(Z_Construct_UClass_AGameplayDebuggerPlayerManager, &AGameplayDebuggerPlayerManager::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerPlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerPlayerManager);
	void UGameplayDebuggerRenderingComponent::StaticRegisterNativesUGameplayDebuggerRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister()
	{
		return UGameplayDebuggerRenderingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage__Script_GameplayDebugger();
			OuterClass = UGameplayDebuggerRenderingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x24A00088;


				static TCppClassTypeInfo<TCppClassTypeTraits<UGameplayDebuggerRenderingComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayDebuggerRenderingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameplayDebuggerRenderingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("NotBlueprintType"), TEXT("true"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayDebuggerRenderingComponent, 1098084357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerRenderingComponent(Z_Construct_UClass_UGameplayDebuggerRenderingComponent, &UGameplayDebuggerRenderingComponent::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerRenderingComponent);
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GameplayDebugger")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x982140B6;
			Guid.B = 0x7E1BCAEE;
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
