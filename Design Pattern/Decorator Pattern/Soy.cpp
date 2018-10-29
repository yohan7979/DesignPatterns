#include "Soy.h"



Soy::Soy(Beverage* beverage)
{
	this->beverage = beverage;
}


Soy::~Soy()
{
	if (beverage != nullptr)
		delete beverage;
}

float Soy::GetCost()
{
	return beverage->GetCost() + 0.3f;
}

string Soy::GetDescription()
{
	return beverage->GetDescription() + ", Soy";
}
