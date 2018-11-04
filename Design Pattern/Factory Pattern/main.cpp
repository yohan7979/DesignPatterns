/** Factory Pattern **/
/**
	팩토리를 사용하면 객체 생성을 캡슐화할 수 있다.
	구상 클래스에 대한 의존성을 줄여줌 -> 느슨한 결합을 만족하게 해준다.

	1. Factory Method
		상속을 사용하여 객체 생성을 서브 클래스가 결정하도록 위임한다.

	2. Abstract Factory
		인터페이스를 이용하여 연관된 객체를 구상 클래스를 지정하지 않고 생성할 수 있다.

	- 의존성 뒤집기 법칙
		고수준 구성요소가 저수준 구성요소에 의존하지 않는다.
		구상 형식에 대한 의존을 피하고 추상화를 지향한다.
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