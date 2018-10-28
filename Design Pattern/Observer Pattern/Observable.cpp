#include "Observable.h"
#include "Observer.h"

Observable::Observable()
{
}


Observable::~Observable()
{
	observers.clear();
}

void Observable::AddObserver(Observer * ob)
{
	observers.push_back(ob);
}

void Observable::RemoveObserver(Observer * ob)
{
	auto it = remove(observers.begin(), observers.end(), ob);
	observers.erase(it, observers.end());
}

void Observable::NotifyObservers()
{
	if (HasChanged())
	{
		for (auto& it : observers)
		{
			// Pull ��� -> Observer�� Getter�� Subject�κ��� �����͸� ����. ���⼭ ���� �������� �ʴ´�.
			it->Update();
		}
	}

	SetChanged(false);
}

void Observable::SetChanged(bool bFlag)
{
	bChanged = bFlag;
}

bool Observable::HasChanged()
{
	return bChanged;
}
