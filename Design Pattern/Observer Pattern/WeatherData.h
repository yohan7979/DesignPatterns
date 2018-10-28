#pragma once
#include "Observable.h"

class WeatherData :
	public Observable
{
public:
	WeatherData();
	~WeatherData();

public:
	float GetTemperature();
	float GetHumidity();
	float GetPressure();

	void SetMeasurement(float T, float H, float P);

private:
	float fTemperature;
	float fHumidity;
	float fPressure;
};

