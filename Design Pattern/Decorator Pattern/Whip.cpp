#include "Whip.h"



Whip::Whip(Beverage* beverage)
{
	this->beverage = beverage;
}


Whip::~Whip()
{
	if (beverage != nullptr)
		delete beverage;
}

float Whip::GetCost()
{
	return beverage->GetCost() + 0.4f;
}

string Whip::GetDescription()
{
	return beverage->GetDescription() + ", Whip";
}
