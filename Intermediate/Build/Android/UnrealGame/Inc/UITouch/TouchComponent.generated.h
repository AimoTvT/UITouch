// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UITOUCH_TouchComponent_generated_h
#error "TouchComponent.generated.h already included, missing '#pragma once' in TouchComponent.h"
#endif
#define UITOUCH_TouchComponent_generated_h

#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_42_DELEGATE \
struct TouchComponent_eventTouchDynmic_Parms \
{ \
	FVector Moved; \
	uint8 FingerIndex; \
}; \
static inline void FTouchDynmic_DelegateWrapper(const FMulticastScriptDelegate& TouchDynmic, FVector Moved, uint8 FingerIndex) \
{ \
	TouchComponent_eventTouchDynmic_Parms Parms; \
	Parms.Moved=Moved; \
	Parms.FingerIndex=FingerIndex; \
	TouchDynmic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_45_DELEGATE \
struct TouchComponent_eventOnTouchDynmic_Parms \
{ \
	FVector Moved; \
	uint8 FingerIndex; \
}; \
static inline void FOnTouchDynmic_DelegateWrapper(const FMulticastScriptDelegate& OnTouchDynmic, FVector Moved, uint8 FingerIndex) \
{ \
	TouchComponent_eventOnTouchDynmic_Parms Parms; \
	Parms.Moved=Moved; \
	Parms.FingerIndex=FingerIndex; \
	OnTouchDynmic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_48_DELEGATE \
struct TouchComponent_eventOnIndexTouchDynmic_Parms \
{ \
	FVector Moved; \
}; \
static inline void FOnIndexTouchDynmic_DelegateWrapper(const FMulticastScriptDelegate& OnIndexTouchDynmic, FVector Moved) \
{ \
	TouchComponent_eventOnIndexTouchDynmic_Parms Parms; \
	Parms.Moved=Moved; \
	OnIndexTouchDynmic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_SPARSE_DATA
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTouchIndex); \
	DECLARE_FUNCTION(execTouch);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTouchIndex); \
	DECLARE_FUNCTION(execTouch);


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchComponent(); \
	friend struct Z_Construct_UClass_UTouchComponent_Statics; \
public: \
	DECLARE_CLASS(UTouchComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchComponent)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUTouchComponent(); \
	friend struct Z_Construct_UClass_UTouchComponent_Statics; \
public: \
	DECLARE_CLASS(UTouchComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UITouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchComponent)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchComponent(UTouchComponent&&); \
	NO_API UTouchComponent(const UTouchComponent&); \
public:


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchComponent(UTouchComponent&&); \
	NO_API UTouchComponent(const UTouchComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTouchComponent)


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_31_PROLOG
#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_RPC_WRAPPERS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_INCLASS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_SPARSE_DATA \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UITOUCH_API UClass* StaticClass<class UTouchComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UITouch_Source_UITouch_Components_TouchComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
