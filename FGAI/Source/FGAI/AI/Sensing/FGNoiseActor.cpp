#include "FGNoiseActor.h"
#include "Kismet/KismetSystemLibrary.h"


AFGNoiseActor::AFGNoiseActor()
{
	PrimaryActorTick.bCanEverTick = true;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = Scene;
}

void AFGNoiseActor::Tick(float DeltaSeconds)
{
	UKismetSystemLibrary::DrawDebugSphere(GetWorld(),GetActorLocation(), StartRadius, 12, FLinearColor::Green);
}

void AFGNoiseActor::BeginPlay()
{
}






