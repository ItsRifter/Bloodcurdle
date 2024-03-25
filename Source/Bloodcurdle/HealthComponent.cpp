// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	if(IsValid(GetOwner()))
		Owner = GetOwner();
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::TakeDamage(int damage)
{
	Health -= damage;

	if(Health <= 0)
		OnDeath();
	else
		OnTookDamage();
}

void UHealthComponent::OnDeath()
{
	OnOwnerDied.Broadcast();
}
