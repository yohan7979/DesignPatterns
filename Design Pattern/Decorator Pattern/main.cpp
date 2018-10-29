/** Decorator Pattern **/
/**
	��ü�� ���ο� �ൿ�� �������� �߰��Ѵ�. 
	OCP(Open Closed Principle) - Ȯ�忡�� �����ְ�, ���� �ڵ��� ��ȭ���� �����ִ�. �� �����ϴ� �����̴�.
	
	Decorator�� �ٸ��� ����� Component�� ������ ���� Ŭ������ ������ �ִ�.
	Component ��ü�� Decorator�� ���� �������鼭 ���ο� ������ �������� ���� �� �ִ�.

	��ü���� ���� Ŭ������ �����Ѵٸ� �� ������ ����ؼ��� �ȵȴ�.
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