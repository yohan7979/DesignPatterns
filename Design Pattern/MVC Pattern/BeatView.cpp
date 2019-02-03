#include "BeatView.h"
#include "BeatModel.h"

BeatView::BeatView(Controller * controller, Model * model) : View(controller, model)
{
	
}

BeatView::~BeatView()
{
}

void BeatView::Display()
{
	BeatModel* beatModel = static_cast<BeatModel*>(model); // �𵨷κ��� pull
	if (beatModel)
	{
		cout << "Activated : " << beatModel->IsActivated() << endl;
		cout << "BPM : " << beatModel->GetBPM() << endl;
	}
}

void BeatView::UpdateBPM()
{
	cout << "BeatModel update notified" << endl;
}
