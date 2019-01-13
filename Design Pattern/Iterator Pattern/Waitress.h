#pragma once
#include "Menu.h"
#include <vector>
using namespace std;

class Waitress
{
private:
	vector<Menu*> menus;

public:
	Waitress(Menu* pencake, Menu* diner);
	~Waitress();

public:
	void printMenu();
};

