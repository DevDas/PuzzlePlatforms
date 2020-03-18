// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformGameInstance.h"
#include "Engine/Engine.h"

UPuzzlePlatformGameInstance::UPuzzlePlatformGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("GameInstance Constructer"))
}

void UPuzzlePlatformGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("GameInstance Init"))
}

void UPuzzlePlatformGameInstance::Host()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;
	// 0 means, each time through we will update the existing message instead 
	Engine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Hosting"));
}

void UPuzzlePlatformGameInstance::Join(const FString& Address)
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;
	// 0 means, each time through we will update the existing message instead 
	Engine->AddOnScreenDebugMessage(0, 2, FColor::Blue, FString::Printf(TEXT("Joining %s"), *Address));
}
