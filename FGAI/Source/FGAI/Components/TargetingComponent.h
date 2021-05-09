// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "DamageSenseComponent.h"
#include "Components/ActorComponent.h"
#include "FGAI/AI/Sensing/FGVisionSensingComponent.h"
#include "TargetingComponent.generated.h"

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class FGAI_API UTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Target)
	AActor* CurrentTarget;

	
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	UFGVisionSensingComponent* VisionSensingComponent;

	UPROPERTY()
	UDamageSenseComponent* SenseDamageComp;

	UFUNCTION()
	void HandleVisionSense(const FFGVisionSensingResults& Results);
	UFUNCTION()
	void HandleDamageSense(const FFGDamageSensingResults& Results);
};
