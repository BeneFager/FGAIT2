#pragma once

#include "FGNoiseActor.generated.h"

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class AFGNoiseActor : public AActor
{
	GENERATED_BODY()
public:

	AFGNoiseActor();

	UFUNCTION()
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Scene;

	UPROPERTY(EditAnywhere, Category = Hearing)
	float StartRadius = 300.f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AFGNoiseActor> ActorToSpawn;

	UPROPERTY()
	AActor* NoiseInstigator;
};


