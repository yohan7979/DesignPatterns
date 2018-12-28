#include "CaffeineBeverage.h"

CaffeineBeverage::CaffeineBeverage()
{
}


CaffeineBeverage::~CaffeineBeverage()
{
}

// ���ø� �޼ҵ�
void CaffeineBeverage::prepareRecipe()
{
	// �˰����� �� �ܰ���� �����Ѵ�. ���� Ŭ�������� �˰����� ����� �����ϰ�, 
	// �ʿ��� �κи� �߻� �޼ҵ带 ȣ���Ͽ� ����Ŭ������ �����ϵ��� �Ѵ�.
	boilWater();
	brew();
	pourInCup();

	// ���� �޼ҵ带 ���� Ŭ�������� �������ؼ� ����� ���� �ִµ�, �̸� Hook ��� �Ѵ�.
	if(IsAddCondiments())
		addCondiments();
}

// ���� �޼ҵ� : ����� �޼ҵ��, ���� �ڵ��� �κ��� �����Ǿ� �־�, ������ ���� ����Ŭ�������� ��밡��
void CaffeineBeverage::boilWater()
{
	cout << "���� ���̴� ��" << endl;
}

void CaffeineBeverage::pourInCup()
{
	cout << "�ſ� ������ �� " << endl;
}

// Hook�� ����. �⺻Ŭ������ true������, ���ϴ� ����Ŭ�������� �������ؼ� ��밡��
bool CaffeineBeverage::IsAddCondiments()
{
	return true;
}
