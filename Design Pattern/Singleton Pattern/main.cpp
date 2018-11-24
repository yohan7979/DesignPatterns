/** Singleton Pattern */
/**  
	클래스의 인스턴스가 하나만 만들어지고, 어디서든 그 인스턴스에 접근할 수 있도록 하기 위한 패턴.
	해당 클래스를 사용하려면 반드시 싱글톤 객체에게 GetInstance를 통해서 인스턴스를 얻어야 한다.
	
	주의!! 멀티스레드 환경에서 GetInstance()의 동기화 문제가 발생할 수 있다.
	해결 방법 :
		1. 성능 저하를 감안하고 GetInstance()에 락을 건다. 
		2. 그냥 인스턴스를 처음부터 만들어버린다.
		3. DCL(Double-Checking Locking)을 사용한다.
			
			DCL이란?
				일단 인스턴스가 생성되었는지 확인한 다음, 생성되어 있지 않을 때만 동기화하는 방식.


	번외)
		std::call_once의 활용
		once_flag 변수 선언 후, call_once의 인자로 생성 함수와 함께 넘겨준다.
		그렇게 하면 객체를 생성하는 부분은 한 번만 실행되므로 결과는 같다.

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