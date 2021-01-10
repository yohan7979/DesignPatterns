/** Strategy Pattern **/

/**	알고리즘군을 정의하고 각각을 캡슐화하여 교환해서 사용할 수 있도록 만든다. (상속보다는 구성)
	알고리즘을 사용하는 클라이언트와는 독립적으로 알고리즘을 변경할 수 있다.
	
	디자인 원칙
	1. 동적인 부분과 정적인 부분을 분리시킨다.
	2. 구현이 아닌 인터페이스에 맞춰 프로그래밍한다.
	3. 상속보다는 구성을 사용한다.
**/

#include <iostream>
#include <vector>
using namespace std;

#include "Duck.h"
#include "MallardDuck.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"

int main(int argc, char* argv[])
{
	vector<Duck*> v;
	v.push_back(new MallardDuck());
	v.push_back(new RedHeadDuck());
	v.push_back(new RubberDuck());

	for (auto* it : v)
	{
		it->Display();
		it->PerformFly();
		it->PerformQuack();
		cout << endl;
		delete it;
	}
	
	v.clear();
	
	return 0;
}