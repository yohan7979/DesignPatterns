#pragma once
#include "Dough.h"
class ThinCrustDough :
	public Dough
{
public:
	ThinCrustDough();
	~ThinCrustDough();
	void prepare() override;
};

