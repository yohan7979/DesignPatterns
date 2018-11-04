#pragma once
#include "Pepperoni.h"
class SlicedPepperoni :
	public Pepperoni
{
public:
	SlicedPepperoni();
	~SlicedPepperoni();
	void prepare() override;
};

