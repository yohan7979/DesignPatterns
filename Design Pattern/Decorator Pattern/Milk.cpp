#include "Milk.h"



Milk::Milk(Beverage* beverage)
{
	this->beverage = beverage;
}


Milk::~Milk()
{
	if (beverage != nullptr)
		delete beverage;
}

float Milk::GetCost()
{
	return beverage->GetCost() + 0.1f;
}

string Milk::GetDescription()
{
	return beverage->GetDescription() + ", Milk";
}
