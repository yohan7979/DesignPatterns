#include "TurkeyAdapter.h"
#include "Turkey.h"

void TurkeyAdapter::Quack()
{
	if (turkey)
	{
		turkey->Gobble();
	}
}

void TurkeyAdapter::Fly()
{
	if (turkey)
	{
		turkey->Fly();
	}
}
