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
			// Pull 방식 -> Observer가 Getter로 Subject로부터 데이터를 얻어옴. 여기서 직접 보내주지 않는다.
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
