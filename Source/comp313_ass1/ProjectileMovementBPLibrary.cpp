// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileMovementBPLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

FVector UProjectileMovementBPLibrary::impulseToPlayer(const float size, FVector projectileLocation, FVector characterLocation) {
	FVector distBetween = characterLocation - projectileLocation;
	distBetween.Normalize();
	FVector impulse = size * distBetween;
	return impulse;
}
