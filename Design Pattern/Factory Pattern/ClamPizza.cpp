#include "ClamPizza.h"



ClamPizza::ClamPizza(IngredientFactory* factory)
{
	this->factory = factory;
}


ClamPizza::~ClamPizza()
{
}

void ClamPizza::prepare()
{
	// ���丮�� ������ ���� �����Ѵ�.
	// ���丮�� ���� ��ü�� ���� Ŭ������ �������� �ʰ� ������ �� �ִ�.
	// �ʿ��� ��Ḹ ���丮�� ���� ��û�Ѵ�.

	cout << "prepare " << name << endl;
	dough = factory->CreateDough();			dough->prepare();
	sauce = factory->CreateSauce();			sauce->prepare();
	cheese = factory->CreateCheese();		cheese->prepare();
	veggies = factory->CreateVeggies();		veggies->prepare();
	clam = factory->CreateClam();			clam->prepare();
}
