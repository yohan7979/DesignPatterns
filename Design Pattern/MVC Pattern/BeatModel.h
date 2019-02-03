#pragma once
#include "Model.h"
#include <vector>
#include <algorithm>
using namespace std;

// ���� ������ �����ϴµ��� �����Ѵ�.
// ������ ������ Ȱ���Ͽ� ������ ������ �ϱ� ����.

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

