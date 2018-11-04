#include "ChicagoIngredientFactory.h"
#include "ThickCrustDough.h"
#include "MozzarellaCheese.h"
#include "PlumTomatoSauce.h"
#include "FreshVeggies.h"
#include "FrozenClams.h"
#include "SlicedPepperoni.h"


ChicagoIngredientFactory::ChicagoIngredientFactory()
{
}


ChicagoIngredientFactory::~ChicagoIngredientFactory()
{
}

Dough * ChicagoIngredientFactory::CreateDough()
{
	return new ThickCrustDough;
}

Sauce * ChicagoIngredientFactory::CreateSauce()
{
	return new PlumTomatoSauce;
}

Clam* ChicagoIngredientFactory::CreateClam()
{
	return new FrozenClams;
}

Veggies * ChicagoIngredientFactory::CreateVeggies()
{
	return new FreshVeggies;
}

Cheese * ChicagoIngredientFactory::CreateCheese()
{
	return new MozzarellaCheese;
}

Pepperoni * ChicagoIngredientFactory::CreatePepperoni()
{
	return new SlicedPepperoni;
}
