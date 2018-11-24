/** Observer Pattern **/

/** 한 객체의 상태가 바뀌면 그 객체에 의존하는 모든 객체들에게 전파하는 방식으로,
	One to Many의 의존성을 정의한다.

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