#pragma once
class BeatObserver
{
public:
	BeatObserver();
	virtual ~BeatObserver();

	virtual void UpdateBPM();
};

