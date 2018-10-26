#pragma once
#include "Duck.h"
class RedHeadDuck :
	public Duck
{
public:
	RedHeadDuck();
	~RedHeadDuck();

	void Swim() override;
	void Display() override;
};

