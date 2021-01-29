#pragma once
#include "Duck.h"

class MallardDuck :
	public Duck
{
public:
	virtual void Quack() override;
	virtual void Fly() override;
};

