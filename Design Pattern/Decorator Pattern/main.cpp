/** Decorator Pattern **/
/**
	객체에 새로운 행동을 동적으로 추가한다. 
	OCP(Open Closed Principle) - 확장에는 열려있고, 기존 코드의 변화에는 닫혀있다. 를 만족하는 패턴이다.
	
	Decorator는 꾸며줄 대상인 Component와 동일한 상위 클래스를 가지고 있다.
	Component 객체는 Decorator에 의해 감싸지면서 새로운 행위를 동적으로 얻을 수 있다.

	구체적인 구상 클래스에 의존한다면 이 패턴을 사용해서는 안된다.
**/

#include <iostream>
using namespace std;

#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "HouseBlend.h"

#include "Milk.h"
#include "Soy.h"
#include "Mocha.h"
#include "Whip.h"

int main(int argc, char* argv[])
{
	Beverage* hb = new HouseBlend;
	hb = new Milk(hb);
	hb = new Soy(hb);

	Beverage* df = new Decaf;
	df = new Mocha(df);
	df = new Mocha(df);
	df = new Whip(df);

	Beverage* es = new Espresso;
	es = new Soy(es);

	Beverage* dr = new DarkRoast;
	dr = new Milk(dr);
	dr = new Mocha(dr);
	dr = new Soy(dr);
	dr = new Whip(dr);

	cout << hb->GetDescription() << " = " << hb->GetCost() << endl;;
	cout << df->GetDescription() << " = " << df->GetCost() << endl;;
	cout << es->GetDescription() << " = " << es->GetCost() << endl;;
	cout << dr->GetDescription() << " = " << dr->GetCost() << endl;;

	delete hb;
	delete df;
	delete es;
	delete dr;

	return 0;
}