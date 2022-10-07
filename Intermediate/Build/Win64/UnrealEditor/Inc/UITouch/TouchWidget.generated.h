// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UITOUCH_TouchWidget_generated_h
#error "TouchWidget.generated.h already included, missing '#pragma once' in TouchWidget.h"
#endif
#define UITOUCH_TouchWidget_generated_h

#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_44_DELEGATE \
struct TouchWidget_eventOnPressed_Parms \
{ \
	FVector Moved; \
}; \
static inline void FOnPressed_DelegateWrapper(const FMulticastScriptDelegate& OnPressed, FVector Moved) \
{ \
	TouchWidget_eventOnPressed_Parms Parms; \
	Parms.Moved=Moved; \
	OnPressed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTouchLocation); \
	DECLARE_FUNCTION(execTouchMoved); \
	DECLARE_FUNCTION(execSetIndexTouchDelegate); \
	DECLARE_FUNCTION(execTouchIndex); \
	DECLARE_FUNCTION(execBindTouchDelegate);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTouchLocation); \
	DECLARE_FUNCTION(execTouchMoved); \
	DECLARE_FUNCTION(execSetIndexTouchDelegate); \
	DECLARE_FUNCTION(execTouchIndex); \
	DECLARE_FUNCTION(execBindTouchDelegate);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchWidget(); \
	friend struct Z_Construct_UClass_UTouchWidget_Statics; \
public: \
	DECLARE_CLASS(UTouchWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchWidget)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUTouchWidget(); \
	friend struct Z_Construct_UClass_UTouchWidget_Statics; \
public: \
	DECLARE_CLASS(UTouchWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchWidget)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchWidget(UTouchWidget&&); \
	NO_API UTouchWidget(const UTouchWidget&); \
public:


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchWidget(UTouchWidget&&); \
	NO_API UTouchWidget(const UTouchWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchWidget)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_32_PROLOG
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_INCLASS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UITOUCH_API UClass* StaticClass<class UTouchWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UITouch_Source_UITouch_Public_Widgets_TouchWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
