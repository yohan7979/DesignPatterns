#pragma once
#include <iostream>
#include <string>
#include "Dough.h"
#include "Cheese.h"
#include "Clam.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "IngredientFactory.h"
#include "types.h"
using namespace std;

class Pizza
{
protected:
	Dough* dough;
	Sauce* sauce;
	Cheese* cheese;
	Clam* clam;
	Veggies* veggies;
	Pepperoni* pepperoni;

	string name;
	IngredientFactory* factory;

public:
	Pizza();
	virtual ~Pizza();
	virtual void prepare() = 0;
	virtual void bake();
	virtual void cut();
	virtual void box();

	void setname(string str);
	string getname() const;
};

