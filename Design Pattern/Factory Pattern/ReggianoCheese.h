#pragma once
#include "Cheese.h"
class ReggianoCheese :
	public Cheese
{
public:
	ReggianoCheese();
	~ReggianoCheese();
	void prepare() override;
};

