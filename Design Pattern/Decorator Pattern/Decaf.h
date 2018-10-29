#pragma once
#include "Beverage.h"
class Decaf :
	public Beverage
{
public:
	Decaf();
	~Decaf();

	float GetCost() override;
};

