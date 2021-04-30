// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LibBp.generated.h"

UCLASS()
class FGAI_API ULibBp : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = NoiseSource, meta = (Worldcontext = "WorldObj"))
	static void SpawnNoiseA(const UObject* WorldObj,FVector Location, AActor* NoiseInstigator);

};
