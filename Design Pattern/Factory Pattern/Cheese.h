#pragma once
#include <iostream>
using namespace std;

class Cheese
{
public:
	Cheese();
	virtual ~Cheese();
	virtual void prepare() = 0;
};

