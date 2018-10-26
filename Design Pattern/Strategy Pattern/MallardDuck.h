#pragma once
#include "Duck.h"
class MallardDuck :
	public Duck
{
public:
	MallardDuck();
	~MallardDuck();

	void Swim() override;
	void Display() override;
};

