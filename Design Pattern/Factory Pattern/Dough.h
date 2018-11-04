#pragma once
#include <iostream>
using namespace std;

class Dough
{
public:
	Dough();
	virtual ~Dough();
	virtual void prepare() = 0;
};

