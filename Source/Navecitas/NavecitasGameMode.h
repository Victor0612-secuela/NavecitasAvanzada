// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemyShip.h"
#include "NavecitasGameMode.generated.h"

UCLASS(MinimalAPI)
class ANavecitasGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavecitasGameMode();
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AEnemyShip*> Naves;    /// Va a ser el contenedor de naves 
};



