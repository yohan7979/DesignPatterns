#include "DinerMenu.h"
#include "DinerIteratorClass.h"

DinerMenu::DinerMenu()
{
	for (int i = 0; i < MAX_ITEMS; ++i)
	{
		menuItems[i] = nullptr;
	}


	menuItems[0] = new MenuItem(
		"채식주의자용 BLT",
		"통밀 위에(식물성) 베이컨, 상추, 토마토를 얹은 메뉴",
		true,
		2.99);
	
	menuItems[1] = new MenuItem(
		"BLT",
		"통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴",
		false,
		2.99);

	menuItems[2] = new MenuItem(
		"오늘의 스프",
		"감자 샐러드를 곁들인 오늘의 스프",
		false,
		3.29);

	menuItems[3] = new MenuItem(
		"핫도그",
		"샤워크라우트, 갖은 양념, 양파, 치즈가 곁들여진 핫도그",
		false,
		3.05);
}


DinerMenu::~DinerMenu()
{
	for (int i = 0; i < MAX_ITEMS; ++i)
	{
		if (menuItems[i] != nullptr)
		{
			delete menuItems[i];
		}
	}
}

IteratorClass * DinerMenu::GetIterator()
{
	return new DinerIteratorClass(menuItems);
}
