#include "DinerMenu.h"
#include "DinerIteratorClass.h"

DinerMenu::DinerMenu()
{
	for (int i = 0; i < MAX_ITEMS; ++i)
	{
		menuItems[i] = nullptr;
	}


	menuItems[0] = new MenuItem(
		"ä�������ڿ� BLT",
		"��� ����(�Ĺ���) ������, ����, �丶�並 ���� �޴�",
		true,
		2.99);
	
	menuItems[1] = new MenuItem(
		"BLT",
		"��� ���� ������, ����, �丶�並 ���� �޴�",
		false,
		2.99);

	menuItems[2] = new MenuItem(
		"������ ����",
		"���� �����带 ����� ������ ����",
		false,
		3.29);

	menuItems[3] = new MenuItem(
		"�ֵ���",
		"����ũ���Ʈ, ���� ���, ����, ġ� ��鿩�� �ֵ���",
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
