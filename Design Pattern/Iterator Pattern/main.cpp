/** Iterator Pattern **/
/** 
	컬렉션의 구현 방법을 클라이언트에게 노출시키지 않고,
	반복자를 통해 접근 할 수 있게 해주는 패턴.

	컬렉션 종류에 상관없이 접근하는 방식이 통일되어 있다.
	객체에 접근하는 역할을 반복자에게 위임하여 클래스의 기능을 분리할 수 있다.

**/


#include <iostream>
#include "Waitress.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"

using namespace std;

int main(int argc, char* argv[])
{
	Waitress waitress(new PancakeHouseMenu, new DinerMenu);
	waitress.printMenu();

	return 0;
}