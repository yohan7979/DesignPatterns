#pragma once
#include "Duck.h"
class RubberDuck :
	public Duck
{
public:
	RubberDuck();
	~RubberDuck();

	void Swim() override;
	void Display() override;
};

