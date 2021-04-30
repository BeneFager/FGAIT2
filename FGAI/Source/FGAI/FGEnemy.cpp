#include "FGEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AI/Sensing/FGVisionSensingComponent.h"
#include "AI/Movement/FGNavMovementComponent.h"
#include "Components/TargetingComponent.h"
#include "AIController.h"

class UDamageSenseComponent;

AFGEnemy::AFGEnemy()
{
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = Capsule;
	// Set size for collision capsule
	Capsule->InitCapsuleSize(55.f, 96.0f);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh->SetupAttachment(Capsule);
	Mesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));

	VisionSensingComponent = CreateDefaultSubobject<UFGVisionSensingComponent>(TEXT("VisionSensing"));
	NavMovementComponent = CreateDefaultSubobject<UFGNavMovementComponent>(TEXT("NavMovementComponent"));
	SenseDamageComp = CreateDefaultSubobject<UDamageSenseComponent>(TEXT("SenseDamageComp"));
	TakeDamageComp = CreateDefaultSubobject<UTakeDamageComp>(TEXT("TakeDamageComp"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

float AFGEnemy::GetDefaultHalfHeight() const
{
	// Don't scale...
	return Capsule->GetScaledCapsuleHalfHeight();
}

void AFGEnemy::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("asdadadad"));
	if (VisionSensingComponent != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("asdadadad"));
		VisionSensingComponent->OnTargetSensed.AddDynamic(this, &AFGEnemy::HandleVisionSense);
	}

	if (SenseDamageComp != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("asdadadad"));
		SenseDamageComp->OnSenseDamage.AddDynamic(this, &AFGEnemy::HandleDamageSense);
	}
}

void AFGEnemy::HandleVisionSense(const FFGVisionSensingResults& Results)
{
	UE_LOG(LogTemp, Log, TEXT("asdadadad"));
	AAIController* AIController = Cast<AAIController>(GetController());
	CurrentTarget = Results.SensedActor;
	AIController->MoveToLocation(CurrentTarget->GetActorLocation());
}

void AFGEnemy::HandleDamageSense(const FFGDamageSensingResults& Results)
{
	UE_LOG(LogTemp, Log, TEXT("asdadadad2"));
	AAIController* AIController = Cast<AAIController>(GetController());
	CurrentTarget = Results.DamageInstagator;
	AIController->MoveToLocation(CurrentTarget->GetActorLocation());
}

void AFGEnemy::HandleHearingSense()
{
}
