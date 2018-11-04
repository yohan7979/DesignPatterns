#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}


PizzaStore::~PizzaStore()
{
}

void PizzaStore::OrderPizza(EPizza_Type eType)
{
	// 팩토리 메서드에 의해 클라이언트는 구상 클래스에 대해 알 필요가 없다. (느슨한 결합)
	Pizza* pizza = CreatePizza(eType);

	if (pizza != nullptr)
	{
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}

	delete pizza;
}
