// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
//#include "WeaponBase.h"
#include "MainPlayerCharacter.generated.h"

UCLASS()
class BLOODCURDLE_API AMainPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	class UCameraComponent* Camera;

	UPROPERTY(BlueprintReadOnly)
	class UHealthComponent* HealthComponent;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void ObtainPickup();

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class AWeaponBase* ActiveWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AWeaponBase*> Weapons;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& InputValue);

	void Look(const FInputActionValue& InputValue);

	void DoJump();

	UFUNCTION(BlueprintImplementableEvent)
	void DoPrimaryFire();

	UFUNCTION(BlueprintImplementableEvent)
	void DoSecondaryFire();

	UFUNCTION(BlueprintCallable)
	void SetWeapon(AWeaponBase* Weapon);
};
