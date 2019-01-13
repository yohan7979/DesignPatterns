#pragma once
#include "IteratorClass.h"
#include "MenuItem.h"

class Menu
{
public:
	Menu();
	virtual ~Menu();

	virtual IteratorClass* GetIterator() = 0;
};

