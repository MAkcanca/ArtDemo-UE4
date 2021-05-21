#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "ArtDemoCartridge.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ARTDEMO_API UArtDemoCartridge : public UCartridge
{
	GENERATED_BODY()

	public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;

	// Your declarations go below!
	private:
	
};
