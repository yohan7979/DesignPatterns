#pragma once
#include <iostream>
using namespace std;

class Sauce
{
public:
	Sauce();
	virtual ~Sauce();
	virtual void prepare() = 0;
};

