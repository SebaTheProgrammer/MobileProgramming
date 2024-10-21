// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DateTimeFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SAVETHEWORLD_API UDateTimeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintCallable, BlueprintPure, Category = "Math|DateTime" )
	static int32 GetDayOfWeek( FDateTime DateTime );

	UFUNCTION( BlueprintCallable, BlueprintPure, Category = "Math|DateTime" )
	static FDateTime AddTimeSpanToDateTime( const FDateTime& DateTime, const FTimespan& Timespan );

};
