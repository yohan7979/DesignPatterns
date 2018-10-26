#pragma once
#include "QuackBehavior.h"
class QuackMute :
	public QuackBehavior
{
public:
	QuackMute();
	~QuackMute();
	void Quack() override;
};

