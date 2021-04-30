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
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGDamageSensingResults();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGVisionSensingResults();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGNavMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UDamageSenseComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGHearingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UTakeDamageComp_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFGEnemy::execHandleHearingSense)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHearingSense();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGEnemy::execHandleDamageSense)
	{
		P_GET_STRUCT_REF(FFGDamageSensingResults,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamageSense(Z_Param_Out_Results);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGEnemy::execHandleVisionSense)
	{
		P_GET_STRUCT_REF(FFGVisionSensingResults,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVisionSense(Z_Param_Out_Results);
		P_NATIVE_END;
	}
	void AFGEnemy::StaticRegisterNativesAFGEnemy()
	{
		UClass* Class = AFGEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDamageSense", &AFGEnemy::execHandleDamageSense },
			{ "HandleHearingSense", &AFGEnemy::execHandleHearingSense },
			{ "HandleVisionSense", &AFGEnemy::execHandleVisionSense },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics
	{
		struct FGEnemy_eventHandleDamageSense_Parms
		{
			FFGDamageSensingResults Results;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEnemy_eventHandleDamageSense_Parms, Results), Z_Construct_UScriptStruct_FFGDamageSensingResults, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, nullptr, "HandleDamageSense", nullptr, nullptr, sizeof(FGEnemy_eventHandleDamageSense_Parms), Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_HandleDamageSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_HandleDamageSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, nullptr, "HandleHearingSense", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_HandleHearingSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_HandleHearingSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics
	{
		struct FGEnemy_eventHandleVisionSense_Parms
		{
			FFGVisionSensingResults Results;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEnemy_eventHandleVisionSense_Parms, Results), Z_Construct_UScriptStruct_FFGVisionSensingResults, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, nullptr, "HandleVisionSense", nullptr, nullptr, sizeof(FGEnemy_eventHandleVisionSense_Parms), Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_HandleVisionSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_HandleVisionSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEnemy_NoRegister()
	{
		return AFGEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFGEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseDamageComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenseDamageComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HearingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeDamageComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakeDamageComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEnemy_HandleDamageSense, "HandleDamageSense" }, // 3634234437
		{ &Z_Construct_UFunction_AFGEnemy_HandleHearingSense, "HandleHearingSense" }, // 887164963
		{ &Z_Construct_UFunction_AFGEnemy_HandleVisionSense, "HandleVisionSense" }, // 3741250843
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp = { "SenseDamageComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, SenseDamageComp), Z_Construct_UClass_UDamageSenseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_HearingComponent_MetaData[] = {
		{ "Category", "FGEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_HearingComponent = { "HearingComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEnemy, HearingComponent), Z_Construct_UClass_UFGHearingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_HearingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_HearingComponent_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_VisionSensingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_NavMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_SenseDamageComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_HearingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_TakeDamageComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_HealthComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEnemy_Statics::ClassParams = {
		&AFGEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AFGEnemy, 3874037068);
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
