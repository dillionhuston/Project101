// Fill out your copyright notice in the Description page of Project Settings.


#include "Timedevice.h"
#include "Components/SkeletalMeshComponent.h"



// Sets default values
ATimedevice::ATimedevice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void ATimedevice::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimedevice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


const void ATimedevice::Fire()
{
	


}
