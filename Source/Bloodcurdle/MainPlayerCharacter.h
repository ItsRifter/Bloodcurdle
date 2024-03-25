// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "MainPlayerCharacter.generated.h"

UCLASS()
class BLOODCURDLE_API AMainPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayerCharacter();

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	class UCameraComponent* Camera;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* InputMap;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* PrimaryFireAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* SecondaryFireAction;

	//class UWeaponBase ActiveWeapon;

	//class UWeaponBase* Weapon = &ActiveWeapon;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& InputValue);

	void Look(const FInputActionValue& InputValue);

	void DoJump();

	void DoPrimaryFire();

	void DoSecondaryFire();

	UFUNCTION(BlueprintImplementableEvent)
	void DoFireEffects(bool wasSecondary = false);
};
