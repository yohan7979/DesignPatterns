/** Observer Pattern **/

/** �� ��ü�� ���°� �ٲ�� �� ��ü�� �����ϴ� ��� ��ü�鿡�� �����ϴ� �������,
	One to Many�� �������� �����Ѵ�.

**/

#include <iostream>
#include "Observable.h"
#include "WeatherData.h"
#include "Observer.h"
#include "ForecastDisplay.h"
#include "GeneralDisplay.h"
#include "StatisticsDisplay.h"
using namespace std;

int main(int argc, char* argv[])
{
	WeatherData* wd = new WeatherData;
	Observer* ofd = new ForecastDisplay(wd);
	Observer* ogd = new GeneralDisplay(wd);
	Observer* osd = new StatisticsDisplay(wd);

	wd->SetMeasurement(10.f, 20.f, 30.f);
	wd->SetMeasurement(11.f, 22.f, 33.f);

	wd->RemoveObserver(ogd);
	wd->SetMeasurement(12.f, 23.f, 34.f);

	delete ofd;
	delete ogd;
	delete osd;
	delete wd;

	return 0;
}