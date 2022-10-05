// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Widgets/TouchJoystickWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchJoystickWidget() {}
// Cross Module References
	UITOUCH_API UClass* Z_Construct_UClass_UTouchJoystickWidget_NoRegister();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchJoystickWidget();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchWidget();
	UPackage* Z_Construct_UPackage__Script_UITouch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UTouchJoystickWidget::execSetControlPosition)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlPosition(Z_Param_Moved);
		P_NATIVE_END;
	}
	void UTouchJoystickWidget::StaticRegisterNativesUTouchJoystickWidget()
	{
		UClass* Class = UTouchJoystickWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetControlPosition", &UTouchJoystickWidget::execSetControlPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics
	{
		struct TouchJoystickWidget_eventSetControlPosition_Parms
		{
			FVector2D Moved;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchJoystickWidget_eventSetControlPosition_Parms, Moved), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::NewProp_Moved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xae\xbe\xe7\xbd\xae\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe4\xbd\x8d\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchJoystickWidget, nullptr, "SetControlPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::TouchJoystickWidget_eventSetControlPosition_Parms), Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchJoystickWidget);
	UClass* Z_Construct_UClass_UTouchJoystickWidget_NoRegister()
	{
		return UTouchJoystickWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTouchJoystickWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBoxWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBoxWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanelWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanelWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackdropImageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackdropImageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackdropSlateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropSlateBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlImageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlImageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSlateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSlateBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchFingerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchFingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YShaftTimes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YShaftTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreNumerical_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreNumerical;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchJoystickWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTouchWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTouchJoystickWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchJoystickWidget_SetControlPosition, "SetControlPosition" }, // 3645430198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/TouchJoystickWidget.h" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_SizeBoxWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_SizeBoxWidget = { "SizeBoxWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, SizeBoxWidget), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_SizeBoxWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_SizeBoxWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_CanvasPanelWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x8c\x85\xe8\xa3\xb9\xe6\x8e\xa7\xe4\xbb\xb6\xe7\x9a\x84\xe8\xa7\x86\xe5\x8f\xa3 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe5\x8c\x85\xe8\xa3\xb9\xe6\x8e\xa7\xe4\xbb\xb6\xe7\x9a\x84\xe8\xa7\x86\xe5\x8f\xa3" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_CanvasPanelWidget = { "CanvasPanelWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, CanvasPanelWidget), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_CanvasPanelWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_CanvasPanelWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/**  \xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe\xe7\x89\x87 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe\xe7\x89\x87" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropImageWidget = { "BackdropImageWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, BackdropImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropImageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropImageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropSlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropSlateBrush = { "BackdropSlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, BackdropSlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropSlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropSlateBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe5\x9b\xbe\xe7\x89\x87\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe5\x9b\xbe\xe7\x89\x87\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlImageWidget = { "ControlImageWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, ControlImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlImageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlImageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlSlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe6\x93\x8d\xe6\x8e\xa7\xe6\x9d\x86\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlSlateBrush = { "ControlSlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, ControlSlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlSlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlSlateBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_TouchFingerIndex_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95 */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_TouchFingerIndex = { "TouchFingerIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, TouchFingerIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_TouchFingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_TouchFingerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_YShaftTimes_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * Y\xe8\xbd\xb4\xe5\x80\x8d\xe6\x95\xb0 */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "Y\xe8\xbd\xb4\xe5\x80\x8d\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_YShaftTimes = { "YShaftTimes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, YShaftTimes), METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_YShaftTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_YShaftTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_IgnoreNumerical_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe5\xbf\xbd\xe7\x95\xa5\xe5\x80\xbc */" },
		{ "ModuleRelativePath", "Widgets/TouchJoystickWidget.h" },
		{ "ToolTip", "\xe5\xbf\xbd\xe7\x95\xa5\xe5\x80\xbc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_IgnoreNumerical = { "IgnoreNumerical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchJoystickWidget, IgnoreNumerical), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_IgnoreNumerical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_IgnoreNumerical_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchJoystickWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_SizeBoxWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_CanvasPanelWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_BackdropSlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_ControlSlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_TouchFingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_YShaftTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchJoystickWidget_Statics::NewProp_IgnoreNumerical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchJoystickWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchJoystickWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchJoystickWidget_Statics::ClassParams = {
		&UTouchJoystickWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTouchJoystickWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchJoystickWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchJoystickWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchJoystickWidget()
	{
		if (!Z_Registration_Info_UClass_UTouchJoystickWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchJoystickWidget.OuterSingleton, Z_Construct_UClass_UTouchJoystickWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchJoystickWidget.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<UTouchJoystickWidget>()
	{
		return UTouchJoystickWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchJoystickWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchJoystickWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchJoystickWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchJoystickWidget, UTouchJoystickWidget::StaticClass, TEXT("UTouchJoystickWidget"), &Z_Registration_Info_UClass_UTouchJoystickWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchJoystickWidget), 3206321872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchJoystickWidget_h_2385118760(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchJoystickWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchJoystickWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
