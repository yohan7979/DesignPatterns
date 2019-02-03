#pragma once
#include "BPMController.h"
#include "Model.h"
#include "View.h"

#include <iostream>
using namespace std;

class BeatView :
	public View
{
public:
	BeatView(Controller* controller, Model* model);
	~BeatView();

	void Display();
	void UpdateBPM();
};

