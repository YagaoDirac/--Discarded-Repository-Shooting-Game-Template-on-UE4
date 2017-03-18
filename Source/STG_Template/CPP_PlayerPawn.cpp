// Fill out your copyright notice in the Description page of Project Settings.

#include "STG_Template.h"
#include "CPP_PlayerPawn.h"


// Sets default values
ACPP_PlayerPawn::ACPP_PlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	//�����ϵ�,�ȹ��ˣ������ٿ�
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));
	OurVisibleComponent->SetupAttachment(RootComponent);
	*/
	//�ȸĳ�����һ�������Ե�д��
	StaticMesh_Plane = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh_Plane");
	RootComponent = StaticMesh_Plane;
}

// Called when the game starts or when spawned
void ACPP_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_PlayerPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ACPP_PlayerPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

