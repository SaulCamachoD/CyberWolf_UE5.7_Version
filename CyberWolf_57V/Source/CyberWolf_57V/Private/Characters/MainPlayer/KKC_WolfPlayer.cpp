#include "Characters/MainPlayer/KKC_WolfPlayer.h"

#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "Characters/MainPlayer/PlayerComponents/KKC_CameraComponents.h"
#include "GameFramework/SpringArmComponent.h"
#include "Input/KKC_EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"

AKKC_WolfPlayer::AKKC_WolfPlayer()
{
 	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(GetMesh());
	SpringArmComp->SetupAttachment(GetMesh(), TEXT("head"));
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);
	
	CameraComponent = CreateDefaultSubobject<UKKC_CameraComponents>(TEXT("CPCamera"));
	
	bUseControllerRotationYaw   = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll  = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false;
	
	LocomotionComp = CreateDefaultSubobject<UKKC_LocomotionComponent>(TEXT("LocomotionComp"));
	AirMovementComp = CreateDefaultSubobject<UKKC_AirMovementComponent>(TEXT("AirMovementComp"));
	FlightComp = CreateDefaultSubobject<UKKC_FlightComponent>(TEXT("FlightComp"));

}


void AKKC_WolfPlayer::BeginPlay()
{
	Super::BeginPlay();
	CameraComponent->InitializeCamera(SpringArmComp, CameraComp);
}

void AKKC_WolfPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKKC_WolfPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* EIC = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Sub = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Sub->AddMappingContext(InputMappingContext, 0);
		}
	}
	
	EIC -> BindAction(IA_Move, ETriggerEvent::Triggered, this, &AKKC_WolfPlayer::Move);
	EIC -> BindAction(IA_Look, ETriggerEvent::Triggered, this, &AKKC_WolfPlayer::Look);

}

void AKKC_WolfPlayer::Move(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	LocomotionComp->ProcessMoveInput(Axis);
}

void AKKC_WolfPlayer::Look(const FInputActionValue& Value)
{
	CameraComponent->ProcessLookInput(Value.Get<FVector2D>());
}

void AKKC_WolfPlayer::StartJump(const FInputActionValue& Value)
{
	AirMovementComp->RequestJump();
}

void AKKC_WolfPlayer::StopJump(const FInputActionValue& Value)
{
}

void AKKC_WolfPlayer::StartSprint(const FInputActionValue& Value)
{
}

void AKKC_WolfPlayer::StopSprint(const FInputActionValue& Value)
{
}

