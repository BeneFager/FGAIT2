#include "FGAIStateChasing.h"
#include "Kismet/KismetMathLibrary.h"
#include "NavigationSystem.h"
#include "FGAI/FGEnemy.h"


UFGAIStateChasing::UFGAIStateChasing()
{
	StateName = "Chasing";
}

void UFGAIStateChasing::Setup()
{
	OwnerPawn = Cast<APawn>(GetOwner());
	Controller = Cast<AAIController>(OwnerPawn->Controller);
	MovComponent = Cast<UFGNavMovementComponent>(OwnerPawn->GetComponentByClass(UFGNavMovementComponent::StaticClass()));
	TargetingComponent = Cast<UTargetingComponent>(OwnerPawn->GetComponentByClass(UTargetingComponent::StaticClass()));
}

FName UFGAIStateChasing::TickActive(float DeltaTime)
{
	if (PendingStateName != StateName)
		ChangeState(PendingStateName);

	RotateTowardsMovementDirection(MovComponent);
	if (Target != nullptr)
	{
		SetNextLocation();
	}

	if (!Target)
	{
		PendingStateName = "Patrolling"; //Inte implementerat men görs i ontargetlost
	}
	return PendingStateName;
}

void UFGAIStateChasing::OnActivated()
{
	Target = TargetingComponent->CurrentTarget;
	PendingStateName = StateName;
}

void UFGAIStateChasing::OnDeactivated()
{
}

void UFGAIStateChasing::OnRemoved()
{
}

void UFGAIStateChasing::RotateTowardsMovementDirection(const UFGNavMovementComponent* NavMovementComponent)
{
	FVector Velocity = NavMovementComponent->RequestedVelocity;
	if (!Velocity.IsNearlyZero())
	{
		Velocity.Z = 0.f;
		FRotator Rot = UKismetMathLibrary::MakeRotFromX(Velocity);
		GetOwner()->SetActorRotation(Rot);
	}
}

void UFGAIStateChasing::SetNextLocation()
{
	Controller->MoveToLocation(Target->GetActorLocation());
	PendingStateName = "Chasing";
}
