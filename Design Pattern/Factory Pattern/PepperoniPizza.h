#pragma once
#include "Pizza.h"
class PepperoniPizza :
	public Pizza
{
public:
	PepperoniPizza(IngredientFactory* factory);
	~PepperoniPizza();

	void prepare() override;
};

