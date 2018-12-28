#pragma once
#include <iostream>
#include <string>
using namespace std;

class CaffeineBeverage
{
public:
	CaffeineBeverage();
	~CaffeineBeverage();

public:
	virtual void prepareRecipe() final;	// ���ø� �޼ҵ�
	virtual void brew() = 0;			// �߻� �޼ҵ�
	virtual void addCondiments() = 0;	// �߻� �޼ҵ�
	void boilWater();					// ���� �޼ҵ�
	void pourInCup();					// ���� �޼ҵ�
	bool IsAddCondiments();
};

