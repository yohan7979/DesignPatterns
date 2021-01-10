#include "Light.h"
#include "Command_LightOnOff.h"
#include "RemoteController.h"
#include <vector>
#include <memory>

/** Command Pattern */
/** 
	��û�ϴ� ��ü��, ��û�޴� ��ü�� �и� ��Ų��.
	
	Invoker: Ŀ�ǵ� ��ü�� �����ϰ� �ְ�, ��û�� �޾� Ŀ�ǵ� ��ü�� �������̽��� ȣ��.

	Receiver: ��û�� �޾� ���� ����� �����ϴ� ��ü					

	Command Object: ���ù��� ĸ��ȭ�ϴ� ��ü. Invoker���� �������̽��� ����, Receiver�� ����� ȣ��
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