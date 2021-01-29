#include "Duck.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include <memory>
#include <vector>

/**
	Adapter Pattern

	한 클래스의 인터페이스를 다른 인터페이스로 변환한다.
	
	인터페이스를 통일 시켜 클라이언트에서는 사용하고자할 클래스와 동일하게 접근할 수 있다.

*/

int main(int argc, char* argv[])
{
	auto pMallardDuck = std::make_shared<MallardDuck>();
	auto pWildTurkey = std::make_shared<WildTurkey>();
	auto pTurkeyAdapter = std::make_shared<TurkeyAdapter>(pWildTurkey.get());

	
	std::vector<Duck*> Ducks;
	Ducks.push_back(pMallardDuck.get());
	Ducks.push_back(pTurkeyAdapter.get());

	// WildTurkey도 MallardDuck과 같은 인터페이스로(Duck) 접근할 수 있다.
	for (auto&& it : Ducks)
	{
		it->Quack();
		it->Fly();
	}

	return 0;
}