// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/FGEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnemy() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_AFGEnemy();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGNavMovementComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UDamageSenseComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UTakeDamageComp_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGStateMachineComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
// End Cross Module References
	void AFGEnemy::StaticRegisterNativesAFGEnemy()
	{
	}
	UClass* Z_Construct_UClass_AFGEnemy_NoRegister()
	{
		return AFGEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFGEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionSensingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisionSensingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseDamageComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenseDamageComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeDamageComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakeDamageComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGEnemy.h" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent_MetaData[] = {
		{ "Category", "Vision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent = { "VisionSensingComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, VisionSensingComponent), Z_Construct_UClass_UFGVisionSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent = { "NavMovementComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, NavMovementComponent), Z_Construct_UClass_UFGNavMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp = { "SenseDamageComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, SenseDamageComp), Z_Construct_UClass_UDamageSenseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp = { "TakeDamageComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, TakeDamageComp), Z_Construct_UClass_UTakeDamageComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_StateMachineComponent_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_StateMachineComponent = { "StateMachineComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, StateMachineComponent), Z_Construct_UClass_UFGStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_StateMachineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_StateMachineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_TargetingComponent_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_TargetingComponent = { "TargetingComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, TargetingComponent), Z_Construct_UClass_UTargetingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_TargetingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_TargetingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_StateMachineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_TargetingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEnemy_Statics::ClassParams = {
		&AFGEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEnemy, 320639349);
	template<> FGAI_API UClass* StaticClass<AFGEnemy>()
	{
		return AFGEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEnemy(Z_Construct_UClass_AFGEnemy, &AFGEnemy::StaticClass, TEXT("/Script/FGAI"), TEXT("AFGEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
