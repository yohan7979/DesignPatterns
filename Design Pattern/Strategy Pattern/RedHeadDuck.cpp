#include "RedHeadDuck.h"
#include "FlyNormal.h"
#include "Squeak.h"


RedHeadDuck::RedHeadDuck()
{
	flybehavior = new FlyNormal;
	quackbavior = new Squeak;
}


RedHeadDuck::~RedHeadDuck()
{
}

void RedHeadDuck::Swim()
{
}

void RedHeadDuck::Display()
{
	cout << "³ª´Â RedHeadDuck." << endl;
}
