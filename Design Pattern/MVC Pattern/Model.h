#pragma once
#include "BeatObserver.h"
class Model
{
public:
	Model();
	virtual ~Model();
	virtual void AddObserver(BeatObserver* ob) = 0;
	virtual void RemoveObserver(BeatObserver* ob) = 0;
	virtual void NotifyObserver() = 0;
};

