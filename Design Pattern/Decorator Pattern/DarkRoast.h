#pragma once
#include "Beverage.h"
class DarkRoast :
	public Beverage
{
public:
	DarkRoast();
	~DarkRoast();

	float GetCost() override;
};

