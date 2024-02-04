// Learn GAS RPG


#include "PrimalAuraCharacter.h"

// Sets default values
APrimalAuraCharacter::APrimalAuraCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrimalAuraCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrimalAuraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APrimalAuraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

