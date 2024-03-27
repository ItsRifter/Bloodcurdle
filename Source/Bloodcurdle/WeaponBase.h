// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "WeaponBase.generated.h"

class UStaticMesh;
class USoundCue;
class UAnimMontage;
class UAudioComponent;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	float BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo", meta = (ClampMin = 0.0f))
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo", meta = (ClampMin = 0.0f))
    int32 CurAmmo;

	float LastAttackTime;

	FTimerHandle TH_TimeBetweenAttacks;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sounds")
	USoundCue* FireSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sounds")
	USoundCue* ReloadSound;

public:

	UPROPERTY(EditAnywhere)
	class UStaticMesh* WeaponModel;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PrimaryFire();

	void SecondaryFire();

	void DoReload();

	void PlayAnimation();
};

UENUM(BlueprintType)
enum class EAttackMethod : uint8
{
	AM_Unspecified		UMETA(DisplayName = "Unspecified"),
	AM_HitScan			UMETA(DisplayName = "Hitscan"),
	AM_Projectile		UMETA(DisplayName = "Projectile")
};