/** Singleton Pattern */
/**  
	Ŭ������ �ν��Ͻ��� �ϳ��� ���������, ��𼭵� �� �ν��Ͻ��� ������ �� �ֵ��� �ϱ� ���� ����.
	�ش� Ŭ������ ����Ϸ��� �ݵ�� �̱��� ��ü���� GetInstance�� ���ؼ� �ν��Ͻ��� ���� �Ѵ�.
	
	����!! ��Ƽ������ ȯ�濡�� GetInstance()�� ����ȭ ������ �߻��� �� �ִ�.
	�ذ� ��� :
		1. ���� ���ϸ� �����ϰ� GetInstance()�� ���� �Ǵ�. 
		2. �׳� �ν��Ͻ��� ó������ ����������.
		3. DCL(Double-Checking Locking)�� ����Ѵ�.
			
			DCL�̶�?
				�ϴ� �ν��Ͻ��� �����Ǿ����� Ȯ���� ����, �����Ǿ� ���� ���� ���� ����ȭ�ϴ� ���.


	����)
		std::call_once�� Ȱ��
		once_flag ���� ���� ��, call_once�� ���ڷ� ���� �Լ��� �Բ� �Ѱ��ش�.
		�׷��� �ϸ� ��ü�� �����ϴ� �κ��� �� ���� ����ǹǷ� ����� ����.

*/

#include "ChocolateBoiler.h"
#include <thread>

void ProcessFactory()
{
	ChocolateBoiler* choco = ChocolateBoiler::GetInstance();

	if (choco != nullptr)
	{
		choco->fill();
		choco->boil();
		choco->drain();
	}
}

int main(int argc, char* argv[])
{
	thread t1(&ProcessFactory);
	thread t2(&ProcessFactory);

	t1.join();
	cout << "t1 thread finished" << endl;

	t2.join();
	cout << "t2 thread finished" << endl;

	return 0;
}