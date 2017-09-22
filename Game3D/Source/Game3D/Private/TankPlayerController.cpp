

#include "TankPlayerController.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"




//��ʼ
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
		UE_LOG(LogTemp, Warning, TEXT("Get tank name is :%s"), *ControlledTank->GetName());
	}

}

//ÿִ֡��
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AimTowardsCrosshair();
}


//###################################################################//

//��ȡ���Ƶ�̹��
ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	FVector HitLocation;

	if (GetSightRayHitLocation(HitLocation)) 
	{
		GetControlledTank()->AimAt(HitLocation);
		
	}

}

//�������
bool ATankPlayerController::GetSightRayHitLocation(FVector & HitLocation) const
{
	int32 ViewPortX, ViewPortY;
	GetViewportSize(ViewPortX, ViewPortY);
	auto ScreenLocation = FVector2D(ViewPortX*CrosshairXLocation, ViewPortY* CrosshairYLocation);

	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		GetLookVectorHitLocation(LookDirection, HitLocation);
		
	}
	
	return true;
}

//ͶӰ��3D����
bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const
{
	FVector CameraWorldLocation, WorldDirection;

	DeprojectScreenPositionToWorld
	(
		ScreenLocation.X,
		ScreenLocation.Y,
		CameraWorldLocation,
		WorldDirection
	);
	LookDirection = WorldDirection;
	return true;
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + LookDirection*LineTraceRange;
	DrawDebugLine
	(
		GetWorld(),
		StartLocation,
		EndLocation,
		FColor(255, 0, 0),
		false,
		-0.5,
		0,
		10
	);
	if (
		GetWorld()->LineTraceSingleByChannel
	(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility
	)
		)
	{
		HitLocation = HitResult.Location;
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LineTraceSingleByChannel is failed %s EndLocation is %s LookDirection is %s"),*StartLocation.ToString(),*EndLocation.ToString(),*LookDirection.ToString())

		return false;
	}
}

