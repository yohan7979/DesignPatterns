#pragma once
#include "Duck.h"

class Turkey;

class TurkeyAdapter :
	public Duck
{
public:
	TurkeyAdapter(Turkey* _turkey) 
		: turkey(_turkey)
	{}

	virtual ~TurkeyAdapter()
	{
		turkey = nullptr;
	}

	virtual void Quack() override;
	virtual void Fly() override;

private:
	Turkey* turkey;
};

