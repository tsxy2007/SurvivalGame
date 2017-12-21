// Fill out your copyright notice in the Description page of Project Settings.

#include "SUsableActor.h"


// Sets default values
ASUsableActor::ASUsableActor(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    MeshComp = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>( this,TEXT("Mesh") );
    RootComponent = MeshComp;
}

void ASUsableActor::OnUsed(APawn* InstigatorPawn)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Use Actor"));
}

void ASUsableActor::OnBeginFocus()
{
    MeshComp->SetRenderCustomDepth(true);
}

void ASUsableActor::OnEndFocus()
{
    MeshComp->SetRenderCustomDepth(false);
}
