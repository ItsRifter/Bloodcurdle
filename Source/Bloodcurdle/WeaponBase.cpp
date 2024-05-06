// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"

// Sets default values for this component's properties
AWeaponBase::AWeaponBase()
{
	//PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCollider"));
	Collider->SetupAttachment(RootComponent);
}

// Called when the game starts
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// void AWeaponBase::PrimaryFire()
// {
// 	// AActor* Player = GetOwner();

// 	// if(Player)
// 	// {
// 	// 	FVector EyePos;
// 	// 	FRotator EyeRot;
// 	// 	Player->GetActorEyesViewPoint(EyePos, EyeRot);

// 	// 	FVector FireDir = EyeRot.Vector();

// 	// 	float HalfRad = FMath::DegreesToRadians(5.0f);
//     //     FireDir = FMath::VRandCone(FireDir, HalfRad, HalfRad);

// 	// 	FVector TraceEnd = EyePos + (FireDir * 128);

// 	// 	// FHitResult Hit;
// 	// 	// if(GetWorld()->LineTraceSingleByChannel(Hit, EyePos, TraceEnd, COLLISION_WEAPON, &Params))
// 	// 	// {

// 	// 	// }
// 	// }
// }

// void AWeaponBase::SecondaryFire()
// {
// }