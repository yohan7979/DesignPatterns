#pragma once
#include "Pizza.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include <string>

class PizzaStore
{
public:
	PizzaStore();
	virtual ~PizzaStore();
	virtual Pizza* CreatePizza(EPizza_Type eType) = 0; // Factory Method
	virtual void OrderPizza(EPizza_Type eType) final;

protected:
	IngredientFactory* factoryInstance;
};

