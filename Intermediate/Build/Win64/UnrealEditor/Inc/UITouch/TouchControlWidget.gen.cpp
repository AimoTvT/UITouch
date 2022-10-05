// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Widgets/TouchControlWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchControlWidget() {}
// Cross Module References
	UITOUCH_API UClass* Z_Construct_UClass_UTouchControlWidget_NoRegister();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchControlWidget();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchWidget();
	UPackage* Z_Construct_UPackage__Script_UITouch();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UTouchControlWidget::StaticRegisterNativesUTouchControlWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchControlWidget);
	UClass* Z_Construct_UClass_UTouchControlWidget_NoRegister()
	{
		return UTouchControlWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTouchControlWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBoxWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBoxWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlateBrush;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchFingerIndexs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchFingerIndexs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TouchFingerIndexs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TouchLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TouchLocations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchControlWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTouchWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/TouchControlWidget.h" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SizeBoxWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
		{ "ToolTip", "\xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SizeBoxWidget = { "SizeBoxWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchControlWidget, SizeBoxWidget), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SizeBoxWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SizeBoxWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_ImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe5\x83\x8f\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe5\x83\x8f\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_ImageWidget = { "ImageWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchControlWidget, ImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_ImageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_ImageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SlateBrush = { "SlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchControlWidget, SlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SlateBrush_MetaData)) }; // 852902259
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs_Inner = { "TouchFingerIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95\xe7\xbb\x84 */" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95\xe7\xbb\x84" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs = { "TouchFingerIndexs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchControlWidget, TouchFingerIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations_Inner = { "TouchLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95\xe4\xbd\x8d\xe7\xbd\xae\xe7\xbb\x84 */" },
		{ "ModuleRelativePath", "Widgets/TouchControlWidget.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95\xe4\xbd\x8d\xe7\xbd\xae\xe7\xbb\x84" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations = { "TouchLocations", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchControlWidget, TouchLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchControlWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SizeBoxWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_ImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_SlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchFingerIndexs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchControlWidget_Statics::NewProp_TouchLocations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchControlWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchControlWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchControlWidget_Statics::ClassParams = {
		&UTouchControlWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTouchControlWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchControlWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchControlWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchControlWidget()
	{
		if (!Z_Registration_Info_UClass_UTouchControlWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchControlWidget.OuterSingleton, Z_Construct_UClass_UTouchControlWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchControlWidget.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<UTouchControlWidget>()
	{
		return UTouchControlWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchControlWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchControlWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchControlWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchControlWidget, UTouchControlWidget::StaticClass, TEXT("UTouchControlWidget"), &Z_Registration_Info_UClass_UTouchControlWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchControlWidget), 2136654136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchControlWidget_h_1561837098(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchControlWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchControlWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
