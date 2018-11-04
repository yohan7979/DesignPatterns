#pragma once
#include "Dough.h"
#include "Cheese.h"
#include "Sauce.h"
#include "Clam.h"
#include "Veggies.h"
#include "Pepperoni.h"

/** 추상 팩토리 **/
/** 
	- 제품군별로 팩토리 메서드를 가지고 있음
	- 구성으로 동작
**/
class IngredientFactory
{
public:
	IngredientFactory();
	virtual ~IngredientFactory();

	virtual Dough* CreateDough() = 0;
	virtual Sauce* CreateSauce() = 0;
	virtual Clam* CreateClam() = 0;
	virtual Veggies* CreateVeggies() = 0;
	virtual Cheese* CreateCheese() = 0;
	virtual Pepperoni* CreatePepperoni() = 0;
};

