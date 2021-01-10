#include "Light.h"
#include "Command_LightOnOff.h"
#include "RemoteController.h"
#include <vector>
#include <memory>

/** Command Pattern */
/** 
	요청하는 객체와, 요청받는 객체를 분리 시킨다.
	
	Invoker: 커맨드 객체를 저장하고 있고, 요청을 받아 커맨드 객체의 인터페이스를 호출.

	Receiver: 요청을 받아 실제 기능을 수행하는 객체					

	Command Object: 리시버를 캡슐화하는 객체. Invoker에게 인터페이스를 제공, Receiver의 기능을 호출
**/


int main(int argc, char* argv[])
{
	auto pNewLight = std::make_shared<Light>();
	auto pLightOnCommand = std::make_shared<Command_LightOnOff>(pNewLight, true);
	auto pLightOffCommand = std::make_shared<Command_LightOnOff>(pNewLight, false);

	std::vector<Command*> Commandlist;
	Commandlist.push_back(pLightOnCommand.get());
	Commandlist.push_back(pLightOffCommand.get());

	RemoteController* pRemoteController = new RemoteController(Commandlist);
	pRemoteController->OnButtonPressed(0);
	pRemoteController->OnButtonPressed(1);
	pRemoteController->OnUndo();

	delete pRemoteController;
	return 0;
}