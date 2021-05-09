#include "FGAIStatePatroling.h"
#include "Kismet/KismetMathLibrary.h"
#include "NavigationSystem.h"

UFGAIStatePatroling::UFGAIStatePatroling()
{
	StateName = "Patrolling";
}

void UFGAIStatePatroling::Setup()
{
	OwnerPawn = Cast<APawn>(GetOwner());
	Controller = Cast<AAIController>(OwnerPawn->Controller);
	MovComponent = Cast<UFGNavMovementComponent>(OwnerPawn->GetComponentByClass(UFGNavMovementComponent::StaticClass()));
	TargetingComponent = Cast<UTargetingComponent>(OwnerPawn->GetComponentByClass(UTargetingComponent::StaticClass()));
}

FName UFGAIStatePatroling::TickActive(float DeltaTime)
{
	
	if (bPatrolling)
	{
		RotateTowardsMovementDirection(MovComponent);
		if (Controller->GetMoveStatus() == EPathFollowingStatus::Idle)
		{
			WaitTimeRemaining -= DeltaTime;
			if (WaitTimeRemaining < 0)
			{
				SetNextLocation();
			}
			if (TargetingComponent->CurrentTarget != nullptr)
			{
				PendingStateName = "Chasing"; //Changestate funkade inte dno why
			}
		}
	}
	Super::TickActive(DeltaTime);
	return PendingStateName;
}

//Always happens when switched to/between states
void UFGAIStatePatroling::OnActivated()
{
	bPatrolling = true;
	WaitTimeRemaining = WaitTimeDefault;
}

void UFGAIStatePatroling::OnDeactivated()
{
	bPatrolling = false;
}

void UFGAIStatePatroling::OnRemoved()
{
}

void UFGAIStatePatroling::RotateTowardsMovementDirection(const UFGNavMovementComponent* NavMovementComponent)
{
	FVector Velocity = NavMovementComponent->RequestedVelocity;
	if (!Velocity.IsNearlyZero())
	{
		Velocity.Z = 0.f;
		FRotator Rot = UKismetMathLibrary::MakeRotFromX(Velocity);
		GetOwner()->SetActorRotation(Rot);
	}
}

void UFGAIStatePatroling::SetNextLocation()
{
	FVector RandomPoint;
	UNavigationSystemV1::K2_GetRandomReachablePointInRadius(this, OwnerPawn->GetActorLocation(), RandomPoint, 2000.f);
	Controller->MoveToLocation(RandomPoint);
}
