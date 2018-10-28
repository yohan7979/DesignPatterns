#pragma once
#include "Observer.h"
class StatisticsDisplay :
	public Observer
{
public:
	StatisticsDisplay(Observable* subject);
	~StatisticsDisplay();

public:
	virtual void Update();
	virtual void Display();

private:
	float fTemperature;
	float fPressure;
};

