#pragma once
#include "Observer.h"
class ForecastDisplay :
	public Observer
{
public:
	ForecastDisplay(Observable* subject);
	~ForecastDisplay();

public:
	virtual void Update();
	virtual void Display();

private:
	float fTemperature;
	float fHumidity;
	float fPressure;
};

