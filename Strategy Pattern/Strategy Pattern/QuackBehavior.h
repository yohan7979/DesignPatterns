#pragma once
#include <iostream>
using namespace std;

class QuackBehavior
{
public:
	QuackBehavior();
	virtual ~QuackBehavior();
	virtual void Quack() = 0;
};

