// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUITouch_init() {}
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature();
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature();
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature();
	UITOUCH_API UFunction* Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UITouch;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UITouch()
	{
		if (!Z_Registration_Info_UPackage__Script_UITouch.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchComponent_OnIndexTouchDynmic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchComponent_OnTouchDynmic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchComponent_TouchDynmic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTouchWidget_OnPressed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UITouch",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8B21CEE0,
				0x5E7E3191,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UITouch.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UITouch.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UITouch(Z_Construct_UPackage__Script_UITouch, TEXT("/Script/UITouch"), Z_Registration_Info_UPackage__Script_UITouch, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8B21CEE0, 0x5E7E3191));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
