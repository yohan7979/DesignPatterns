#pragma once
#include "Model.h"
#include <vector>
#include <algorithm>
using namespace std;

// 모델은 로직을 수행하는데만 전념한다.
// 옵저버 패턴을 활용하여 느슨할 결합을 하기 때문.

class BeatModel :
	public Model
{
public:
	BeatModel();
	~BeatModel();

	void On();
	void Off();
	bool IsActivated() const;

	void IncreaseBPM();
	void DecreaseBPM();
	void SetBPM(int bpm);
	int GetBPM() const;

	void AddObserver(BeatObserver* ob);
	void RemoveObserver(BeatObserver* ob);
	void NotifyObserver();

private:
	int BPM;
	bool bActivated;
	vector<BeatObserver*> observers;
};

