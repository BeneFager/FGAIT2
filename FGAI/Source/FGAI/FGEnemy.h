#pragma once

#include "AI/Sensing/FGVisionSensingComponent.h"
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

	UPROPERTY(EditAnywhere)
	AActor* CurrentTarget;
	
	UPROPERTY(VisibleDefaultsOnly)
	UDamageSenseComponent* SenseDamageComp;
	
	UPROPERTY(VisibleDefaultsOnly)
	UFGHearingComponent* HearingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTakeDamageComp* TakeDamageComp;

	UPROPERTY(VisibleDefaultsOnly)
	UHealthComponent* HealthComponent;

	
	AFGEnemy();

	virtual float GetDefaultHalfHeight() const override;

protected:
	virtual void BeginPlay();

	UFUNCTION()
    void HandleVisionSense(const FFGVisionSensingResults& Results);
	UFUNCTION()
    void HandleDamageSense(const FFGDamageSensingResults& Results);
	UFUNCTION()
    void HandleHearingSense();
	
	UCapsuleComponent* GetCapsule() const { return Capsule; }
};

