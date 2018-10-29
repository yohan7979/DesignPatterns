#pragma once
#include "CondimentDecorator.h"
class Soy :
	public CondimentDecorator
{
public:
	Soy(Beverage* beverage);
	~Soy();

	float GetCost() override;
	string GetDescription() override;
};

