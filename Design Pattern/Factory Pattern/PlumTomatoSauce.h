#pragma once
#include "Sauce.h"
class PlumTomatoSauce :
	public Sauce
{
public:
	PlumTomatoSauce();
	~PlumTomatoSauce();
	void prepare() override;
};

