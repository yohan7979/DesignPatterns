#pragma once
#include "Beverage.h"
class HouseBlend :
	public Beverage
{
public:
	HouseBlend();
	~HouseBlend();

	float GetCost() override;
};

