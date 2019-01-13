#pragma once
#include <string>

using namespace std;

class MenuItem
{
protected:
	string name;
	string description;
	bool vegetarian;
	double price;

public:
	MenuItem(string name, string description, bool vegetarian, double price);
	~MenuItem();

public:
	string GetName() const;
	string GetDestription() const;
	double GetPrice() const;
	bool IsVegetarian() const;

};

