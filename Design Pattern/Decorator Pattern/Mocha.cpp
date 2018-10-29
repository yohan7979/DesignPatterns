#include "Mocha.h"



Mocha::Mocha(Beverage* beverage)
{
	this->beverage = beverage;
}


Mocha::~Mocha()
{
	if (beverage != nullptr)
		delete beverage;
}

float Mocha::GetCost()
{
	return beverage->GetCost() + 0.2f;
}

string Mocha::GetDescription()
{
	return beverage->GetDescription() + ", Mocha";
}
