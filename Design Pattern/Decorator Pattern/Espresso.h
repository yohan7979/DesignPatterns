#pragma once
#include "Beverage.h"
class Espresso :
	public Beverage
{
public:
	Espresso();
	~Espresso();

	float GetCost() override;
};

