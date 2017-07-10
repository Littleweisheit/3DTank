// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EditorStyle.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1EditorStyle() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UEnum* Z_Construct_UEnum_CoreUObject_ELogTimes();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();

	EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation();
	EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency();
	EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister();
	EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings();
	EDITORSTYLE_API class UPackage* Z_Construct_UPackage__Script_EditorStyle();
static UEnum* EAssetEditorOpenLocation_StaticEnum()
{
	extern EDITORSTYLE_API class UPackage* Z_Construct_UPackage__Script_EditorStyle();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation, Z_Construct_UPackage__Script_EditorStyle(), TEXT("EAssetEditorOpenLocation"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssetEditorOpenLocation(EAssetEditorOpenLocation_StaticEnum, TEXT("/Script/EditorStyle"), TEXT("EAssetEditorOpenLocation"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EditorStyle();
		extern uint32 Get_Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssetEditorOpenLocation"), 0, Get_Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EAssetEditorOpenLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::Default"), 0);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::NewWindow"), 1);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::MainWindow"), 2);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::ContentBrowser"), 3);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::LastDockedWindowOrNewWindow"), 4);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::LastDockedWindowOrMainWindow"), 5);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser"), 6);
			EnumNames.Emplace(TEXT("EAssetEditorOpenLocation::EAssetEditorOpenLocation_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EAssetEditorOpenLocation");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ContentBrowser.ToolTip"), TEXT("Docks tabs into the content browser's window."));
			MetaData->SetValue(ReturnEnum, TEXT("Default.ToolTip"), TEXT("Attempts to dock asset editors into either a new window, or the main window if they were docked there."));
			MetaData->SetValue(ReturnEnum, TEXT("LastDockedWindowOrContentBrowser.ToolTip"), TEXT("Docks tabs into the last window that was docked into, or the content browser window if there is no last docked window."));
			MetaData->SetValue(ReturnEnum, TEXT("LastDockedWindowOrMainWindow.ToolTip"), TEXT("Docks tabs into the last window that was docked into, or the main window if there is no last docked window."));
			MetaData->SetValue(ReturnEnum, TEXT("LastDockedWindowOrNewWindow.ToolTip"), TEXT("Docks tabs into the last window that was docked into, or a new window if there is no last docked window."));
			MetaData->SetValue(ReturnEnum, TEXT("MainWindow.ToolTip"), TEXT("Docks tabs into the main window."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NewWindow.ToolTip"), TEXT("Docks tabs into new windows."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation_CRC() { return 3707586173U; }
static UEnum* EColorVisionDeficiency_StaticEnum()
{
	extern EDITORSTYLE_API class UPackage* Z_Construct_UPackage__Script_EditorStyle();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency, Z_Construct_UPackage__Script_EditorStyle(), TEXT("EColorVisionDeficiency"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EColorVisionDeficiency(EColorVisionDeficiency_StaticEnum, TEXT("/Script/EditorStyle"), TEXT("EColorVisionDeficiency"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_EditorStyle();
		extern uint32 Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EColorVisionDeficiency"), 0, Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EColorVisionDeficiency"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("CVD_NormalVision"), 0);
			EnumNames.Emplace(TEXT("CVD_Deuteranomly"), 1);
			EnumNames.Emplace(TEXT("CVD_Deuteranopia"), 2);
			EnumNames.Emplace(TEXT("CVD_Protanomly"), 3);
			EnumNames.Emplace(TEXT("CVD_Protanopia"), 4);
			EnumNames.Emplace(TEXT("CVD_Tritanomaly"), 5);
			EnumNames.Emplace(TEXT("CVD_Tritanopia"), 6);
			EnumNames.Emplace(TEXT("CVD_Achromatopsia"), 7);
			EnumNames.Emplace(TEXT("CVD_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EColorVisionDeficiency");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Achromatopsia.DisplayName"), TEXT("Achromatopsia (Extremely Rare)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Deuteranomly.DisplayName"), TEXT("Deuteranomly (6% of males, 0.4% of females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Deuteranopia.DisplayName"), TEXT("Deuteranopia (1% of males)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_NormalVision.DisplayName"), TEXT("Normal Vision"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Protanomly.DisplayName"), TEXT("Protanomly (1% of males, 0.01% of females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Protanopia.DisplayName"), TEXT("Protanopia (1% of males)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Tritanomaly.DisplayName"), TEXT("Tritanomaly (0.01% of males and females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Tritanopia.DisplayName"), TEXT("Tritanopia (1% of males and females)"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Enumerates color vision deficiency types."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC() { return 1128931202U; }
	void UEditorStyleSettings::StaticRegisterNativesUEditorStyleSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister()
	{
		return UEditorStyleSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditorStyleSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EditorStyle();
			OuterClass = UEditorStyleSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AssetEditorOpenLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetEditorOpenLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(AssetEditorOpenLocation, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UEnum_EditorStyle_EAssetEditorOpenLocation());
				UProperty* NewProp_AssetEditorOpenLocation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_AssetEditorOpenLocation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPromoteOutputLogWarningsDuringPIE, UEditorStyleSettings, bool);
				UProperty* NewProp_bPromoteOutputLogWarningsDuringPIE = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPromoteOutputLogWarningsDuringPIE"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPromoteOutputLogWarningsDuringPIE, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bPromoteOutputLogWarningsDuringPIE, UEditorStyleSettings), sizeof(bool), true);
				UProperty* NewProp_LogTimestampMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogTimestampMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LogTimestampMode, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UEnum_CoreUObject_ELogTimes());
				UProperty* NewProp_LogFontSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogFontSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LogFontSize, UEditorStyleSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowHiddenPropertiesWhilePlaying, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowHiddenPropertiesWhilePlaying = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowHiddenPropertiesWhilePlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowHiddenPropertiesWhilePlaying, UEditorStyleSettings), 0x0010000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowHiddenPropertiesWhilePlaying, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowAllAdvancedDetails, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowAllAdvancedDetails = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowAllAdvancedDetails"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowAllAdvancedDetails, UEditorStyleSettings), 0x0010000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowAllAdvancedDetails, UEditorStyleSettings), sizeof(uint8), false);
				UProperty* NewProp_LogErrorColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogErrorColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogErrorColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_LogWarningColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogWarningColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogWarningColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_LogCommandColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogCommandColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogCommandColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_LogNormalColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogNormalColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogNormalColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_LogSelectionBackgroundColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogSelectionBackgroundColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogSelectionBackgroundColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_LogBackgroundColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogBackgroundColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LogBackgroundColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowLaunchMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowLaunchMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowLaunchMenus"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowLaunchMenus, UEditorStyleSettings), 0x0010000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowLaunchMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowProjectMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowProjectMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowProjectMenus"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowProjectMenus, UEditorStyleSettings), 0x0010000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowProjectMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bExpandConfigurationMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bExpandConfigurationMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bExpandConfigurationMenus"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bExpandConfigurationMenus, UEditorStyleSettings), 0x0010040000004001, CPP_BOOL_PROPERTY_BITMASK(bExpandConfigurationMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowFriendlyNames, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowFriendlyNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowFriendlyNames"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowFriendlyNames, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bShowFriendlyNames, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableWindowAnimations, UEditorStyleSettings, uint8);
				UProperty* NewProp_bEnableWindowAnimations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableWindowAnimations"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableWindowAnimations, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnableWindowAnimations, UEditorStyleSettings), sizeof(uint8), false);
				UProperty* NewProp_GridSnapSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GridSnapSize"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(GridSnapSize, UEditorStyleSettings), 0x0010000000004001);
				UProperty* NewProp_CenterColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CenterColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CenterColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_RuleColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RuleColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RuleColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_RegularColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RegularColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RegularColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseGrid, UEditorStyleSettings, uint8);
				UProperty* NewProp_bUseGrid = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseGrid"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseGrid, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseGrid, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseSmallToolBarIcons, UEditorStyleSettings, uint8);
				UProperty* NewProp_bUseSmallToolBarIcons = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseSmallToolBarIcons"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseSmallToolBarIcons, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseSmallToolBarIcons, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bResetEditorWindowBackgroundSettings, UEditorStyleSettings, bool);
				UProperty* NewProp_bResetEditorWindowBackgroundSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bResetEditorWindowBackgroundSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bResetEditorWindowBackgroundSettings, UEditorStyleSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bResetEditorWindowBackgroundSettings, UEditorStyleSettings), sizeof(bool), true);
				UProperty* NewProp_EditorChildWindowBackgroundOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditorChildWindowBackgroundOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditorChildWindowBackgroundOverride, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FSlateBrush());
				UProperty* NewProp_EditorMainWindowBackgroundOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditorMainWindowBackgroundOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditorMainWindowBackgroundOverride, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FSlateBrush());
				UProperty* NewProp_EditorWindowBackgroundColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EditorWindowBackgroundColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EditorWindowBackgroundColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_ColorVisionDeficiencyPreviewType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ColorVisionDeficiencyPreviewType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ColorVisionDeficiencyPreviewType, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency());
				UProperty* NewProp_KeyboardFocusColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyboardFocusColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(KeyboardFocusColor, UEditorStyleSettings), 0x0010040000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_InactiveSelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InactiveSelectionColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InactiveSelectionColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_PressedSelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressedSelectionColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PressedSelectionColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_SelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectionColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SelectionColor, UEditorStyleSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FLinearColor());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorPerProjectUserSettings"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UEditorStyleSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Classes/EditorStyleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the Editor style settings."));
				MetaData->SetValue(NewProp_AssetEditorOpenLocation, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_AssetEditorOpenLocation, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_AssetEditorOpenLocation, TEXT("ToolTip"), TEXT("New asset editor tabs will open at the specified location."));
				MetaData->SetValue(NewProp_bPromoteOutputLogWarningsDuringPIE, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_bPromoteOutputLogWarningsDuringPIE, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bPromoteOutputLogWarningsDuringPIE, TEXT("ToolTip"), TEXT("Should warnings and errors in the Output Log during \"Play in Editor\" be promoted to the message log?"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("ToolTip"), TEXT("The display mode for timestamps in the output log"));
				MetaData->SetValue(NewProp_LogFontSize, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogFontSize, TEXT("ConfigRestartRequired"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_LogFontSize, TEXT("DisplayName"), TEXT("Log Font Size"));
				MetaData->SetValue(NewProp_LogFontSize, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogFontSize, TEXT("ToolTip"), TEXT("The font size used in the output log"));
				MetaData->SetValue(NewProp_bShowHiddenPropertiesWhilePlaying, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowHiddenPropertiesWhilePlaying, TEXT("ToolTip"), TEXT("When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging."));
				MetaData->SetValue(NewProp_bShowAllAdvancedDetails, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowAllAdvancedDetails, TEXT("ToolTip"), TEXT("When enabled, the Advanced Details will always auto expand."));
				MetaData->SetValue(NewProp_LogErrorColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogErrorColor, TEXT("DisplayName"), TEXT("Error Text Color"));
				MetaData->SetValue(NewProp_LogErrorColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogErrorColor, TEXT("ToolTip"), TEXT("The color used for error log lines"));
				MetaData->SetValue(NewProp_LogWarningColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogWarningColor, TEXT("DisplayName"), TEXT("Warning Text Color"));
				MetaData->SetValue(NewProp_LogWarningColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogWarningColor, TEXT("ToolTip"), TEXT("The color used for warning log lines"));
				MetaData->SetValue(NewProp_LogCommandColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogCommandColor, TEXT("DisplayName"), TEXT("Command Text Color"));
				MetaData->SetValue(NewProp_LogCommandColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogCommandColor, TEXT("ToolTip"), TEXT("The color used for normal text in the output log"));
				MetaData->SetValue(NewProp_LogNormalColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogNormalColor, TEXT("DisplayName"), TEXT("Normal Text Color"));
				MetaData->SetValue(NewProp_LogNormalColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogNormalColor, TEXT("ToolTip"), TEXT("The color used for normal text in the output log"));
				MetaData->SetValue(NewProp_LogSelectionBackgroundColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogSelectionBackgroundColor, TEXT("DisplayName"), TEXT("Selection Background Color"));
				MetaData->SetValue(NewProp_LogSelectionBackgroundColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogSelectionBackgroundColor, TEXT("ToolTip"), TEXT("The color used for the background of selected text in the output log"));
				MetaData->SetValue(NewProp_LogBackgroundColor, TEXT("Category"), TEXT("Output Log"));
				MetaData->SetValue(NewProp_LogBackgroundColor, TEXT("DisplayName"), TEXT("Background Color"));
				MetaData->SetValue(NewProp_LogBackgroundColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogBackgroundColor, TEXT("ToolTip"), TEXT("The color used for the background in the output log"));
				MetaData->SetValue(NewProp_bShowLaunchMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowLaunchMenus, TEXT("ToolTip"), TEXT("When enabled, the Launch menu items will be shown."));
				MetaData->SetValue(NewProp_bShowProjectMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowProjectMenus, TEXT("ToolTip"), TEXT("When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section."));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("ToolTip"), TEXT("When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section."));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("DisplayName"), TEXT("Show Friendly Variable Names"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("ToolTip"), TEXT("When enabled, the C++ names for properties and functions will be displayed in a format that is easier to read"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("ToolTip"), TEXT("Enables animated transitions for certain menus and pop-up windows.  Note that animations may be automatically disabled at low frame rates in order to improve responsiveness."));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("Category"), TEXT("Graphs"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("ClampMax"), TEXT("100.0"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("ToolTip"), TEXT("The custom grid snap size to use"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("UIMax"), TEXT("100.0"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("UIMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_CenterColor, TEXT("Category"), TEXT("Graphs"));
				MetaData->SetValue(NewProp_CenterColor, TEXT("DisplayName"), TEXT("Grid Center Color"));
				MetaData->SetValue(NewProp_CenterColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_CenterColor, TEXT("ToolTip"), TEXT("The color used to represent the center lines in the grid"));
				MetaData->SetValue(NewProp_RuleColor, TEXT("Category"), TEXT("Graphs"));
				MetaData->SetValue(NewProp_RuleColor, TEXT("DisplayName"), TEXT("Grid Ruler Color"));
				MetaData->SetValue(NewProp_RuleColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_RuleColor, TEXT("ToolTip"), TEXT("The color used to represent ruler lines in the grid"));
				MetaData->SetValue(NewProp_RegularColor, TEXT("Category"), TEXT("Graphs"));
				MetaData->SetValue(NewProp_RegularColor, TEXT("DisplayName"), TEXT("Grid Regular Color"));
				MetaData->SetValue(NewProp_RegularColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_RegularColor, TEXT("ToolTip"), TEXT("The color used to represent regular grid lines"));
				MetaData->SetValue(NewProp_bUseGrid, TEXT("Category"), TEXT("Graphs"));
				MetaData->SetValue(NewProp_bUseGrid, TEXT("DisplayName"), TEXT("Use Grids In The Material And Blueprint Editor"));
				MetaData->SetValue(NewProp_bUseGrid, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bUseGrid, TEXT("ToolTip"), TEXT("If true the material editor and blueprint editor will show a grid on it's background."));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("ToolTip"), TEXT("Whether to use small toolbar icons without labels or not."));
				MetaData->SetValue(NewProp_bResetEditorWindowBackgroundSettings, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_bResetEditorWindowBackgroundSettings, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bResetEditorWindowBackgroundSettings, TEXT("ToolTip"), TEXT("Check to reset the window background settings to editor defaults"));
				MetaData->SetValue(NewProp_EditorChildWindowBackgroundOverride, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_EditorChildWindowBackgroundOverride, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_EditorChildWindowBackgroundOverride, TEXT("ToolTip"), TEXT("The override for the background of the child window (if not modified, the defaults will be used)"));
				MetaData->SetValue(NewProp_EditorMainWindowBackgroundOverride, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_EditorMainWindowBackgroundOverride, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_EditorMainWindowBackgroundOverride, TEXT("ToolTip"), TEXT("The override for the background of the main window (if not modified, the defaults will be used)"));
				MetaData->SetValue(NewProp_EditorWindowBackgroundColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_EditorWindowBackgroundColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_EditorWindowBackgroundColor, TEXT("ToolTip"), TEXT("The color used to tint the editor window backgrounds"));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("ToolTip"), TEXT("Applies a color vision deficiency filter to the entire editor"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("DisplayName"), TEXT("Keyboard Focus Color"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("ToolTip"), TEXT("The color used to represent keyboard input selection focus"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("DisplayName"), TEXT("Inactive Selection Color"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("ToolTip"), TEXT("The color used to represent selected items that are currently inactive"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("DisplayName"), TEXT("Pressed Selection Color"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("ToolTip"), TEXT("The color used to represent a pressed item"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("DisplayName"), TEXT("Selection Color"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("ToolTip"), TEXT("The color used to represent selection"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorStyleSettings, 721830556);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorStyleSettings(Z_Construct_UClass_UEditorStyleSettings, &UEditorStyleSettings::StaticClass, TEXT("/Script/EditorStyle"), TEXT("UEditorStyleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStyleSettings);
	UPackage* Z_Construct_UPackage__Script_EditorStyle()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/EditorStyle")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0x04AE82A4;
			Guid.B = 0xBFFEA9FB;
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
