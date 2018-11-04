#pragma once
#include <iostream>
using namespace std;

class Clam
{
public:
	Clam();
	virtual ~Clam();
	virtual void prepare() = 0;
};

