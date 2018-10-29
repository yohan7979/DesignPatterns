#pragma once
#include "CondimentDecorator.h"
class Whip :
	public CondimentDecorator
{
public:
	Whip(Beverage* beverage);
	~Whip();

	float GetCost() override;
	string GetDescription() override;
};

