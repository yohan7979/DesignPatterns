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
			m_.lock(); // ��ü ������ ���� ���� �Ǵ�.

			// Double-Checking Lock
			if (instance == nullptr)
			{
				cout << "Create Instance" << endl;
				instance = new ChocolateBoiler; // ������ ����
			}

			m_.unlock();
		}
		return instance;
	}
};

