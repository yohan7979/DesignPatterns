#pragma once
#include "Clam.h"
class FrozenClams :
	public Clam
{
public:
	FrozenClams();
	~FrozenClams();
	void prepare() override;
};

