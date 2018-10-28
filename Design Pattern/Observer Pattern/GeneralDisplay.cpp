#include "GeneralDisplay.h"



GeneralDisplay::GeneralDisplay(Observable* subject)
{
	this->subject = subject;
	subject->AddObserver(this);
}


GeneralDisplay::~GeneralDisplay()
{
	subject->RemoveObserver(this);
}

void GeneralDisplay::Update()
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

void GeneralDisplay::Display()
{
	cout << "GeneralDisplay.. ";
	cout << " T: " << fTemperature;
	cout << " H: " << fHumidity;
	cout << " P: " << fPressure << endl;
}
