#pragma once
#include "Controller.h"

// 컨트롤러는 뷰, 모델 사이의 mediator와 유사한 역할을 한다.
// 컨트롤러에서 뷰를 할당하고, 해당 뷰에서 전략 객체로 작용한다.

class BeatModel;
class BeatView;

class BPMController :
	public Controller
{
public:
	BPMController(BeatModel* model);
	~BPMController();

	void Start();
	void Stop();

	void IncreaseBPM();
	void DecreaseBPM();
	void SetBPM(int bpm);

private:
	BeatModel* model;
	BeatView* view;
};

