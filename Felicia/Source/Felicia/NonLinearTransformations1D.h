// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NonLinearTransformations1D.generated.h"

/**
 * 
 */
UCLASS()
class FELICIA_API UNonLinearTransformationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Fake Power", ToolTip = "(Also known as SmoothStart); Base to Exp-th power, approximately. For use on bases between 0 and 1.", ShortToolTip = "Base(0 to 1) to Exp-th power, approximately.", KeyWords = "Smooth Start SmoothStart"), Category = "Math|NonLinearTransformations")
	static float FakePow(const float Base, const float Exp);

	static float helperPower(const float &x, const int Exp);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Reverse Fake Power", ToolTip = "(Also known as SmoothStop); 1 - FakePow(1 - Base, Exp). For use on bases between 0 and 1.", ShortToolTip = "1 - FakePow(1 - Base(0 to 1), Exp)", KeyWords = "Smooth Stop SmoothStop"), Category = "Math|NonLinearTransformations")
	static float ReverseFakePow(const float Base, const float Exp);




	
};
