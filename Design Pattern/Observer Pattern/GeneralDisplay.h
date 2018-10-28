#pragma once
#include "Observer.h"
class GeneralDisplay :
	public Observer
{
public:
	GeneralDisplay(Observable* subject);
	~GeneralDisplay();

public:
	virtual void Update();
	virtual void Display();

private:
	float fTemperature;
	float fHumidity;
	float fPressure;
};

