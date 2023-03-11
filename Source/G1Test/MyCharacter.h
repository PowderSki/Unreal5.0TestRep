// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "G1Test.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class G1TEST_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character, meta = (AllowPrivateAccess = true))
	USkeletalMeshComponent* SK_Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character, meta = (AllowPrivateAccess = true))
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AnimInstance, meta = (AllowPrivateAccess = true))
	class UMyAnimInstance* MyAnimInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = FireLocation, meta = (AllowPrivateAccess = true))
	FVector FireLocation;

public:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

};
