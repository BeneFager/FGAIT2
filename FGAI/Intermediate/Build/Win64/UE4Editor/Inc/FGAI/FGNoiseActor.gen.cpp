// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGNoiseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNoiseActor() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_AFGNoiseActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_AFGNoiseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFGNoiseActor::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGNoiseActor::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void AFGNoiseActor::StaticRegisterNativesAFGNoiseActor()
	{
		UClass* Class = AFGNoiseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AFGNoiseActor::execBeginPlay },
			{ "Tick", &AFGNoiseActor::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNoiseActor, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNoiseActor_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNoiseActor_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNoiseActor_Tick_Statics
	{
		struct FGNoiseActor_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNoiseActor_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNoiseActor, nullptr, "Tick", nullptr, nullptr, sizeof(FGNoiseActor_eventTick_Parms), Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNoiseActor_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNoiseActor_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNoiseActor_NoRegister()
	{
		return AFGNoiseActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGNoiseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNoiseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNoiseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNoiseActor_BeginPlay, "BeginPlay" }, // 113080058
		{ &Z_Construct_UFunction_AFGNoiseActor_Tick, "Tick" }, // 1767641438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Sensing/FGNoiseActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "FGNoiseActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData[] = {
		{ "Category", "Hearing" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, StartRadius), METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "FGNoiseActor" },
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, ActorToSpawn), Z_Construct_UClass_AFGNoiseActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGNoiseActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNoiseActor, NoiseInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_StartRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNoiseActor_Statics::NewProp_NoiseInstigator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNoiseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNoiseActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNoiseActor_Statics::ClassParams = {
		&AFGNoiseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGNoiseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNoiseActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNoiseActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNoiseActor, 532033509);
	template<> FGAI_API UClass* StaticClass<AFGNoiseActor>()
	{
		return AFGNoiseActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNoiseActor(Z_Construct_UClass_AFGNoiseActor, &AFGNoiseActor::StaticClass, TEXT("/Script/FGAI"), TEXT("AFGNoiseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNoiseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
