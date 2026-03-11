// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavecitasGameMode.h"
#include "NavecitasPawn.h"
#include "EnemyShip.h"

ANavecitasGameMode::ANavecitasGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavecitasPawn::StaticClass();
}

void ANavecitasGameMode::BeginPlay() {
	Super::BeginPlay();

	for (int32 i = 0; i < 10; i++) {

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(FVector(i * 200.0f, -1300.0f, 215.0f));

		AEnemyShip* NaveNueva = GetWorld()->SpawnActor<AEnemyShip>(
			AEnemyShip::StaticClass(), SpawnTransform);

		//AEnemyShip* MiNave = GetWorld()->SpawnActor<AEnemyShip>(
			//AEnemyShip::StaticClass(), SpawnTransform
		if (NaveNueva != nullptr)
		{
			Naves.Add(NaveNueva);
		}
	}
}
