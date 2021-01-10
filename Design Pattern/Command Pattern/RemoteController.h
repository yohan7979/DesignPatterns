#pragma once
#include "Command.h"
#include <vector>
#include <memory>

/* Invoker 역할하는 클래스 */
class RemoteController
{
public:
	RemoteController(const std::vector<Command*>& _Commands);
	~RemoteController();

	void OnButtonPressed(size_t index);
	void OnUndo();

private:
	std::vector<Command*> m_Commands;
	Command* m_PrevCommand;
};

