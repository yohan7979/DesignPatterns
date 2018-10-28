#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Observer;

class Observable
{
public:
	Observable();
	virtual ~Observable();

public:
	void AddObserver(Observer* ob);
	void RemoveObserver(Observer* ob);

protected:
	void NotifyObservers();
	void SetChanged(bool bFlag);
	bool HasChanged();

private:
	bool bChanged;
	vector<Observer*> observers;
};

