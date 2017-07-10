// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cant get Controlled Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Get tank:%s"), *ControlledTank->GetName());
	}

}

voididdank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
