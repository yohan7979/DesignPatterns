#include "Duck.h"



Duck::Duck()
{
}


Duck::~Duck()
{
	delete flybehavior;
	delete quackbavior;
}

void Duck::PerformFly()
{
	if (flybehavior)
		flybehavior->Fly();
}

void Duck::PerformQuack()
{
	if (quackbavior)
		quackbavior->Quack();
}

void Duck::SetFlyBehavior(FlyBehavior* fb)
{
	if (flybehavior)
		delete flybehavior;

	flybehavior = fb;
}

void Duck::SetQuackBehavior(QuackBehavior* qb)
{
	if (quackbavior)
		delete quackbavior;

	quackbavior = qb;
}
