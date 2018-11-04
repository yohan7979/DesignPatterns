#pragma once
#include "Dough.h"
class ThickCrustDough :
	public Dough
{
public:
	ThickCrustDough();
	~ThickCrustDough();
	void prepare() override;
};

