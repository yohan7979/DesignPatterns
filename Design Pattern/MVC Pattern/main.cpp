/**	MVC Pattern **/
/**
	[ Model View Controller ]
		Model		: 실제 로직의 구현을 담당
		View		: 디스플레이를 담당
		Controller	: 사용자 입력 처리를 담당

	[ 패턴 플로우 ]
		-> 사용자가 뷰에 접근
		-> 뷰는 컨트롤러에게 입력정보를 전파
		-> 컨트롤러는 입력정보를 해석해서 모델에게 처리방식을 전파
		-> 모델은 데이터를 수정 후 뷰에게 noti
		-> 뷰는 모델에게 상태를 요청 후 디스플레이를 갱신

	[ MVC 패턴에 사용된 디자인패턴들 ]
		1. Strategy Pattern		: 뷰에서 사용자 입력을 받아 처리를 컨트롤러(전략 객체)에게 위임
		2. Composite Pattern	: 뷰는 복합객체로 이루어짐
		3. Observer Pattern		: 모델에서 상태가 바뀌면 뷰/컨트롤러에게 전파
		+ Adapter pattern		: 새로운 모델을 기존 뷰에 연결해서 사용할 때 쓰임

	

**/
#include "BPMController.h"
#include "BeatModel.h"

int main(int argc, char* argv[])
{
	BeatModel* model = new BeatModel;
	BPMController* controller = new BPMController(model);

	controller->Start();
	controller->IncreaseBPM();
	controller->IncreaseBPM();
	controller->DecreaseBPM();
	controller->Stop();

	delete controller;
	delete model;

	return 0;
}