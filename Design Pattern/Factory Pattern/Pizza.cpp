#include "Pizza.h"



Pizza::Pizza()
{
}


Pizza::~Pizza()
{
	if (dough)		delete dough;
	if (sauce)		delete sauce;
	if (cheese)		delete cheese;
	if (clam)		delete clam;
	if (veggies)	delete veggies;
	if (pepperoni)	delete pepperoni;
}

void Pizza::bake()
{
	cout << "bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
	cout << "cutting the pizza intto diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "place pizza in official PizzaStore box" << endl;
}

void Pizza::setname(string str)
{
	name = str;
}

string Pizza::getname() const
{
	return name;
}
