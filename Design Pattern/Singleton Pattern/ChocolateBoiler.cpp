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
	// 비어있으면 채운다.
	if (isEmpty())
	{
		cout << "초콜렛 가열기를 채운다." << endl;
		bEmpty = false;
		bBoiled = false;
	}
}

void ChocolateBoiler::drain()
{
	// 비어있지 않고 끓으면 추출한다.
	if (!isEmpty() && isBoiled())
	{
		cout << "가열기의 초콜렛을 추출한다." << endl;
		bEmpty = true;
	}
}

void ChocolateBoiler::boil()
{
	// 비어있지 않고 끓지 않는다면 끓인다.
	if (!isEmpty() && !isBoiled())
	{
		cout << "가열기의 초콜렛을 끓인다." << endl;
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