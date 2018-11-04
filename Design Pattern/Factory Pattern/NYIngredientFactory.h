#pragma once
#include "IngredientFactory.h"
class NYIngredientFactory :
	public IngredientFactory
{
public:
	NYIngredientFactory();
	~NYIngredientFactory();

	Dough* CreateDough() override;
	Sauce* CreateSauce() override;
	Clam* CreateClam() override;
	Veggies* CreateVeggies() override;
	Cheese* CreateCheese() override;
	Pepperoni* CreatePepperoni() override;
};

