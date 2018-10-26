#pragma once
#include <iostream>
using namespace std;

class FlyBehavior
{
public:
	FlyBehavior();
	virtual ~FlyBehavior();
	virtual void Fly() = 0;
};

