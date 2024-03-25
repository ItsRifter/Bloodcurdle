// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "WeaponBase.generated.h"

UCLASS( ClassGroup=("Items"), Blueprintable, meta=(BlueprintSpawnableComponent) )
class BLOODCURDLE_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AWeaponBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PrimaryFire();

	void SecondaryFire();

	void DoReload();

	void PlayAnimation();
};
