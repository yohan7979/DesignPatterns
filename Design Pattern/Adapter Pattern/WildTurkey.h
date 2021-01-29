#pragma once
#include "Turkey.h"
class WildTurkey :
	public Turkey
{
public:
	virtual void Gobble() override;
	virtual void Fly() override;
};

