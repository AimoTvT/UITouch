// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITouch/Widgets/TouchWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchWidget() {}
// Cross Module References
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UITOUCH_API UClass* Z_Construct_UClass_UTouchWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UITouch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics
	{
		struct TouchWidget_eventOnPressed_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventOnPressed_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::NewProp_Moved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x8c\x87\xe5\xae\x9a\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "OnPressed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::TouchWidget_eventOnPressed_Parms), Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTouchWidget::execIsTouchLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTouchLocation(Z_Param_Moved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTouchWidget::execTouchMoved)
	{
		P_GET_STRUCT(FVector,Z_Param_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchMoved(Z_Param_Moved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTouchWidget::execSetIndexTouchDelegate)
	{
		P_GET_UBOOL(Z_Param_bDelegateBind);
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndexTouchDelegate(Z_Param_bDelegateBind,Z_Param_FingerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTouchWidget::execTouchIndex)
	{
		P_GET_STRUCT(FVector,Z_Param_Moved);
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TouchIndex(Z_Param_Moved,Z_Param_FingerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTouchWidget::execBindTouchDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindTouchDelegate();
		P_NATIVE_END;
	}
	void UTouchWidget::StaticRegisterNativesUTouchWidget()
	{
		UClass* Class = UTouchWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindTouchDelegate", &UTouchWidget::execBindTouchDelegate },
			{ "IsTouchLocation", &UTouchWidget::execIsTouchLocation },
			{ "SetIndexTouchDelegate", &UTouchWidget::execSetIndexTouchDelegate },
			{ "TouchIndex", &UTouchWidget::execTouchIndex },
			{ "TouchMoved", &UTouchWidget::execTouchMoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe5\x85\xa5\xe8\xa7\xa6\xe6\x8e\xa7\xe5\x8c\xba\xe5\x9f\x9f */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe5\x85\xa5\xe8\xa7\xa6\xe6\x8e\xa7\xe5\x8c\xba\xe5\x9f\x9f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "BindTouchDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchWidget_BindTouchDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchWidget_BindTouchDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics
	{
		struct TouchWidget_eventIsTouchLocation_Parms
		{
			FVector Moved;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventIsTouchLocation_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TouchWidget_eventIsTouchLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TouchWidget_eventIsTouchLocation_Parms), &Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe5\x85\xa5\xe8\xa7\xa6\xe6\x8e\xa7\xe5\x8c\xba\xe5\x9f\x9f */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe5\x85\xa5\xe8\xa7\xa6\xe6\x8e\xa7\xe5\x8c\xba\xe5\x9f\x9f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "IsTouchLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::TouchWidget_eventIsTouchLocation_Parms), Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchWidget_IsTouchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchWidget_IsTouchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics
	{
		struct TouchWidget_eventSetIndexTouchDelegate_Parms
		{
			bool bDelegateBind;
			uint8 FingerIndex;
		};
		static void NewProp_bDelegateBind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelegateBind;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_bDelegateBind_SetBit(void* Obj)
	{
		((TouchWidget_eventSetIndexTouchDelegate_Parms*)Obj)->bDelegateBind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_bDelegateBind = { "bDelegateBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TouchWidget_eventSetIndexTouchDelegate_Parms), &Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_bDelegateBind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventSetIndexTouchDelegate_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_bDelegateBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\xa6\xe6\x8e\xa7\xe6\x98\xaf\xe5\x90\xa6\xe7\xbb\x91\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\xa6\xe6\x8e\xa7\xe6\x98\xaf\xe5\x90\xa6\xe7\xbb\x91\xe5\xae\x9a" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "SetIndexTouchDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::TouchWidget_eventSetIndexTouchDelegate_Parms), Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics
	{
		struct TouchWidget_eventTouchIndex_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventTouchIndex_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventTouchIndex_Parms, FingerIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::NewProp_Moved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe6\x8e\xa5\xe6\x94\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe7\xb4\xa2\xe5\xbc\x95 */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe6\x8e\xa5\xe6\x94\xb6\xe8\xa7\xa6\xe5\x8f\x91\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "TouchIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::TouchWidget_eventTouchIndex_Parms), Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchWidget_TouchIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchWidget_TouchIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics
	{
		struct TouchWidget_eventTouchMoved_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TouchWidget_eventTouchMoved_Parms, Moved), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::NewProp_Moved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo|Function" },
		{ "Comment", "/** * \xe8\xa7\xa6\xe5\x8f\x91\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchWidget, nullptr, "TouchMoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::TouchWidget_eventTouchMoved_Parms), Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTouchWidget_TouchMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchWidget_TouchMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchWidget);
	UClass* Z_Construct_UClass_UTouchWidget_NoRegister()
	{
		return UTouchWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTouchWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalWidgetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWidgetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPressedLocation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UITouch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTouchWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchWidget_BindTouchDelegate, "BindTouchDelegate" }, // 3354206880
		{ &Z_Construct_UFunction_UTouchWidget_IsTouchLocation, "IsTouchLocation" }, // 232947103
		{ &Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature, "OnPressed__DelegateSignature" }, // 1987956299
		{ &Z_Construct_UFunction_UTouchWidget_SetIndexTouchDelegate, "SetIndexTouchDelegate" }, // 808452416
		{ &Z_Construct_UFunction_UTouchWidget_TouchIndex, "TouchIndex" }, // 3131151643
		{ &Z_Construct_UFunction_UTouchWidget_TouchMoved, "TouchMoved" }, // 3654325018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/TouchWidget.h" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchWidget_Statics::NewProp_LocalWidgetLocation_MetaData[] = {
		{ "Category", "Aimo|Variable" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchWidget_Statics::NewProp_LocalWidgetLocation = { "LocalWidgetLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchWidget, LocalWidgetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTouchWidget_Statics::NewProp_LocalWidgetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchWidget_Statics::NewProp_LocalWidgetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchWidget_Statics::NewProp_OnPressedLocation_MetaData[] = {
		{ "Category", "Aimo|On" },
		{ "Comment", "/** * \xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8 */" },
		{ "ModuleRelativePath", "Widgets/TouchWidget.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe6\x92\xad\xe6\x89\x80\xe6\x9c\x89\xe6\x8e\xa5\xe6\x94\xb6\xe5\x88\xb0\xe7\x9a\x84\xe8\xb0\x83\xe5\xba\xa6\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchWidget_Statics::NewProp_OnPressedLocation = { "OnPressedLocation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTouchWidget, OnPressedLocation), Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTouchWidget_Statics::NewProp_OnPressedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchWidget_Statics::NewProp_OnPressedLocation_MetaData)) }; // 1987956299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchWidget_Statics::NewProp_LocalWidgetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchWidget_Statics::NewProp_OnPressedLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchWidget_Statics::ClassParams = {
		&UTouchWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTouchWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchWidget()
	{
		if (!Z_Registration_Info_UClass_UTouchWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchWidget.OuterSingleton, Z_Construct_UClass_UTouchWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchWidget.OuterSingleton;
	}
	template<> UITOUCH_API UClass* StaticClass<UTouchWidget>()
	{
		return UTouchWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchWidget, UTouchWidget::StaticClass, TEXT("UTouchWidget"), &Z_Registration_Info_UClass_UTouchWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchWidget), 3409703780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchWidget_h_646111498(TEXT("/Script/UITouch"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UITouch_Source_UITouch_Widgets_TouchWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
