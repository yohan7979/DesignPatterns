#include "BeatModel.h"



BeatModel::BeatModel()
{
	BPM = 100;
}


BeatModel::~BeatModel()
{
	observers.clear();
}

void BeatModel::On()
{
	bActivated = true;
}

void BeatModel::Off()
{
	bActivated = false;
}

void BeatModel::IncreaseBPM()
{
	++BPM;
}

void BeatModel::DecreaseBPM()
{
	--BPM;
}

void BeatModel::SetBPM(int bpm)
{
	BPM = bpm;
}

int BeatModel::GetBPM() const
{
	return BPM;
}

bool BeatModel::IsActivated() const
{
	return bActivated;
}

void BeatModel::AddObserver(BeatObserver * ob)
{
	observers.push_back(ob);
}

void BeatModel::RemoveObserver(BeatObserver * ob)
{
	auto it = remove(observers.begin(), observers.end(), ob);
	observers.erase(it, observers.end());
}

void BeatModel::NotifyObserver()
{
	for (auto it : observers)
	{
		it->UpdateBPM();
	}
}
