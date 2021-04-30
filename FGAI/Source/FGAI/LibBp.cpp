// Fill out your copyright notice in the Description page of Project Settings.

#include "LibBp.h"
#include "AI/Sensing/FGNoiseActor.h"
#include "Kismet/KismetSystemLibrary.h"


void ULibBp::SpawnNoiseA(const UObject* WorldObj, FVector Location, AActor* NoiseInstigator)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldObj, EGetWorldErrorMode::LogAndReturnNull);
	auto Noise = World->SpawnActor<AFGNoiseActor>(Location, FRotator::ZeroRotator);
	Noise->NoiseInstigator = NoiseInstigator;
}
