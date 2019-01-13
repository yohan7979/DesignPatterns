#include "MenuItem.h"


MenuItem::MenuItem(string name, string description, bool vegetarian, double price)
{
	this->name = name;
	this->description = description;
	this->vegetarian = vegetarian;
	this->price = price;
}

MenuItem::~MenuItem()
{
}

string MenuItem::GetName() const
{
	return name;
}

string MenuItem::GetDestription() const
{
	return description;
}

double MenuItem::GetPrice() const
{
	return price;
}

bool MenuItem::IsVegetarian() const
{
	return vegetarian;
}
