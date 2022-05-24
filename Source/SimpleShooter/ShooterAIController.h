// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;

private:
	APawn* PlayerPawn;
	void MoveToPlayer();
	UPROPERTY(EditAnywhere)
		float AcceptanceRadius = 200;
	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehaviour;
};
