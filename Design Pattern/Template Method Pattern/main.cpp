/** Template Method Pattern */

/** 
	알고리즘의 구조를 그대로 유지하면서, 서브클래스에게 특정 단계를 재정의할 수 있다.
		1. 템플릿 메소드	: 알고리즘의 골격을 정의한다. 상위에서 관리하므로 'Hollywood Principle'을 만족한다.
		2. 추상 메소드	: 서브클래스에서 메소드를 정의해서 사용
		3. 구상 메소드	: 기본, 하위 클래스 모두에게 공통된 로직이 적용된다면 사용 'Hook'로 확장가능.

			Hollywood Principle 이란?
				고수준 구성요소가 저수준 구성요소의 호출 여부를 결정짓고 통보하는 방식. 의존성 부패를 방지할 수 있다.

			Hook ?
				기본 클래스의 함수를 재정의하여 하위 클래스에서 특별하게 사용하는 방식.
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