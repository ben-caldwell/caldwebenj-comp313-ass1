// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectileMovementBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COMP313_ASS1_API UProjectileMovementBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure)
		static FVector impulseToPlayer(const float size, FVector projectileLocation, FVector characterLocaction);
	
};
