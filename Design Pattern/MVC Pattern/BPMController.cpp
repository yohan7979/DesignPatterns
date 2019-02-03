#include "BPMController.h"
#include "BeatModel.h"
#include "BeatView.h"


BPMController::BPMController(BeatModel* model)
{
	this->model = model;
	view = new BeatView(this, model);
}


BPMController::~BPMController()
{
	delete view;
}

void BPMController::Start()
{
	model->On();
	view->UpdateBPM();
	view->Display();
}

void BPMController::Stop()
{
	model->Off();
	view->UpdateBPM();
	view->Display();
}

void BPMController::IncreaseBPM()
{
	model->IncreaseBPM();
	view->UpdateBPM();
	view->Display();
}

void BPMController::DecreaseBPM()
{
	model->DecreaseBPM();
	view->UpdateBPM();
	view->Display();
}

void BPMController::SetBPM(int bpm)
{
	model->SetBPM(bpm);
	view->UpdateBPM();
	view->Display();
}
