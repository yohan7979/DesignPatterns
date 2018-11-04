#pragma once
#include "Cheese.h"
class MozzarellaCheese :
	public Cheese
{
public:
	MozzarellaCheese();
	~MozzarellaCheese();
	void prepare() override;
};

