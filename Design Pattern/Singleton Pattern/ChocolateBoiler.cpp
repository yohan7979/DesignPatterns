#include "ChocolateBoiler.h"

ChocolateBoiler* ChocolateBoiler::instance = nullptr;
mutex ChocolateBoiler::m_;

ChocolateBoiler::ChocolateBoiler()
{
	bEmpty = true;
	bBoiled = false;
}


ChocolateBoiler::~ChocolateBoiler()
{
	if (instance != nullptr)
		delete instance;
}

void ChocolateBoiler::fill()
{
	// ��������� ä���.
	if (isEmpty())
	{
		cout << "���ݷ� �����⸦ ä���." << endl;
		bEmpty = false;
		bBoiled = false;
	}
}

void ChocolateBoiler::drain()
{
	// ������� �ʰ� ������ �����Ѵ�.
	if (!isEmpty() && isBoiled())
	{
		cout << "�������� ���ݷ��� �����Ѵ�." << endl;
		bEmpty = true;
	}
}

void ChocolateBoiler::boil()
{
	// ������� �ʰ� ���� �ʴ´ٸ� ���δ�.
	if (!isEmpty() && !isBoiled())
	{
		cout << "�������� ���ݷ��� ���δ�." << endl;
		bBoiled = true;
	}
}

bool ChocolateBoiler::isEmpty()
{
	return bEmpty;
}

bool ChocolateBoiler::isBoiled()
{
	return bBoiled;
}