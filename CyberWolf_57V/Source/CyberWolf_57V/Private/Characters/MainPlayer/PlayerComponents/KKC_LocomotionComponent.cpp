
#include "Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
 
UKKC_LocomotionComponent::UKKC_LocomotionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}
 
void UKKC_LocomotionComponent::BeginPlay()
{
	Super::BeginPlay();
}
 
void UKKC_LocomotionComponent::InitializeComponent()
{
	UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
	if (CMC && MovementData)
	{
		CMC->MaxWalkSpeed = MovementData->WalkSpeed;
	}
 
	// Cacheamos la referencia UNA vez — no queremos GetComponentByClass
	// en cada frame de input
	CameraComponentRef = GetOwner()->GetComponentByClass<UKKC_CameraComponents>();
}
 
void UKKC_LocomotionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	const ACharacter* Owner = Cast<ACharacter>(GetOwner());
	if (!Owner) return;

	const float Speed2DSquared = Owner->GetVelocity().SizeSquared2D();
	const float DrainThreshold = MovementData ? MovementData->WalkSpeed + 50.f : 350.f;
	const bool bActuallyRunning = bIsSprinting && Speed2DSquared > FMath::Square(DrainThreshold);

	if (bActuallyRunning)
		DrainStamina(DeltaTime);
	else
		OnRecoveryStamina(DeltaTime);
}
 
void UKKC_LocomotionComponent::ProcessMoveInput(const FVector2D& Input) const
{
	ACharacter* Owner = Cast<ACharacter>(GetOwner());
	if (!Owner) return;
 
	// ISOMÉTRICA: el input se alinea con el yaw FIJO de la cámara (45°),
	// no con GetControlRotation(). Con la cámara nueva el controller ya no
	// rota, así que ControlRotation quedaría congelado en el yaw de spawn
	// y "arriba" movería al personaje en diagonal en pantalla.
	const float CamYaw = CameraComponentRef ? CameraComponentRef->GetCameraYaw() : 45.f;
 
	const FRotator YawRot(0.f, CamYaw, 0.f);
	const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
 
	Owner->AddMovementInput(Forward, Input.Y);
	Owner->AddMovementInput(Right,   Input.X);
}
 
void UKKC_LocomotionComponent::SetSpringting(bool bSpring)
{
	UCharacterMovementComponent* CMC = GetOwner()->GetComponentByClass<UCharacterMovementComponent>();
	if (!CMC || !MovementData) return;
	bIsSprinting = bSpring;
	CMC->MaxWalkSpeed = bSpring ? MovementData->SprintSpeed : MovementData->WalkSpeed;
}
 
void UKKC_LocomotionComponent::DrainStamina(float DeltaTime) const
{
	UKKC_StatsComponent* StatsComponent = GetOwner()->GetComponentByClass<UKKC_StatsComponent>();
	if (!StatsComponent) return;
 
	StatsComponent->ConsumeStamina(DeltaTime * MovementData->SprintStaminaCostPerSecond);
}
 
void UKKC_LocomotionComponent::OnStaminaDepleted()
{
	SetSpringting(false);
}
 
void UKKC_LocomotionComponent::OnRecoveryStamina(float DeltaTime) const
{
	UKKC_StatsComponent* StatsComponent = GetOwner()->GetComponentByClass<UKKC_StatsComponent>();
	if (!StatsComponent) return;
 
	StatsComponent->RegenerateStamina(DeltaTime * StatsComponent->StatsData->StaminaRegenPerSecond);
}