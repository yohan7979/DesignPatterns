#pragma once
#include "Pizza.h"
class VeggiePizza :
	public Pizza
{
public:
	VeggiePizza(IngredientFactory* factory);
	~VeggiePizza();

	void prepare() override;
};

