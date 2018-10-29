#pragma once
#include "CondimentDecorator.h"
class Mocha :
	public CondimentDecorator
{
public:
	Mocha(Beverage* beverage);
	~Mocha();

	float GetCost() override;
	string GetDescription() override;
};

