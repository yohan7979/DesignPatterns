#include "PancakeHouseMenu.h"
#include "PancakeIteratorClass.h"


PancakeHouseMenu::PancakeHouseMenu()
{
	menuItems.add(new MenuItem(
		"K&B ������ũ ��Ʈ",
		"��ũ����� ���׿� �佺Ʈ�� ������ ������ũ",
		true,
		2.99));

	menuItems.add(new MenuItem(
		"���ַ� ������ũ ��Ʈ",
		"�ް� �Ķ��̿� �ҽ����� ������ ������ũ",
		false,
		2.99));

	menuItems.add(new MenuItem(
		"��纣�� ������ũ",
		"�ż��� ��纣���� ��纣�� �÷����� ���� ������ũ",
		true,
		3.49));

	menuItems.add(new MenuItem(
		"����",
		"����, ���⿡ ���� ��纣���� ���⸦ ���� �� �ֽ��ϴ�",
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
