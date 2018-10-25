#pragma once
#include "FlyBehavior.h"
class FlyNot :
	public FlyBehavior
{
public:
	FlyNot();
	~FlyNot();
	void Fly() override;
};

