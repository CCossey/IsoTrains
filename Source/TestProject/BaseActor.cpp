// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseActor.h"

// Sets default values
ABaseActor::ABaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	TotalDamage = 200;
	DamageTimeInSeconds = 1.f;
}

// Called when the game starts or when spawned
void ABaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseActor::PostInitProperties()
{
	Super::PostInitProperties();
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

//// Called every frame
//void ABaseActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

