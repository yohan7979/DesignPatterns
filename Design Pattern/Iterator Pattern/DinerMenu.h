#pragma once
#include "Menu.h"
#include "MenuItem.h"
#include <list>
using namespace std;

#define MAX_ITEMS 6

class DinerMenu : public Menu
{
private:
	MenuItem* menuItems[MAX_ITEMS];

public:
	DinerMenu();
	virtual ~DinerMenu();

	virtual IteratorClass* GetIterator();
};

