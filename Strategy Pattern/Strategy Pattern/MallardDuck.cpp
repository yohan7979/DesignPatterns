#include "MallardDuck.h"
#include "FlyNormal.h"
#include "QuackNormal.h"

MallardDuck::MallardDuck()
{
	flybehavior = new FlyNormal;
	quackbavior = new QuackNormal;
}


MallardDuck::~MallardDuck()
{
}

void MallardDuck::Swim()
{
}

void MallardDuck::Display()
{
	cout << "³ª´Â MallardDuck." << endl;
}
