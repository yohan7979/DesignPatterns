/** Strategy Pattern **/

/**	�˰����� �����ϰ� ������ ĸ��ȭ�Ͽ� ��ȯ�ؼ� ����� �� �ֵ��� �����. (��Ӻ��ٴ� ����)
	�˰����� ����ϴ� Ŭ���̾�Ʈ�ʹ� ���������� �˰����� ������ �� �ִ�.
	
	������ ��Ģ
	1. ������ �κа� ������ �κ��� �и���Ų��.
	2. ������ �ƴ� �������̽��� ���� ���α׷����Ѵ�.
	3. ��Ӻ��ٴ� ������ ����Ѵ�.
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