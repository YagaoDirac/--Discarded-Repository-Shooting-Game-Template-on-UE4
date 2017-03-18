// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "CPP_PlayerPawn.generated.h"

UCLASS()
class STG_TEMPLATE_API ACPP_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_PlayerPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;


	/*
	//�����ϵģ���Ҳ��֪�������ǲ��������Ҫ��һ�䡣
	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;
	*/
	//�ȸĳ����һ�������Ե�д��
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh_Plane;


	
};
