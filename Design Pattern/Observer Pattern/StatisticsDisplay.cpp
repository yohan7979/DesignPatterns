#include "StatisticsDisplay.h"



StatisticsDisplay::StatisticsDisplay(Observable* subject)
{
	this->subject = subject;
	subject->AddObserver(this);
}


StatisticsDisplay::~StatisticsDisplay()
{
	subject->RemoveObserver(this);
}

void StatisticsDisplay::Update()
{
	WeatherData* wd = static_cast<WeatherData*>(subject);
	if (wd != nullptr)
	{
		// 필요한 변수만 pull해온다.
		fTemperature = wd->GetTemperature();
		fPressure = wd->GetPressure();
	}

	Display();
}

void StatisticsDisplay::Display()
{
	cout << "StatisticsDisplay.. ";
	cout << " T: " << fTemperature;
	cout << " P: " << fPressure << endl;
}
