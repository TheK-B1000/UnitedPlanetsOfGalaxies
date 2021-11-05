// K-B 2021

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UPGAIController.generated.h"

/**
 * 
 */
UCLASS()
class UNITEDPLANETS_API AUPGAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
};
