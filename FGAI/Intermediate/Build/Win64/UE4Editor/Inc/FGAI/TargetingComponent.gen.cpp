// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/Components/TargetingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingComponent() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UTargetingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGDamageSensingResults();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGVisionSensingResults();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UDamageSenseComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTargetingComponent::execHandleDamageSense)
	{
		P_GET_STRUCT_REF(FFGDamageSensingResults,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamageSense(Z_Param_Out_Results);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingComponent::execHandleVisionSense)
	{
		P_GET_STRUCT_REF(FFGVisionSensingResults,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVisionSense(Z_Param_Out_Results);
		P_NATIVE_END;
	}
	void UTargetingComponent::StaticRegisterNativesUTargetingComponent()
	{
		UClass* Class = UTargetingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDamageSense", &UTargetingComponent::execHandleDamageSense },
			{ "HandleVisionSense", &UTargetingComponent::execHandleVisionSense },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics
	{
		struct TargetingComponent_eventHandleDamageSense_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetingComponent_eventHandleDamageSense_Parms, Results), Z_Construct_UScriptStruct_FFGDamageSensingResults, METADATA_PARAMS(Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingComponent, nullptr, "HandleDamageSense", nullptr, nullptr, sizeof(TargetingComponent_eventHandleDamageSense_Parms), Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingComponent_HandleDamageSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetingComponent_HandleDamageSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics
	{
		struct TargetingComponent_eventHandleVisionSense_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetingComponent_eventHandleVisionSense_Parms, Results), Z_Construct_UScriptStruct_FFGVisionSensingResults, METADATA_PARAMS(Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingComponent, nullptr, "HandleVisionSense", nullptr, nullptr, sizeof(TargetingComponent_eventHandleVisionSense_Parms), Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingComponent_HandleVisionSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetingComponent_HandleVisionSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetingComponent_NoRegister()
	{
		return UTargetingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionSensingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisionSensingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseDamageComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenseDamageComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingComponent_HandleDamageSense, "HandleDamageSense" }, // 2925954505
		{ &Z_Construct_UFunction_UTargetingComponent_HandleVisionSense, "HandleVisionSense" }, // 3882199057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/TargetingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_VisionSensingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_VisionSensingComponent = { "VisionSensingComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, VisionSensingComponent), Z_Construct_UClass_UFGVisionSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_VisionSensingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_VisionSensingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_SenseDamageComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_SenseDamageComp = { "SenseDamageComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, SenseDamageComp), Z_Construct_UClass_UDamageSenseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_SenseDamageComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_SenseDamageComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_VisionSensingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_SenseDamageComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetingComponent_Statics::ClassParams = {
		&UTargetingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetingComponent, 160424573);
	template<> FGAI_API UClass* StaticClass<UTargetingComponent>()
	{
		return UTargetingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetingComponent(Z_Construct_UClass_UTargetingComponent, &UTargetingComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UTargetingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
