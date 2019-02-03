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
	BeatModel* beatModel = static_cast<BeatModel*>(model); // 모델로부터 pull
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
