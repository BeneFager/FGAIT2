// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/LibBp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLibBp() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_ULibBp_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_ULibBp();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULibBp::execSpawnNoiseA)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldObj);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(AActor,Z_Param_NoiseInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULibBp::SpawnNoiseA(Z_Param_WorldObj,Z_Param_Location,Z_Param_NoiseInstigator);
		P_NATIVE_END;
	}
	void ULibBp::StaticRegisterNativesULibBp()
	{
		UClass* Class = ULibBp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnNoiseA", &ULibBp::execSpawnNoiseA },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics
	{
		struct LibBp_eventSpawnNoiseA_Parms
		{
			const UObject* WorldObj;
			FVector Location;
			AActor* NoiseInstigator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldObj;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_WorldObj_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_WorldObj = { "WorldObj", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LibBp_eventSpawnNoiseA_Parms, WorldObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_WorldObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_WorldObj_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LibBp_eventSpawnNoiseA_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LibBp_eventSpawnNoiseA_Parms, NoiseInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_WorldObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoiseSource" },
		{ "ModuleRelativePath", "LibBp.h" },
		{ "Worldcontext", "WorldObj" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULibBp, nullptr, "SpawnNoiseA", nullptr, nullptr, sizeof(LibBp_eventSpawnNoiseA_Parms), Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULibBp_SpawnNoiseA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULibBp_SpawnNoiseA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULibBp_NoRegister()
	{
		return ULibBp::StaticClass();
	}
	struct Z_Construct_UClass_ULibBp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULibBp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULibBp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULibBp_SpawnNoiseA, "SpawnNoiseA" }, // 1435045614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULibBp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LibBp.h" },
		{ "ModuleRelativePath", "LibBp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULibBp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULibBp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULibBp_Statics::ClassParams = {
		&ULibBp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULibBp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULibBp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULibBp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULibBp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULibBp, 137905755);
	template<> FGAI_API UClass* StaticClass<ULibBp>()
	{
		return ULibBp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULibBp(Z_Construct_UClass_ULibBp, &ULibBp::StaticClass, TEXT("/Script/FGAI"), TEXT("ULibBp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULibBp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
