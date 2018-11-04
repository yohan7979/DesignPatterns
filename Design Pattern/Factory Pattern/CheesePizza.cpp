#include "CheesePizza.h"



CheesePizza::CheesePizza(IngredientFactory* factory)
{
	this->factory = factory;
}


CheesePizza::~CheesePizza()
{
}

void CheesePizza::prepare()
{
	// 팩토리는 구성을 통해 동작한다.
	// 팩토리를 통해 객체를 구상 클래스를 지정하지 않고 생성할 수 있다.
	// 필요한 재료만 팩토리에 생성 요청한다.

	cout << "prepare " << name << endl;
	dough = factory->CreateDough();		dough->prepare();
	sauce = factory->CreateSauce();		sauce->prepare();
	cheese = factory->CreateCheese();	cheese->prepare();
}