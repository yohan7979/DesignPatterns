#pragma once
#include "IteratorClass.h"
class DinerIteratorClass :
	public IteratorClass
{
private:
	MenuItem** items;
	int position;

public:
	DinerIteratorClass(MenuItem** menuitems);
	~DinerIteratorClass();

public:
	virtual MenuItem* next();
	virtual bool hasNext();
};

