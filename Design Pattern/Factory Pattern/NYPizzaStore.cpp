#include "NYPizzaStore.h"
#include "NYIngredientFactory.h"

NYPizzaStore::NYPizzaStore()
{
	factoryInstance = new NYIngredientFactory;
}


NYPizzaStore::~NYPizzaStore()
{
	if (factoryInstance)
		delete factoryInstance;
}

Pizza * NYPizzaStore::CreatePizza(EPizza_Type eType)
{
	Pizza* pizza = nullptr;

	switch (eType)
	{
	case EPizza_Type::EPizza_Chesse:
		pizza = new CheesePizza(factoryInstance);	// 팩토리를 인자로 넘겨준다.
		pizza->setname("NYPizzaStore CheesePizza");
		break;
	case EPizza_Type::EPizza_Veggie:
		pizza = new VeggiePizza(factoryInstance);
		pizza->setname("NYPizzaStore VeggiePizza");
		break;
	case EPizza_Type::EPizza_Clam:
		pizza = new ClamPizza(factoryInstance);
		pizza->setname("NYPizzaStore ClamPizza");
		break;
	case EPizza_Type::EPizza_Pepperoni:
		pizza = new PepperoniPizza(factoryInstance);
		pizza->setname("NYPizzaStore PepperoniPizza");
		break;
	}

	return pizza;
}
