// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AActor;
#ifdef FGAI_TakeDamageComp_generated_h
#error "TakeDamageComp.generated.h already included, missing '#pragma once' in TakeDamageComp.h"
#endif
#define FGAI_TakeDamageComp_generated_h

#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_SPARSE_DATA
#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeDamageComp(); \
	friend struct Z_Construct_UClass_UTakeDamageComp_Statics; \
public: \
	DECLARE_CLASS(UTakeDamageComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UTakeDamageComp)


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTakeDamageComp(); \
	friend struct Z_Construct_UClass_UTakeDamageComp_Statics; \
public: \
	DECLARE_CLASS(UTakeDamageComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UTakeDamageComp)


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeDamageComp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeDamageComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeDamageComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeDamageComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeDamageComp(UTakeDamageComp&&); \
	NO_API UTakeDamageComp(const UTakeDamageComp&); \
public:


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeDamageComp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeDamageComp(UTakeDamageComp&&); \
	NO_API UTakeDamageComp(const UTakeDamageComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeDamageComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeDamageComp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeDamageComp)


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_PRIVATE_PROPERTY_OFFSET
#define FGAI_Source_FGAI_Components_TakeDamageComp_h_11_PROLOG
#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_SPARSE_DATA \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_RPC_WRAPPERS \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_INCLASS \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_Components_TakeDamageComp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_SPARSE_DATA \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_Components_TakeDamageComp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UTakeDamageComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_Components_TakeDamageComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
