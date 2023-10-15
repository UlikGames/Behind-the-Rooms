#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommandScriptActor.generated.h"

UCLASS()
class BEHINDTHEROOMS_API ACommandScriptActor : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ACommandScriptActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
