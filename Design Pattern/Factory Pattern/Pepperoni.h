#pragma once
#include <iostream>
using namespace std;

class Pepperoni
{
public:
	Pepperoni();
	virtual ~Pepperoni();
	virtual void prepare() = 0;
};

