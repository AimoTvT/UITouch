// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Public/TouchPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchPlayerController() {}
// Cross Module References
	UITOUCH_API UClass* Z_Construct_UClass_ATouchPlayerController_NoRegister();
	UITOUCH_API UClass* Z_Construct_UClass_ATouchPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UITouch();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATouchPlayerController::execTouchMove)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchMove(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATouchPlayerController::execTouchReleased)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchReleased(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATouchPlayerController::execTouchPressed)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchPressed(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Location);
		P_NATIVE_END;
	}
	void ATouchPlayerController::StaticRegisterNativesATouchPlayerController()
	{
		UClass* Class = ATouchPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TouchMove", &ATouchPlayerController::execTouchMove },
			{ "TouchPressed", &ATouchPlayerController::execTouchPressed },
			{ "TouchReleased", &ATouchPlayerController::execTouchReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics
	{
		struct TouchPlayerController_eventTouchMove_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			FVector Location;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchMove_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchMove_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x91\xb8\xe7\xa7\xbb\xe5\x8a\xa8 */" },
		{ "ModuleRelativePath", "Public/TouchPlayerController.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x91\xb8\xe7\xa7\xbb\xe5\x8a\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATouchPlayerController, nullptr, "TouchMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::TouchPlayerController_eventTouchMove_Parms), Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATouchPlayerController_TouchMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATouchPlayerController_TouchMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics
	{
		struct TouchPlayerController_eventTouchPressed_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			FVector Location;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchPressed_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchPressed_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x91\xb8\xe6\x8c\x89\xe4\xb8\x8b */" },
		{ "ModuleRelativePath", "Public/TouchPlayerController.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x91\xb8\xe6\x8c\x89\xe4\xb8\x8b" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATouchPlayerController, nullptr, "TouchPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::TouchPlayerController_eventTouchPressed_Parms), Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATouchPlayerController_TouchPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATouchPlayerController_TouchPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics
	{
		struct TouchPlayerController_eventTouchReleased_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			FVector Location;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchReleased_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchPlayerController_eventTouchReleased_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe6\x91\xb8\xe6\x9d\xbe\xe5\xbc\x80 */" },
		{ "ModuleRelativePath", "Public/TouchPlayerController.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe6\x91\xb8\xe6\x9d\xbe\xe5\xbc\x80" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATouchPlayerController, nullptr, "TouchReleased", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::TouchPlayerController_eventTouchReleased_Parms), Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATouchPlayerController_TouchReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATouchPlayerController_TouchReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATouchPlayerController);
	UClass* Z_Construct_UClass_ATouchPlayerController_NoRegister()
	{
		return ATouchPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATouchPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TouchComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATouchPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATouchPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATouchPlayerController_TouchMove, "TouchMove" }, // 2857267915
		{ &Z_Construct_UFunction_ATouchPlayerController_TouchPressed, "TouchPressed" }, // 3610698536
		{ &Z_Construct_UFunction_ATouchPlayerController_TouchReleased, "TouchReleased" }, // 2086677547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATouchPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TouchPlayerController.h" },
		{ "ModuleRelativePath", "Public/TouchPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATouchPlayerController_Statics::NewProp_TouchComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aimo|Variable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TouchPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATouchPlayerController_Statics::NewProp_TouchComponent = { "TouchComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATouchPlayerController, TouchComponent), Z_Construct_UClass_UTouchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATouchPlayerController_Statics::NewProp_TouchComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATouchPlayerController_Statics::NewProp_TouchComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATouchPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATouchPlayerController_Statics::NewProp_TouchComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATouchPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATouchPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATouchPlayerController_Statics::ClassParams = {
		&ATouchPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATouchPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATouchPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATouchPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATouchPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATouchPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATouchPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATouchPlayerController.OuterSingleton, Z_Construct_UClass_ATouchPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATouchPlayerController.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<ATouchPlayerController>()
	{
		return ATouchPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchPlayerController);
	struct Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATouchPlayerController, ATouchPlayerController::StaticClass, TEXT("ATouchPlayerController"), &Z_Registration_Info_UClass_ATouchPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATouchPlayerController), 1703950611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_756658167(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SSS5Cpp_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
