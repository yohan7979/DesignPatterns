#pragma once
#include "Beverage.h"
#include <string>

using namespace std;

class CondimentDecorator :
	public Beverage
{
public:
	CondimentDecorator();
	virtual ~CondimentDecorator();

	virtual string GetDescription() = 0;

protected:
	Beverage* beverage;
};

