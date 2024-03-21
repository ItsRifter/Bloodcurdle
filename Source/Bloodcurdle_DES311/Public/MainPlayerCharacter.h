// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "/UnrealEngines/UnrealEngine-release/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "MainPlayerCharacter.generated.h"

UCLASS()
class BLOODCURDLE_DES311_API AMainPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	class UCameraComponent* Camera;

public:
	// Sets default values for this character's properties
	AMainPlayerCharacter();

protected:
	
	UPROPERTY(EditAnywhere, Category = "Inputs")
	class UInputMappingContext* InputMap;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& InputValue);
	void Look(const FInputActionValue& InputValue);
	void Jump();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
