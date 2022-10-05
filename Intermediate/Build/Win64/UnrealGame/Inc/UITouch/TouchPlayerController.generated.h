// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UITOUCH_TouchPlayerController_generated_h
#error "TouchPlayerController.generated.h already included, missing '#pragma once' in TouchPlayerController.h"
#endif
#define UITOUCH_TouchPlayerController_generated_h

#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTouchMove); \
	DECLARE_FUNCTION(execTouchReleased); \
	DECLARE_FUNCTION(execTouchPressed);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTouchMove); \
	DECLARE_FUNCTION(execTouchReleased); \
	DECLARE_FUNCTION(execTouchPressed);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchPlayerController(); \
	friend struct Z_Construct_UClass_ATouchPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATouchPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchPlayerController)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_INCLASS \
private: \
	static void StaticRegisterNativesATouchPlayerController(); \
	friend struct Z_Construct_UClass_ATouchPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATouchPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchPlayerController)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATouchPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchPlayerController(ATouchPlayerController&&); \
	NO_API ATouchPlayerController(const ATouchPlayerController&); \
public:


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchPlayerController(ATouchPlayerController&&); \
	NO_API ATouchPlayerController(const ATouchPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATouchPlayerController)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_32_PROLOG
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_INCLASS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UITOUCH_API UClass* StaticClass<class ATouchPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UITouch_Source_UITouch_Public_TouchPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
