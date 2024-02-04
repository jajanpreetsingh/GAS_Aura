// Learn GAS RPG

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PrimalAuraCharacter.generated.h"

UCLASS(Abstract)
class AURA_API APrimalAuraCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APrimalAuraCharacter();

protected:
	virtual void BeginPlay() override;

};
