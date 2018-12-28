#pragma once
#include "CaffeineBeverage.h"

class Coffee :
	public CaffeineBeverage
{
public:
	Coffee();
	virtual ~Coffee();

	virtual void brew();
	virtual void addCondiments();
};

