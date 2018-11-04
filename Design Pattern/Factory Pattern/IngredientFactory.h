#pragma once
#include "Dough.h"
#include "Cheese.h"
#include "Sauce.h"
#include "Clam.h"
#include "Veggies.h"
#include "Pepperoni.h"

/** �߻� ���丮 **/
/** 
	- ��ǰ������ ���丮 �޼��带 ������ ����
	- �������� ����
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

