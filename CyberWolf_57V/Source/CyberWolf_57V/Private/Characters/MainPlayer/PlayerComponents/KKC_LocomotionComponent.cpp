#include "Characters/MainPlayer/PlayerComponents/KKC_LocomotionComponent.h"

#include "Characters/MainPlayer/PlayerComponents/KKC_StatsComponent.h"
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
	CMC->MaxWalkSpeed = MovementData->WalkSpeed;
	
}

void UKKC_LocomotionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bIsSprinting) DrainStamina(DeltaTime);
	if (!bIsSprinting) OnRecoveryStamina(DeltaTime);
}

void UKKC_LocomotionComponent::ProcessMoveInput(const FVector2D& Input) const
{
	ACharacter* Owner = Cast<ACharacter>(GetOwner());

	const FRotator Rotation = Owner->GetControlRotation();
	const FVector Forward = FRotationMatrix(FRotator(0, Rotation.Yaw, 0)).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(FRotator(0, Rotation.Yaw, 0)).GetUnitAxis(EAxis::Y);

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

void UKKC_LocomotionComponent::OnRecoveryStamina(float DeltaTime)const
{
	UKKC_StatsComponent* StatsComponent = GetOwner()->GetComponentByClass<UKKC_StatsComponent>();
	if (!StatsComponent) return;
	
	StatsComponent->RegenerateStamina(DeltaTime * StatsComponent->StatsData->StaminaRegenPerSecond);
}
