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
	virtual void prepareRecipe() final;	// 템플릿 메소드
	virtual void brew() = 0;			// 추상 메소드
	virtual void addCondiments() = 0;	// 추상 메소드
	void boilWater();					// 구상 메소드
	void pourInCup();					// 구상 메소드
	bool IsAddCondiments();
};

