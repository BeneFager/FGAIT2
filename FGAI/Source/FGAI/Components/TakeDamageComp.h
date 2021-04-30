// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TakeDamageComp.generated.h"



UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class FGAI_API UTakeDamageComp : public UActorComponent
{
	GENERATED_BODY()

	public:
	
	UFUNCTION(BlueprintCallable)
	void TakeDamage(float Damage, FHitResult Hit, AActor* Instagator);
};
