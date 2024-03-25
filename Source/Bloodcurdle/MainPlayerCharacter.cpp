// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMainPlayerCharacter::AMainPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AMainPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if(APlayerController* PController = Cast<APlayerController>(Controller))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMap, 0);
		}
	}
}

// Called every frame
void AMainPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMainPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainPlayerCharacter::Move);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainPlayerCharacter::Look);
		Input->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainPlayerCharacter::DoJump);

		Input->BindActipn(PrimaryFireAction, ETriggerEvent::Triggered, this, &AMainPlayerCharacter::DoPrimaryFire)
	}
}

void AMainPlayerCharacter::Move(const FInputActionValue &InputValue)
{
	FVector2D InputVec = InputValue.Get<FVector2D>();

	if(IsValid(Controller))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRot(0, Rotation.Yaw, 0);

		const FVector ForwardDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		const FVector RightDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDir, InputVec.Y);
		AddMovementInput(RightDir, InputVec.X);
	}
}

void AMainPlayerCharacter::Look(const FInputActionValue &InputValue)
{
	FVector2D InputVec = InputValue.Get<FVector2D>();

	if(IsValid(Controller))
	{
		AddControllerYawInput(InputVec.X);
		AddControllerPitchInput(InputVec.Y);
	}
}

void AMainPlayerCharacter::DoJump()
{
	ACharacter::Jump();
}

void AMainPlayerCharacter::DoPrimaryFire()
{
	
}

void AMainPlayerCharacter::DoSecondaryFire()
{
	
}