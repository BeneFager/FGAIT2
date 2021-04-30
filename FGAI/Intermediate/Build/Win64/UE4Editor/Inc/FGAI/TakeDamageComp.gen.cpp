// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/Components/TakeDamageComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeDamageComp() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UTakeDamageComp_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UTakeDamageComp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTakeDamageComp::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_OBJECT(AActor,Z_Param_Instagator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_Damage,Z_Param_Hit,Z_Param_Instagator);
		P_NATIVE_END;
	}
	void UTakeDamageComp::StaticRegisterNativesUTakeDamageComp()
	{
		UClass* Class = UTakeDamageComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &UTakeDamageComp::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics
	{
		struct TakeDamageComp_eventTakeDamage_Parms
		{
			float Damage;
			FHitResult Hit;
			AActor* Instagator;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instagator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeDamageComp_eventTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeDamageComp_eventTakeDamage_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Instagator = { "Instagator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TakeDamageComp_eventTakeDamage_Parms, Instagator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::NewProp_Instagator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/TakeDamageComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeDamageComp, nullptr, "TakeDamage", nullptr, nullptr, sizeof(TakeDamageComp_eventTakeDamage_Parms), Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeDamageComp_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTakeDamageComp_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTakeDamageComp_NoRegister()
	{
		return UTakeDamageComp::StaticClass();
	}
	struct Z_Construct_UClass_UTakeDamageComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeDamageComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeDamageComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeDamageComp_TakeDamage, "TakeDamage" }, // 1906441118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeDamageComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/TakeDamageComp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/TakeDamageComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeDamageComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeDamageComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTakeDamageComp_Statics::ClassParams = {
		&UTakeDamageComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeDamageComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeDamageComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeDamageComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTakeDamageComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTakeDamageComp, 931699503);
	template<> FGAI_API UClass* StaticClass<UTakeDamageComp>()
	{
		return UTakeDamageComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTakeDamageComp(Z_Construct_UClass_UTakeDamageComp, &UTakeDamageComp::StaticClass, TEXT("/Script/FGAI"), TEXT("UTakeDamageComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeDamageComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
