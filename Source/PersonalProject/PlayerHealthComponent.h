// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Engine.h"
#include "PlayerHealthComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PERSONALPROJECT_API UPlayerHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerHealthComponent();



	// Sets default values for this component's properties
	

		float defaultHealth = 100.00f;

	
		float currentHealth;

	
		float MaxHealth = 100.00f;


	//function defitions 

	 UFUNCTION(BlueprintCallable, Category = "Health")
		 void IncreaseHealth(float Increase);

	  UFUNCTION(BlueprintCallable, Category = "Health")
		 void DecreaseHealth(float decrease);

	 UFUNCTION(BlueprintCallable, Category = "Health")
		 void SetHealth(float currentHealth, float defaultHealth);




protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
