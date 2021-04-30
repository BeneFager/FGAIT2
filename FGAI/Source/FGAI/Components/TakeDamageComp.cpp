// Fill out your copyright notice in the Description page of Project Settings.

#include "TakeDamageComp.h"
#include "HealthComponent.h"
#include "DamageSenseComponent.h"



void UTakeDamageComp::TakeDamage(float Damage, FHitResult Hit, AActor* Instagator)
{
	auto HealthComp = Hit.GetActor()->FindComponentByClass<UHealthComponent>();
	if (HealthComp)
	{
		HealthComp->Health -= Damage;
	}

	auto DamageSenseComp = Hit.GetActor()->FindComponentByClass<UDamageSenseComponent>();
	if (DamageSenseComp)
	{
		FFGDamageSensingResults DamageSensingResults;
		DamageSensingResults.DamageInstagator = Instagator;
		DamageSensingResults.DamageDirection = Hit.GetActor()->GetActorLocation() - Instagator->GetActorLocation();
		DamageSenseComp->OnSenseDamage.Broadcast(DamageSensingResults);
	}

	if (HealthComp->ShouldDie())
		GetOwner()->Destroy();
}
