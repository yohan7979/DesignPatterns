#include "PancakeIteratorClass.h"



PancakeIteratorClass::PancakeIteratorClass(LinkedList<MenuItem*> menuitems)
{
	items = menuitems;
	currentNode = menuitems.GetHead();

}


PancakeIteratorClass::~PancakeIteratorClass()
{
}

MenuItem * PancakeIteratorClass::next()
{
	if (currentNode)
	{
		MenuItem* ret = currentNode->data;
		currentNode = currentNode->next;

		return ret;
	}
	
	return nullptr;
}

bool PancakeIteratorClass::hasNext()
{
	return currentNode != nullptr;
}
