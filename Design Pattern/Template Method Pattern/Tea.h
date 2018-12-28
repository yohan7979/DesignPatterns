#pragma once
#include "CaffeineBeverage.h"
class Tea :
	public CaffeineBeverage
{
public:
	Tea();
	virtual ~Tea();

	virtual void brew();
	virtual void addCondiments();
};

