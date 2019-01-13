/** Iterator Pattern **/
/** 
	�÷����� ���� ����� Ŭ���̾�Ʈ���� �����Ű�� �ʰ�,
	�ݺ��ڸ� ���� ���� �� �� �ְ� ���ִ� ����.

	�÷��� ������ ������� �����ϴ� ����� ���ϵǾ� �ִ�.
	��ü�� �����ϴ� ������ �ݺ��ڿ��� �����Ͽ� Ŭ������ ����� �и��� �� �ִ�.

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