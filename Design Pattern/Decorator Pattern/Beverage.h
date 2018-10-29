#pragma once
#include <string>
using namespace std;

class Beverage
{
public:
	Beverage();
	virtual ~Beverage();
	virtual float GetCost() = 0;
	virtual string GetDescription();

protected:
	string description;
};

