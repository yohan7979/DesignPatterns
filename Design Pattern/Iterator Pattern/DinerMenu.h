#pragma once
#include "Menu.h"
#include "MenuItem.h"
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

