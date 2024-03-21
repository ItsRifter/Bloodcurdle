// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerCharacter.h"
#include "/UnrealEngines/UnrealEngine-release/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h"
#include "/UnrealEngines/UnrealEngine-release/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "/UnrealEngines/UnrealEngine-release/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputMappingContext.h"
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
	
	if (APlayerController* PController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
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

	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Input->BindAction
	}
}

void AMainPlayerCharacter::Move(const FInputActionValue& InputValue)
{
}

void AMainPlayerCharacter::Look(const FInputActionValue& InputValue)
{
}

void AMainPlayerCharacter::Jump()
{
}
