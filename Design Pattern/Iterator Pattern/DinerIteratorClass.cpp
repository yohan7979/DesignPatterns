#include "DinerIteratorClass.h"



DinerIteratorClass::DinerIteratorClass(MenuItem** menuitems)
{
	items = menuitems;
	position = 0;
}


DinerIteratorClass::~DinerIteratorClass()
{
}

MenuItem * DinerIteratorClass::next()
{
	return items[position++];
}

bool DinerIteratorClass::hasNext()
{
	int length = 4;

	if (position >= length || items[position] == nullptr)
	{
		return false;
	}

	return true;
}
