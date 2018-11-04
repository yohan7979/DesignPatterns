#pragma once
#include "Pizza.h"
class CheesePizza :
	public Pizza
{
public:
	CheesePizza(IngredientFactory* factory);
	~CheesePizza();

	void prepare() override;
};

