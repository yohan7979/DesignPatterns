#include "ChicagoPizzaStore.h"
#include "ChicagoIngredientFactory.h"


ChicagoPizzaStore::ChicagoPizzaStore()
{
	factoryInstance = new ChicagoIngredientFactory;
}


ChicagoPizzaStore::~ChicagoPizzaStore()
{
	if (factoryInstance)
		delete factoryInstance;
}

Pizza * ChicagoPizzaStore::CreatePizza(EPizza_Type eType)
{
	Pizza* pizza = nullptr;

	switch (eType)
	{
	case EPizza_Type::EPizza_Chesse:
		pizza = new CheesePizza(factoryInstance);	// 팩토리를 인자로 넘겨준다.
		pizza->setname("Chicago CheesePizza");
		break;
	case EPizza_Type::EPizza_Veggie:
		pizza = new VeggiePizza(factoryInstance);
		pizza->setname("Chicago VeggiePizza");
		break;
	case EPizza_Type::EPizza_Clam:
		pizza = new ClamPizza(factoryInstance);
		pizza->setname("Chicago ClamPizza");
		break;
	case EPizza_Type::EPizza_Pepperoni:
		pizza = new PepperoniPizza(factoryInstance);
		pizza->setname("Chicago PepperoniPizza");
		break;
	}

	return pizza;
}
