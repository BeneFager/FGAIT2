// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGDamageSensingResults;
struct FFGVisionSensingResults;
#ifdef FGAI_TargetingComponent_generated_h
#error "TargetingComponent.generated.h already included, missing '#pragma once' in TargetingComponent.h"
#endif
#define FGAI_TargetingComponent_generated_h

#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_SPARSE_DATA
#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleHearingSense); \
	DECLARE_FUNCTION(execHandleDamageSense); \
	DECLARE_FUNCTION(execHandleVisionSense);


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleHearingSense); \
	DECLARE_FUNCTION(execHandleDamageSense); \
	DECLARE_FUNCTION(execHandleVisionSense);


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct Z_Construct_UClass_UTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct Z_Construct_UClass_UTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingComponent(UTargetingComponent&&); \
	NO_API UTargetingComponent(const UTargetingComponent&); \
public:


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingComponent(UTargetingComponent&&); \
	NO_API UTargetingComponent(const UTargetingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingComponent)


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(UTargetingComponent, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__VisionSensingComponent() { return STRUCT_OFFSET(UTargetingComponent, VisionSensingComponent); } \
	FORCEINLINE static uint32 __PPO__SenseDamageComp() { return STRUCT_OFFSET(UTargetingComponent, SenseDamageComp); } \
	FORCEINLINE static uint32 __PPO__HearingComponent() { return STRUCT_OFFSET(UTargetingComponent, HearingComponent); }


#define FGAI_Source_FGAI_Components_TargetingComponent_h_14_PROLOG
#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_SPARSE_DATA \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_RPC_WRAPPERS \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_INCLASS \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_Components_TargetingComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_SPARSE_DATA \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_TargetingComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UTargetingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_Components_TargetingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
