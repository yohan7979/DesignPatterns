#include "WeatherData.h"



WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
}

float WeatherData::GetTemperature()
{
	return fTemperature;
}

float WeatherData::GetHumidity()
{
	return fHumidity;
}

float WeatherData::GetPressure()
{
	return fPressure;
}

void WeatherData::SetMeasurement(float T, float H, float P)
{
	fTemperature = T;
	fHumidity = H;
	fPressure = P;

	SetChanged(true);
	NotifyObservers();
}
