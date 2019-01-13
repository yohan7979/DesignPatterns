#include "PancakeHouseMenu.h"
#include "PancakeIteratorClass.h"


PancakeHouseMenu::PancakeHouseMenu()
{
	menuItems.add(new MenuItem(
		"K&B 팬케이크 세트",
		"스크램블드 에그와 토스트가 곁들어진 팬케이크",
		true,
		2.99));

	menuItems.add(new MenuItem(
		"레귤러 팬케이크 세트",
		"달걀 후라이와 소시지가 곁들어진 팬케이크",
		false,
		2.99));

	menuItems.add(new MenuItem(
		"블루베리 팬케이크",
		"신선한 블루베리와 블루베리 시럽으로 만든 팬케이크",
		true,
		3.49));

	menuItems.add(new MenuItem(
		"와플",
		"와플, 취향에 따라 블루베리나 딸기를 얹을 수 있습니다",
		true,
		3.59));
}


PancakeHouseMenu::~PancakeHouseMenu()
{
	menuItems.removeAll();
}

IteratorClass * PancakeHouseMenu::GetIterator()
{
	return new PancakeIteratorClass(menuItems);
}
