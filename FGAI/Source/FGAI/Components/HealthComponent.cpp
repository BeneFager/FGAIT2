// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"


bool UHealthComponent::ShouldDie()
{
	if (Health <= 0)
	{
		return true;
	}
	return false;
}
