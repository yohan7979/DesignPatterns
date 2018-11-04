#pragma once
#include "IngredientFactory.h"
class ChicagoIngredientFactory :
	public IngredientFactory
{
public:
	ChicagoIngredientFactory();
	~ChicagoIngredientFactory();

	Dough* CreateDough() override;
	Sauce* CreateSauce() override;
	Clam* CreateClam() override;
	Veggies* CreateVeggies() override;
	Cheese* CreateCheese() override;
	Pepperoni* CreatePepperoni() override;
};

