#pragma once
#include "FlyBehavior.h"
class FlyNormal :
	public FlyBehavior
{
public:
	FlyNormal();
	~FlyNormal();
	void Fly() override;
};

