#pragma once

#include "AI/Sensing/FGVisionSensingComponent.h"
#include "AI/StateMachine/FGStateMachineComponent.h"
#include "Components/DamageSenseComponent.h"
#include "Components/HealthComponent.h"
#include "Components/TakeDamageComp.h"
#include "GameFramework/Pawn.h"
#include "FGEnemy.generated.h"

class UFGHearingComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UCameraComponent;
class UFGVisionSensingComponent;
class UFGNavMovementComponent;
class UHealthComponent;
class UTakeDamageComp;
class UDamageSenseComponent;
class UTargetingComponent;

UCLASS()
class AFGEnemy : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleDefaultsOnly, Category=Collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Vision)
	UFGVisionSensingComponent* VisionSensingComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UFGNavMovementComponent* NavMovementComponent;
	
	UPROPERTY(VisibleDefaultsOnly)
	UDamageSenseComponent* SenseDamageComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTakeDamageComp* TakeDamageComp;

	UPROPERTY(VisibleDefaultsOnly)
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleDefaultsOnly)
	UFGStateMachineComponent* StateMachineComponent;

	UPROPERTY(VisibleDefaultsOnly)
	UTargetingComponent* TargetingComponent;
	
	AFGEnemy();

	virtual float GetDefaultHalfHeight() const override;

protected:
	virtual void BeginPlay();
	
	UCapsuleComponent* GetCapsule() const { return Capsule; }
};

