#include "PepperoniPizza.h"



PepperoniPizza::PepperoniPizza(IngredientFactory* factory)
{
	this->factory = factory;
}


PepperoniPizza::~PepperoniPizza()
{
}

void PepperoniPizza::prepare()
{
	// ���丮�� ������ ���� �����Ѵ�.
	// ���丮�� ���� ��ü�� ���� Ŭ������ �������� �ʰ� ������ �� �ִ�.
	// �ʿ��� ��Ḹ ���丮�� ���� ��û�Ѵ�.

	cout << "prepare " << name << endl;
	dough = factory->CreateDough();			dough->prepare();
	sauce = factory->CreateSauce();			sauce->prepare();
	veggies = factory->CreateVeggies();		veggies->prepare();
	pepperoni = factory->CreatePepperoni();	pepperoni->prepare();
}
