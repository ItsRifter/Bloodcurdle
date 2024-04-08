// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS( ClassGroup=("Gameplay"), Blueprintable, meta=(BlueprintSpawnableComponent) )
class BLOODCURDLE_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDeath OnOwnerDied;

public:

	UPROPERTY(BlueprintReadOnly)
	class AActor* Owner;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gameplay", meta = (ClampMin = 1.0f))
	float Health = 1.0f;

	float* HealthPtr = &Health;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	/// @brief Performs functionality on player hurt, afterwards call "OnTookDamage"
	void TakeDamage(float damage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Gameplay")
	/// @brief Performs functionality after player hurt
	void OnTookDamage();

	void OnDeath();
};
