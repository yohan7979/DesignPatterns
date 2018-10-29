#pragma once
#include "CondimentDecorator.h"
class Milk :
	public CondimentDecorator
{
public:
	Milk(Beverage* beverage);
	~Milk();

	float GetCost() override;
	string GetDescription() override;
};

