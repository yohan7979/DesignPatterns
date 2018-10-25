#pragma once
#include "QuackBehavior.h"
class QuackNormal :
	public QuackBehavior
{
public:
	QuackNormal();
	~QuackNormal();
	void Quack() override;
};

