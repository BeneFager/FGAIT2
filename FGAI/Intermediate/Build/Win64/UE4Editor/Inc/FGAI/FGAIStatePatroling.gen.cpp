// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/StateMachine/FGAIStatePatroling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAIStatePatroling() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGAIStatePatroling_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStatePatroling();
	FGAI_API UClass* Z_Construct_UClass_UFGAIStateBase();
	UPackage* Z_Construct_UPackage__Script_FGAI();
// End Cross Module References
	void UFGAIStatePatroling::StaticRegisterNativesUFGAIStatePatroling()
	{
	}
	UClass* Z_Construct_UClass_UFGAIStatePatroling_NoRegister()
	{
		return UFGAIStatePatroling::StaticClass();
	}
	struct Z_Construct_UClass_UFGAIStatePatroling_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAIStatePatroling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGAIStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAIStatePatroling_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/StateMachine/FGAIStatePatroling.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/StateMachine/FGAIStatePatroling.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAIStatePatroling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAIStatePatroling>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAIStatePatroling_Statics::ClassParams = {
		&UFGAIStatePatroling::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAIStatePatroling_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAIStatePatroling_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAIStatePatroling()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAIStatePatroling_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAIStatePatroling, 438492179);
	template<> FGAI_API UClass* StaticClass<UFGAIStatePatroling>()
	{
		return UFGAIStatePatroling::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAIStatePatroling(Z_Construct_UClass_UFGAIStatePatroling, &UFGAIStatePatroling::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGAIStatePatroling"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAIStatePatroling);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
