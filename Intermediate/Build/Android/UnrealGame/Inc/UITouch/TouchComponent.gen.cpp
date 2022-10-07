// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Public/Components/TouchComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchComponent() {}
// Cross Module References
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature();
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UITouch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics
	{
		struct TouchComponent_eventTouchDynmic_Parms
		{
			FVector Moved;
			uint8 FingerIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouchDynmic_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouchDynmic_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** * \xe6\x8e\xa5\xe6\x94\xb6\xe9\x80\x9a\xe8\xae\xaf\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe6\x8e\xa5\xe6\x94\xb6\xe9\x80\x9a\xe8\xae\xaf\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchComponent, nullptr, "TouchDynmic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::TouchComponent_eventTouchDynmic_Parms), Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics
	{
		struct TouchComponent_eventOnTouchDynmic_Parms
		{
			FVector Moved;
			uint8 FingerIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventOnTouchDynmic_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventOnTouchDynmic_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchComponent, nullptr, "OnTouchDynmic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::TouchComponent_eventOnTouchDynmic_Parms), Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics
	{
		struct TouchComponent_eventOnIndexTouchDynmic_Parms
		{
			FVector Moved;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventOnIndexTouchDynmic_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::NewProp_Moved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchComponent, nullptr, "OnIndexTouchDynmic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::TouchComponent_eventOnIndexTouchDynmic_Parms), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTouchComponent::execTouchIndex)
	{
		P_GET_STRUCT(FVector,Z_Param_Moved);
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchIndex(Z_Param_Moved,Z_Param_FingerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTouchComponent::execTouch)
	{
		P_GET_STRUCT(FVector,Z_Param_Moved);
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Touch(Z_Param_Moved,Z_Param_FingerIndex);
		P_NATIVE_END;
	}
	void UTouchComponent::StaticRegisterNativesUTouchComponent()
	{
		UClass* Class = UTouchComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Touch", &UTouchComponent::execTouch },
			{ "TouchIndex", &UTouchComponent::execTouchIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTouchComponent_Touch_Statics
	{
		struct TouchComponent_eventTouch_Parms
		{
			FVector Moved;
			uint8 FingerIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchComponent_Touch_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouch_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchComponent_Touch_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouch_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchComponent_Touch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchComponent_Touch_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchComponent_Touch_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchComponent_Touch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchComponent_Touch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchComponent, nullptr, "Touch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchComponent_Touch_Statics::TouchComponent_eventTouch_Parms), Z_Construct_UFunction_UTouchComponent_Touch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchComponent_Touch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchComponent_Touch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchComponent_Touch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchComponent_Touch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchComponent_Touch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics
	{
		struct TouchComponent_eventTouchIndex_Parms
		{
			FVector Moved;
			uint8 FingerIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouchIndex_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchComponent_eventTouchIndex_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchComponent, nullptr, "TouchIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::TouchComponent_eventTouchIndex_Parms), Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchComponent_TouchIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchComponent_TouchIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchComponent);
	UClass* Z_Construct_UClass_UTouchComponent_NoRegister()
	{
		return UTouchComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTouchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllTouch_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPressedTouch_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch1_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch2_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch3_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch4_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch5_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch6_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch7_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch8_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch9_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTouch10_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouch10;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTouchComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, "OnIndexTouchDynmic__DelegateSignature" }, // 1830850696
		{ &Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature, "OnTouchDynmic__DelegateSignature" }, // 1380647458
		{ &Z_Construct_UFunction_UTouchComponent_Touch, "Touch" }, // 2395527047
		{ &Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature, "TouchDynmic__DelegateSignature" }, // 1288974554
		{ &Z_Construct_UFunction_UTouchComponent_TouchIndex, "TouchIndex" }, // 941820814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchComponent" },
		{ "IncludePath", "Components/TouchComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnAllTouch_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe6\x8e\xa5\xe6\x94\xb6\xe9\x80\x9a\xe8\xae\xaf\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe6\x8e\xa5\xe6\x94\xb6\xe9\x80\x9a\xe8\xae\xaf\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnAllTouch = { "OnAllTouch", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnAllTouch), Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnAllTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnAllTouch_MetaData)) }; // 1288974554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnPressedTouch_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnPressedTouch = { "OnPressedTouch", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnPressedTouch), Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnPressedTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnPressedTouch_MetaData)) }; // 1380647458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch1_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch1 = { "OnTouch1", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch1), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch1_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch2_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch2 = { "OnTouch2", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch2), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch2_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch3_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch3 = { "OnTouch3", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch3), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch3_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch4_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch4 = { "OnTouch4", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch4), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch4_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch5_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch5 = { "OnTouch5", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch5), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch5_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch6_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch6 = { "OnTouch6", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch6), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch6_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch7_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch7 = { "OnTouch7", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch7), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch7_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch8_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch8 = { "OnTouch8", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch8), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch8_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch9_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch9 = { "OnTouch9", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch9), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch9_MetaData)) }; // 1830850696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch10_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Public/Components/TouchComponent.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch10 = { "OnTouch10", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchComponent, OnTouch10), Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch10_MetaData)) }; // 1830850696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnAllTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnPressedTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchComponent_Statics::NewProp_OnTouch10,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchComponent_Statics::ClassParams = {
		&UTouchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTouchComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchComponent()
	{
		if (!Z_Registration_Info_UClass_UTouchComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchComponent.OuterSingleton, Z_Construct_UClass_UTouchComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchComponent.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<UTouchComponent>()
	{
		return UTouchComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Components_TouchComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Components_TouchComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchComponent, UTouchComponent::StaticClass, TEXT("UTouchComponent"), &Z_Registration_Info_UClass_UTouchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchComponent), 521532052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Components_TouchComponent_h_4281864246(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Components_TouchComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Components_TouchComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
