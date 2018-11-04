#pragma once
#include <iostream>
using namespace std;

class Veggies
{
public:
	Veggies();
	virtual ~Veggies();
	virtual void prepare() = 0;
};

