#pragma once
#include "Controller.h"

// ��Ʈ�ѷ��� ��, �� ������ mediator�� ������ ������ �Ѵ�.
// ��Ʈ�ѷ����� �並 �Ҵ��ϰ�, �ش� �信�� ���� ��ü�� �ۿ��Ѵ�.

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

