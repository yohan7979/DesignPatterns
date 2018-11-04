#include "NYIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "FreshVeggies.h"
#include "FreshClams.h"
#include "SlicedPepperoni.h"

NYIngredientFactory::NYIngredientFactory()
{
}


NYIngredientFactory::~NYIngredientFactory()
{
}

Dough * NYIngredientFactory::CreateDough()
{
	return new ThinCrustDough;
}

Sauce * NYIngredientFactory::CreateSauce()
{
	return new MarinaraSauce;
}

Clam * NYIngredientFactory::CreateClam()
{
	return new FreshClams;
}

Veggies * NYIngredientFactory::CreateVeggies()
{
	return new FreshVeggies;
}

Cheese * NYIngredientFactory::CreateCheese()
{
	return new ReggianoCheese;
}

Pepperoni * NYIngredientFactory::CreatePepperoni()
{
	return new SlicedPepperoni;
}
