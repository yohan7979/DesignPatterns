#include "RemoteController.h"

RemoteController::RemoteController(const std::vector<Command*>& _Commands)
{
	m_Commands = _Commands;
	m_PrevCommand = nullptr;
}

RemoteController::~RemoteController()
{
	m_Commands.clear();
	m_PrevCommand = nullptr;
}

void RemoteController::OnButtonPressed(size_t index)
{
	if (m_Commands.size() <= index)
	{
		return;
	}

	Command* pCommand = m_Commands[index];
	if (pCommand)
	{
		pCommand->Execute();
		m_PrevCommand = pCommand;
	}
}

void RemoteController::OnUndo()
{
	if (m_PrevCommand)
	{
		m_PrevCommand->Undo();
	}
}
