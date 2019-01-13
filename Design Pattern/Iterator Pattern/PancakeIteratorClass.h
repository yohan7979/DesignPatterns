#pragma once
#include "IteratorClass.h"
#include "linkedlist.h"

class PancakeIteratorClass :
	public IteratorClass
{
private:
	LinkedList<MenuItem*> items;
	Node<MenuItem*> * currentNode;

public:
	PancakeIteratorClass(LinkedList<MenuItem*> menuitems);
	~PancakeIteratorClass();

public:
	virtual MenuItem* next();
	virtual bool hasNext();
};

