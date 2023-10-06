// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Timedevice.generated.h"

UCLASS()
class PERSONALPROJECT_API ATimedevice : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimedevice();

	// 
	UPROPERTY(EditAnywhere, Category = "Time")
	USkeletalMeshComponent* MeshComp;

	UFUNCTION(BlueprintCallable, Category = "Time")
	const void Fire();

	UPROPERTY(EditAnywhere, Category = "Time")
		USoundAttenuation* Sound;

	UPROPERTY(EditAnywhere, Category = "Time")
		AActor* TimeDevice;

	bool isAlive = true;

	



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
