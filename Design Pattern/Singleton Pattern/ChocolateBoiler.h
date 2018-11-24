#pragma once
#include <iostream>
#include <string>
#include <mutex>
using namespace std;

class ChocolateBoiler
{
private:
	bool bEmpty;
	bool bBoiled;

private:
	ChocolateBoiler();
	~ChocolateBoiler();

public:
	void fill();
	void drain();
	void boil();

	bool isEmpty();
	bool isBoiled();

private:
	static ChocolateBoiler* instance;
	static mutex m_;

public:
	static ChocolateBoiler* GetInstance()
	{
		if (instance == nullptr)
		{
			m_.lock(); // 객체 생성할 때만 락을 건다.

			// Double-Checking Lock
			if (instance == nullptr)
			{
				cout << "Create Instance" << endl;
				instance = new ChocolateBoiler; // 게으른 생성
			}

			m_.unlock();
		}
		return instance;
	}
};

