#pragma once
#include "PizzaStore.h"
class NYPizzaStore :
	public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	Pizza* CreatePizza(EPizza_Type eType) override;
};

