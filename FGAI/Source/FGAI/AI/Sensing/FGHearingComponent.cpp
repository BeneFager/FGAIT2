#include "FGHearingComponent.h"
#include "FGNoiseActor.h"
#include "Kismet/GameplayStatics.h"

UFGHearingComponent::UFGHearingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGHearingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	
}
