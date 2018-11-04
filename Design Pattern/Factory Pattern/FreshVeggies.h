#pragma once
#include "Veggies.h"
class FreshVeggies :
	public Veggies
{
public:
	FreshVeggies();
	~FreshVeggies();
	void prepare() override;
};

