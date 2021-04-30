// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageSenseComponent.generated.h"


USTRUCT(BlueprintType)
struct FFGDamageSensingResults
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	AActor* DamageInstagator = nullptr;
	UPROPERTY(BlueprintReadOnly)
	FVector DamageDirection = FVector::ZeroVector;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFGDamageSensingDelegate, const FFGDamageSensingResults&, Results);

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class FGAI_API UDamageSenseComponent : public UActorComponent
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintAssignable)
	FFGDamageSensingDelegate OnSenseDamage;
};
