// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGDamageSensingResults;
#ifdef FGAI_DamageSenseComponent_generated_h
#error "DamageSenseComponent.generated.h already included, missing '#pragma once' in DamageSenseComponent.h"
#endif
#define FGAI_DamageSenseComponent_generated_h

#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics; \
	FGAI_API static class UScriptStruct* StaticStruct();


template<> FGAI_API UScriptStruct* StaticStruct<struct FFGDamageSensingResults>();

#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_21_DELEGATE \
struct _Script_FGAI_eventFGDamageSensingDelegate_Parms \
{ \
	FFGDamageSensingResults Results; \
}; \
static inline void FFGDamageSensingDelegate_DelegateWrapper(const FMulticastScriptDelegate& FGDamageSensingDelegate, FFGDamageSensingResults const& Results) \
{ \
	_Script_FGAI_eventFGDamageSensingDelegate_Parms Parms; \
	Parms.Results=Results; \
	FGDamageSensingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_SPARSE_DATA
#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_RPC_WRAPPERS
#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageSenseComponent(); \
	friend struct Z_Construct_UClass_UDamageSenseComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageSenseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UDamageSenseComponent)


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDamageSenseComponent(); \
	friend struct Z_Construct_UClass_UDamageSenseComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageSenseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UDamageSenseComponent)


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageSenseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageSenseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageSenseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSenseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageSenseComponent(UDamageSenseComponent&&); \
	NO_API UDamageSenseComponent(const UDamageSenseComponent&); \
public:


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageSenseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageSenseComponent(UDamageSenseComponent&&); \
	NO_API UDamageSenseComponent(const UDamageSenseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageSenseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSenseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageSenseComponent)


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_23_PROLOG
#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_SPARSE_DATA \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_RPC_WRAPPERS \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_INCLASS \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_SPARSE_DATA \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_DamageSenseComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UDamageSenseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_Components_DamageSenseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
