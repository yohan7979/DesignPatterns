#include "Waitress.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "MenuItem.h"
#include <iostream>

using namespace std;

Waitress::Waitress(Menu* pencake, Menu* diner)
{
	menus.push_back(pencake);
	menus.push_back(diner);
}


Waitress::~Waitress()
{
	for (auto it : menus)
	{
		delete it;
	}
	menus.clear();
}

void Waitress::printMenu()
{
	// 인터페이스 클래스를 vector로 관리하여 모든 메뉴가 동일하게 동작
	for (Menu* menu : menus)
	{
		// 각 메뉴의 이터레이터를 얻어온다.
		IteratorClass* it = menu->GetIterator();

		// 메뉴별로 각 컬렉션에 적합한 이터레이터가 구현되어 있다.
		// 클라이언트는 Aggregate의 구현부를 알 필요없이 이터레이터만 쓰면 된다.
		while (it->hasNext())
		{
			MenuItem* item = it->next();
			cout << item->GetName() << endl;
			cout << item->GetPrice() << endl;
			cout << item->GetDestription() << endl;
		}
		delete it;
		cout << endl;
	}
}
