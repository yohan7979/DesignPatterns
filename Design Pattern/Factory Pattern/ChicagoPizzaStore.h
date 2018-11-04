#pragma once
#include "PizzaStore.h"
class ChicagoPizzaStore :
	public PizzaStore
{
public:
	ChicagoPizzaStore();
	~ChicagoPizzaStore();

	Pizza* CreatePizza(EPizza_Type eType) override;
};

