// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Public/Widgets/TouchButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchButtonWidget() {}
// Cross Module References
	UITOUCH_API UClass* Z_Construct_UClass_UTouchButtonWidget_NoRegister();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchButtonWidget();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchWidget();
	UPackage* Z_Construct_UPackage__Script_UITouch();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void UTouchButtonWidget::StaticRegisterNativesUTouchButtonWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchButtonWidget);
	UClass* Z_Construct_UClass_UTouchButtonWidget_NoRegister()
	{
		return UTouchButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTouchButtonWidget_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledSlateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledSlateBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchFingerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchFingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPressedHandover_MetaData[];
#endif
		static void NewProp_bPressedHandover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressedHandover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPressed_MetaData[];
#endif
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTouchWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/TouchButtonWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SizeBoxWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SizeBoxWidget = { "SizeBoxWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, SizeBoxWidget), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SizeBoxWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SizeBoxWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_ImageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe5\x83\x8f\xe5\x8f\x98\xe9\x87\x8f */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe5\x83\x8f\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_ImageWidget = { "ImageWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, ImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_ImageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_ImageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SlateBrush = { "SlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, SlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SlateBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_PressedSlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_PressedSlateBrush = { "PressedSlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, PressedSlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_PressedSlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_PressedSlateBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_DisabledSlateBrush_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** \xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe7\x89\x87\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_DisabledSlateBrush = { "DisabledSlateBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, DisabledSlateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_DisabledSlateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_DisabledSlateBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_TouchFingerIndex_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95 255=\xe7\xa9\xba */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x8e\xa7\xe7\xb4\xa2\xe5\xbc\x95 255=\xe7\xa9\xba" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_TouchFingerIndex = { "TouchFingerIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchButtonWidget, TouchFingerIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_TouchFingerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_TouchFingerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe5\x88\x87\xe6\x8d\xa2\xe6\x8c\x89\xe4\xb8\x8b\xe6\xa8\xa1\xe5\xbc\x8f */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\x8c\x89\xe4\xb8\x8b\xe6\xa8\xa1\xe5\xbc\x8f" },
	};
#endif
	void Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover_SetBit(void* Obj)
	{
		((UTouchButtonWidget*)Obj)->bPressedHandover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover = { "bPressedHandover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTouchButtonWidget), &Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe6\x8c\x89\xe4\xb8\x8b */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe4\xb8\x8b" },
	};
#endif
	void Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((UTouchButtonWidget*)Obj)->bPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTouchButtonWidget), &Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "Comment", "/** * \xe7\xa6\x81\xe7\x94\xa8 */" },
		{ "ModuleRelativePath", "Public/Widgets/TouchButtonWidget.h" },
		{ "ToolTip", "\xe7\xa6\x81\xe7\x94\xa8" },
	};
#endif
	void Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UTouchButtonWidget*)Obj)->bDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTouchButtonWidget), &Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchButtonWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SizeBoxWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_ImageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_SlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_PressedSlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_DisabledSlateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_TouchFingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressedHandover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchButtonWidget_Statics::NewProp_bDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchButtonWidget_Statics::ClassParams = {
		&UTouchButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTouchButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchButtonWidget()
	{
		if (!Z_Registration_Info_UClass_UTouchButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchButtonWidget.OuterSingleton, Z_Construct_UClass_UTouchButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchButtonWidget.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<UTouchButtonWidget>()
	{
		return UTouchButtonWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchButtonWidget);
	struct Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchButtonWidget, UTouchButtonWidget::StaticClass, TEXT("UTouchButtonWidget"), &Z_Registration_Info_UClass_UTouchButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchButtonWidget), 3374407713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchButtonWidget_h_2291485803(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
