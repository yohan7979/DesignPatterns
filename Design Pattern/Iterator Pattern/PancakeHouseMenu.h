#pragma once
#include "Menu.h"
#include "MenuItem.h"
#include "linkedlist.h"
using namespace std;

class PancakeHouseMenu : public Menu
{
private:
	LinkedList<MenuItem*> menuItems;

public:
	PancakeHouseMenu();
	virtual ~PancakeHouseMenu();

	virtual IteratorClass* GetIterator();
};

