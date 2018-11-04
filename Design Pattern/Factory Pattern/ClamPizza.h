#pragma once
#include "Pizza.h"
class ClamPizza :
	public Pizza
{
public:
	ClamPizza(IngredientFactory* factory);
	~ClamPizza();

	void prepare() override;
};

