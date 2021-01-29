#include "Duck.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include <memory>
#include <vector>

/**
	Adapter Pattern

	�� Ŭ������ �������̽��� �ٸ� �������̽��� ��ȯ�Ѵ�.
	
	�������̽��� ���� ���� Ŭ���̾�Ʈ������ ����ϰ����� Ŭ������ �����ϰ� ������ �� �ִ�.

*/

int main(int argc, char* argv[])
{
	auto pMallardDuck = std::make_shared<MallardDuck>();
	auto pWildTurkey = std::make_shared<WildTurkey>();
	auto pTurkeyAdapter = std::make_shared<TurkeyAdapter>(pWildTurkey.get());

	
	std::vector<Duck*> Ducks;
	Ducks.push_back(pMallardDuck.get());
	Ducks.push_back(pTurkeyAdapter.get());

	// WildTurkey�� MallardDuck�� ���� �������̽���(Duck) ������ �� �ִ�.
	for (auto&& it : Ducks)
	{
		it->Quack();
		it->Fly();
	}

	return 0;
}