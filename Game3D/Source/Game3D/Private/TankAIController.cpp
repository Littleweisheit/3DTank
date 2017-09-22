// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "GameFramework/Actor.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();
	//UE_LOG(LogTemp, Warning, TEXT("The player tank:%s"), *(PlayerTank->GetName()));
}



void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetPlayerTank())
	{

		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
		
	}

}

/////////////////////////////////////////////////////////////////////

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cant get player tank"));
	}
	return Cast<ATank>(PlayerTank);
}


ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
