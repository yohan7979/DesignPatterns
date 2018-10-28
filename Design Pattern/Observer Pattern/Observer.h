#pragma once
#include "Observable.h"
#include "WeatherData.h"

class Observer
{
public:
	Observer();
	virtual ~Observer();

	virtual void Update() = 0;
	virtual void Display() = 0;

protected:
	Observable* subject;
};

