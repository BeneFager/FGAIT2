// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/Components/DamageSenseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageSenseComponent() {}
// Cross Module References
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGDamageSensingResults();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FGAI_API UClass* Z_Construct_UClass_UDamageSenseComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UDamageSenseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics
	{
		struct _Script_FGAI_eventFGDamageSensingDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FGAI_eventFGDamageSensingDelegate_Parms, Results), Z_Construct_UScriptStruct_FFGDamageSensingResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGDamageSensingDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FGAI_eventFGDamageSensingDelegate_Parms), Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFGDamageSensingResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_API uint32 Get_Z_Construct_UScriptStruct_FFGDamageSensingResults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGDamageSensingResults, Z_Construct_UPackage__Script_FGAI(), TEXT("FGDamageSensingResults"), sizeof(FFGDamageSensingResults), Get_Z_Construct_UScriptStruct_FFGDamageSensingResults_Hash());
	}
	return Singleton;
}
template<> FGAI_API UScriptStruct* StaticStruct<FFGDamageSensingResults>()
{
	return FFGDamageSensingResults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGDamageSensingResults(FFGDamageSensingResults::StaticStruct, TEXT("/Script/FGAI"), TEXT("FGDamageSensingResults"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_StaticRegisterNativesFFGDamageSensingResults
{
	FScriptStruct_FGAI_StaticRegisterNativesFFGDamageSensingResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGDamageSensingResults")),new UScriptStruct::TCppStructOps<FFGDamageSensingResults>);
	}
} ScriptStruct_FGAI_StaticRegisterNativesFFGDamageSensingResults;
	struct Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageInstagator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageInstagator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGDamageSensingResults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageInstagator_MetaData[] = {
		{ "Category", "FGDamageSensingResults" },
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageInstagator = { "DamageInstagator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGDamageSensingResults, DamageInstagator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageInstagator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageInstagator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageDirection_MetaData[] = {
		{ "Category", "FGDamageSensingResults" },
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageDirection = { "DamageDirection", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGDamageSensingResults, DamageDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageInstagator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::NewProp_DamageDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
		nullptr,
		&NewStructOps,
		"FGDamageSensingResults",
		sizeof(FFGDamageSensingResults),
		alignof(FFGDamageSensingResults),
		Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGDamageSensingResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGDamageSensingResults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGDamageSensingResults"), sizeof(FFGDamageSensingResults), Get_Z_Construct_UScriptStruct_FFGDamageSensingResults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGDamageSensingResults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGDamageSensingResults_Hash() { return 1914937784U; }
	void UDamageSenseComponent::StaticRegisterNativesUDamageSenseComponent()
	{
	}
	UClass* Z_Construct_UClass_UDamageSenseComponent_NoRegister()
	{
		return UDamageSenseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageSenseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSenseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSenseDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageSenseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageSenseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/DamageSenseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageSenseComponent_Statics::NewProp_OnSenseDamage_MetaData[] = {
		{ "ModuleRelativePath", "Components/DamageSenseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDamageSenseComponent_Statics::NewProp_OnSenseDamage = { "OnSenseDamage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageSenseComponent, OnSenseDamage), Z_Construct_UDelegateFunction_FGAI_FGDamageSensingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDamageSenseComponent_Statics::NewProp_OnSenseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSenseComponent_Statics::NewProp_OnSenseDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageSenseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageSenseComponent_Statics::NewProp_OnSenseDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageSenseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageSenseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageSenseComponent_Statics::ClassParams = {
		&UDamageSenseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDamageSenseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSenseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageSenseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSenseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageSenseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageSenseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageSenseComponent, 3011382989);
	template<> FGAI_API UClass* StaticClass<UDamageSenseComponent>()
	{
		return UDamageSenseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageSenseComponent(Z_Construct_UClass_UDamageSenseComponent, &UDamageSenseComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UDamageSenseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageSenseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
