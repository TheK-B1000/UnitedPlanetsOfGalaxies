// K-B 2021


#include "UPGAIController.h"
#include "Kismet/GameplayStatics.h"


void AUPGAIController::BeginPlay()
{
	Super::BeginPlay();

	//declarations:
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	SetFocus(PlayerPawn);
}

void AUPGAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//declarations:
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	MoveToActor(PlayerPawn, 200.f);
}
