#pragma once

#include "AIController.h"
#include "FGAIStateBase.h"
#include "FGAI/AI/Movement/FGNavMovementComponent.h"
#include "FGAI/Components/TargetingComponent.h"


#include "FGAIStatePatroling.generated.h"

class UFGAIStateBase;

UCLASS(BlueprintType, Blueprintable)
class UFGAIStatePatroling : public UFGAIStateBase
{
	GENERATED_BODY()
public:

	UFGAIStatePatroling();
	
	void Setup() override;

	virtual FName TickActive(float DeltaTime) override;

	virtual void OnActivated() override;
	virtual void OnDeactivated() override;
	virtual void OnRemoved() override;

	void RotateTowardsMovementDirection(const UFGNavMovementComponent* NavMovementComponent);
	void SetNextLocation();
	
protected:

	AAIController* Controller;
	APawn* OwnerPawn;
	UFGNavMovementComponent* MovComponent;
	UTargetingComponent* TargetingComponent;

	float WaitTimeDefault = 2.f;
	float WaitTimeRemaining = 0;
	bool bPatrolling;

private:
	FName PendingStateName;
};
