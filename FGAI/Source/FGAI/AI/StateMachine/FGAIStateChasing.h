#pragma once

#include "AIController.h"
#include "FGAIStateBase.h"
#include "FGAI/AI/Movement/FGNavMovementComponent.h"
#include "FGAI/Components/TargetingComponent.h"
#include "FGAIStateChasing.generated.h"


UCLASS()
class UFGAIStateChasing : public UFGAIStateBase
{
	GENERATED_BODY()
public:
	
	UFGAIStateChasing();
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

private:
	FName PendingStateName;
	AActor* Target;
};


