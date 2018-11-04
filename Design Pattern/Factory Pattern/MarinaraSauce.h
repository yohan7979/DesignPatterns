#pragma once
#include "Sauce.h"
class MarinaraSauce :
	public Sauce
{
public:
	MarinaraSauce();
	~MarinaraSauce();
	void prepare() override;
};

