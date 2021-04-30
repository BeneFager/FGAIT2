// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetingComponent.h"


void UTargetingComponent::BeginPlay()
{
	VisionSensingComponent = GetOwner()->FindComponentByClass<UFGVisionSensingComponent>();

	if (VisionSensingComponent != nullptr)
	{
		VisionSensingComponent->OnTargetSensed.AddDynamic(this, &UTargetingComponent::HandleVisionSense);
	}
	
	SenseDamageComp = GetOwner()->FindComponentByClass<UDamageSenseComponent>();

	if (SenseDamageComp != nullptr)
	{
		SenseDamageComp->OnSenseDamage.AddDynamic(this, &UTargetingComponent::HandleDamageSense);
	}
	
	// HearingComponent = GetOwner()->FindComponentByClass<UFGHearingComponent>();
	//
	// if (HearingComponent != nullptr)
	// {
	// 	
	// }
}

void UTargetingComponent::HandleVisionSense(const FFGVisionSensingResults& Results)
{
	CurrentTarget = Results.SensedActor;
}

void UTargetingComponent::HandleDamageSense(const FFGDamageSensingResults& Results)
{
	//Can check where the damage came from etc
	//Change state här etc
}

void UTargetingComponent::HandleHearingSense()
{
}



