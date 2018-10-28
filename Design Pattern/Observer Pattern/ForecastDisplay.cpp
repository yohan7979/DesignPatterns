#include "ForecastDisplay.h"



ForecastDisplay::ForecastDisplay(Observable* subject)
{
	this->subject = subject;
	subject->AddObserver(this);
}


ForecastDisplay::~ForecastDisplay()
{
	subject->RemoveObserver(this);
}

void ForecastDisplay::Update()
{
	WeatherData* wd = static_cast<WeatherData*>(subject);
	if (wd != nullptr)
	{
		fTemperature = wd->GetTemperature();
		fHumidity = wd->GetHumidity();
		fPressure = wd->GetPressure();
	}

	Display();
}

void ForecastDisplay::Display()
{
	cout << "ForecastDisplay.. ";
	cout << " T: " << fTemperature;
	cout << " H: " << fHumidity;
	cout << " P: " << fPressure << endl;
}
