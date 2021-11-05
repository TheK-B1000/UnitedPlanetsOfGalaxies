// K-B 2021


#include "UPGAIController.h"
#include "Kismet/GameplayStatics.h"


void AUPGAIController::BeginPlay()
{
	Super::BeginPlay();

}

void AUPGAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//declarations:
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (LineOfSightTo(PlayerPawn))
	{
		SetFocus(PlayerPawn);
		MoveToActor(PlayerPawn, AcceptanceRadius);
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}
}	
