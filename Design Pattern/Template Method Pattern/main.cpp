/** Template Method Pattern */

/** 
	�˰����� ������ �״�� �����ϸ鼭, ����Ŭ�������� Ư�� �ܰ踦 �������� �� �ִ�.
		1. ���ø� �޼ҵ�	: �˰����� ����� �����Ѵ�. �������� �����ϹǷ� 'Hollywood Principle'�� �����Ѵ�.
		2. �߻� �޼ҵ�	: ����Ŭ�������� �޼ҵ带 �����ؼ� ���
		3. ���� �޼ҵ�	: �⺻, ���� Ŭ���� ��ο��� ����� ������ ����ȴٸ� ��� 'Hook'�� Ȯ�尡��.

			Hollywood Principle �̶�?
				����� ������Ұ� ������ ��������� ȣ�� ���θ� �������� �뺸�ϴ� ���. ������ ���и� ������ �� �ִ�.

			Hook ?
				�⺻ Ŭ������ �Լ��� �������Ͽ� ���� Ŭ�������� Ư���ϰ� ����ϴ� ���.
*/


#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"

int main(int argc, char* argv[])
{
	CaffeineBeverage* coffee = new Coffee;
	CaffeineBeverage* tea = new Tea;

	coffee->prepareRecipe();
	tea->prepareRecipe();

	delete coffee;
	delete tea;


	return 0;
}