#pragma once
#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"
using namespace std;

class Duck
{
public:
	Duck();
	virtual ~Duck();
	virtual void Swim() = 0;
	virtual void Display() = 0;
	
	void PerformFly();
	void PerformQuack();

	void SetFlyBehavior(FlyBehavior* fb);
	void SetQuackBehavior(QuackBehavior* qb);

protected:
	FlyBehavior* flybehavior;
	QuackBehavior* quackbavior;
};

