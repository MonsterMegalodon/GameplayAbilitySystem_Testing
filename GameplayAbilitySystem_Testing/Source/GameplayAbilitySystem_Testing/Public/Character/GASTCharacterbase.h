// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GASTCharacterbase.generated.h"

UCLASS()
class GAMEPLAYABILITYSYSTEM_TESTING_API AGASTCharacterbase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGASTCharacterbase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
