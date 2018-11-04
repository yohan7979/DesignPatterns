#pragma once
#include "Veggies.h"
class FrozenVeggies :
	public Veggies
{
public:
	FrozenVeggies();
	~FrozenVeggies();
	void prepare() override;
};

