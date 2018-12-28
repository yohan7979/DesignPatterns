#include "CaffeineBeverage.h"

CaffeineBeverage::CaffeineBeverage()
{
}


CaffeineBeverage::~CaffeineBeverage()
{
}

// 템플릿 메소드
void CaffeineBeverage::prepareRecipe()
{
	// 알고리즘의 각 단계들을 정의한다. 상위 클래스에서 알고리즘의 골격을 관리하고, 
	// 필요한 부분만 추상 메소드를 호출하여 하위클래스가 구현하도록 한다.
	boilWater();
	brew();
	pourInCup();

	// 구상 메소드를 하위 클래스에서 재정의해서 사용할 수도 있는데, 이를 Hook 라고 한다.
	if(IsAddCondiments())
		addCondiments();
}

// 구상 메소드 : 공통된 메소드로, 같은 코드인 부분이 구현되어 있어, 재정의 없이 하위클래스에서 사용가능
void CaffeineBeverage::boilWater()
{
	cout << "물을 끓이는 중" << endl;
}

void CaffeineBeverage::pourInCup()
{
	cout << "컵에 따르는 중 " << endl;
}

// Hook의 예시. 기본클래스는 true이지만, 원하는 하위클래스에서 재정의해서 사용가능
bool CaffeineBeverage::IsAddCondiments()
{
	return true;
}
