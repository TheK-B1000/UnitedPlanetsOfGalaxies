// K-B 2021


#include "UPGAIController.h"
#include "Kismet/GameplayStatics.h"

void AUPGAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	SetFocus(PlayerPawn);
}