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
	// �������̽� Ŭ������ vector�� �����Ͽ� ��� �޴��� �����ϰ� ����
	for (Menu* menu : menus)
	{
		// �� �޴��� ���ͷ����͸� ���´�.
		IteratorClass* it = menu->GetIterator();

		// �޴����� �� �÷��ǿ� ������ ���ͷ����Ͱ� �����Ǿ� �ִ�.
		// Ŭ���̾�Ʈ�� Aggregate�� �����θ� �� �ʿ���� ���ͷ����͸� ���� �ȴ�.
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
