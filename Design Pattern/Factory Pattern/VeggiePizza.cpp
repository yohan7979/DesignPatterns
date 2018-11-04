#include "VeggiePizza.h"



VeggiePizza::VeggiePizza(IngredientFactory* factory)
{
	this->factory = factory;
}


VeggiePizza::~VeggiePizza()
{
}

void VeggiePizza::prepare()
{
	// ���丮�� ������ ���� �����Ѵ�.
	// ���丮�� ���� ��ü�� ���� Ŭ������ �������� �ʰ� ������ �� �ִ�.
	// �ʿ��� ��Ḹ ���丮�� ���� ��û�Ѵ�.

	cout << "prepare " << name << endl;
	dough = factory->CreateDough();		dough->prepare();
	sauce = factory->CreateSauce();		sauce->prepare();
	cheese = factory->CreateCheese();	cheese->prepare();
	veggies = factory->CreateVeggies(); veggies->prepare();
}
