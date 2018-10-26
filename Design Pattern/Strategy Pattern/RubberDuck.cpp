#include "RubberDuck.h"
#include "FlyNot.h"
#include "QuackMute.h"


RubberDuck::RubberDuck()
{
	flybehavior = new FlyNot;
	quackbavior = new QuackMute;
}


RubberDuck::~RubberDuck()
{
}

void RubberDuck::Swim()
{
}

void RubberDuck::Display()
{
	cout << "³ª´Â RubberDuck." << endl;
}
