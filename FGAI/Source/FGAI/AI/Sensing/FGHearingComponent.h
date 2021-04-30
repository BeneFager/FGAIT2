#pragma once

#include "FGHearingComponent.generated.h"

UCLASS()
class UFGHearingComponent : public UActorComponent
{
	GENERATED_BODY()
public:

	UFGHearingComponent();
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	float HearingRadius = 1000.f;
};
