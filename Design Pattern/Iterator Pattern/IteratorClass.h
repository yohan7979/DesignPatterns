#pragma once
#include "MenuItem.h"

class IteratorClass
{
public:
	IteratorClass();
	virtual ~IteratorClass();

public:
	virtual MenuItem* next() = 0;
	virtual bool hasNext() = 0;
};

