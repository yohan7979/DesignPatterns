#pragma once
#include "Controller.h"
#include "Model.h"
#include "BeatObserver.h"

class View : public BeatObserver
{
public:
	View(Controller* controller, Model* model);
	virtual ~View();

protected:
	Controller* controller; // Àü·« °´Ã¼
	Model* model;
};

