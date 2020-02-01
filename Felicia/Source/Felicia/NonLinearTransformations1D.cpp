// Fill out your copyright notice in the Description page of Project Settings.


#include "NonLinearTransformations1D.h"

float UNonLinearTransformationLibrary::FakePow(const float Base, const float Exp) 
{
	float remainder = fmod(Exp, 1);
	return helperPower(Base, static_cast<int>(Exp)) * (1 - remainder) + helperPower(Base, static_cast<int>(Exp) + 1) * remainder;
}

float UNonLinearTransformationLibrary::helperPower(const float &Base, const int Exp)
{
	float out {1};
	for (int i = 0; i < Exp; ++i)
		out *= Base;
	return out;
}

float UNonLinearTransformationLibrary::ReverseFakePow(const float Base, const float Exp)
{
	return 1 - FakePow(1 - Base, Exp);
}
