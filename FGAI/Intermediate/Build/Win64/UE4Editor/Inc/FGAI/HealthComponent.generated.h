// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define FGAI_HealthComponent_generated_h

#define FGAI_Source_FGAI_Components_HealthComponent_h_13_SPARSE_DATA
#define FGAI_Source_FGAI_Components_HealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldDie);


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldDie);


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent)


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define FGAI_Source_FGAI_Components_HealthComponent_h_10_PROLOG
#define FGAI_Source_FGAI_Components_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_SPARSE_DATA \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_RPC_WRAPPERS \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_INCLASS \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_Components_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_SPARSE_DATA \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
