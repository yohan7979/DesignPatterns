#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}


PizzaStore::~PizzaStore()
{
}

void PizzaStore::OrderPizza(EPizza_Type eType)
{
	// ���丮 �޼��忡 ���� Ŭ���̾�Ʈ�� ���� Ŭ������ ���� �� �ʿ䰡 ����. (������ ����)
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
