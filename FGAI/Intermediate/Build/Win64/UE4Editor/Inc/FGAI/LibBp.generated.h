// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
#ifdef FGAI_LibBp_generated_h
#error "LibBp.generated.h already included, missing '#pragma once' in LibBp.h"
#endif
#define FGAI_LibBp_generated_h

#define FGAI_Source_FGAI_LibBp_h_10_SPARSE_DATA
#define FGAI_Source_FGAI_LibBp_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnNoiseA);


#define FGAI_Source_FGAI_LibBp_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnNoiseA);


#define FGAI_Source_FGAI_LibBp_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULibBp(); \
	friend struct Z_Construct_UClass_ULibBp_Statics; \
public: \
	DECLARE_CLASS(ULibBp, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(ULibBp)


#define FGAI_Source_FGAI_LibBp_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULibBp(); \
	friend struct Z_Construct_UClass_ULibBp_Statics; \
public: \
	DECLARE_CLASS(ULibBp, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(ULibBp)


#define FGAI_Source_FGAI_LibBp_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULibBp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULibBp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULibBp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULibBp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULibBp(ULibBp&&); \
	NO_API ULibBp(const ULibBp&); \
public:


#define FGAI_Source_FGAI_LibBp_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULibBp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULibBp(ULibBp&&); \
	NO_API ULibBp(const ULibBp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULibBp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULibBp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULibBp)


#define FGAI_Source_FGAI_LibBp_h_10_PRIVATE_PROPERTY_OFFSET
#define FGAI_Source_FGAI_LibBp_h_7_PROLOG
#define FGAI_Source_FGAI_LibBp_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_LibBp_h_10_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_LibBp_h_10_SPARSE_DATA \
	FGAI_Source_FGAI_LibBp_h_10_RPC_WRAPPERS \
	FGAI_Source_FGAI_LibBp_h_10_INCLASS \
	FGAI_Source_FGAI_LibBp_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_LibBp_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_LibBp_h_10_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_LibBp_h_10_SPARSE_DATA \
	FGAI_Source_FGAI_LibBp_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_LibBp_h_10_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_LibBp_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class ULibBp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_LibBp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
