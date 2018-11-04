/** Factory Pattern **/
/**
	���丮�� ����ϸ� ��ü ������ ĸ��ȭ�� �� �ִ�.
	���� Ŭ������ ���� �������� �ٿ��� -> ������ ������ �����ϰ� ���ش�.

	1. Factory Method
		����� ����Ͽ� ��ü ������ ���� Ŭ������ �����ϵ��� �����Ѵ�.

	2. Abstract Factory
		�������̽��� �̿��Ͽ� ������ ��ü�� ���� Ŭ������ �������� �ʰ� ������ �� �ִ�.

	- ������ ������ ��Ģ
		����� ������Ұ� ������ ������ҿ� �������� �ʴ´�.
		���� ���Ŀ� ���� ������ ���ϰ� �߻�ȭ�� �����Ѵ�.
**/

#include <iostream>
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "Pizza.h"
#include "types.h"
using namespace std;

int main(int argc, char* argv[])
{
	PizzaStore* nystore = new NYPizzaStore;
	nystore->OrderPizza(EPizza_Type::EPizza_Chesse);
	nystore->OrderPizza(EPizza_Type::EPizza_Clam);
	nystore->OrderPizza(EPizza_Type::EPizza_Pepperoni);
	nystore->OrderPizza(EPizza_Type::EPizza_Veggie);

	PizzaStore* ccstore = new ChicagoPizzaStore;
	ccstore->OrderPizza(EPizza_Type::EPizza_Chesse);
	ccstore->OrderPizza(EPizza_Type::EPizza_Clam);
	ccstore->OrderPizza(EPizza_Type::EPizza_Pepperoni);
	ccstore->OrderPizza(EPizza_Type::EPizza_Veggie);

	delete nystore;
	delete ccstore;

	return 0;
}