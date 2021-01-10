#pragma once
#include "Command.h"
#include "Light.h"
#include <memory>

class Command_LightOnOff : public Command
{
public:
	Command_LightOnOff(std::shared_ptr<Light>& InLight, bool bIsOn);
	~Command_LightOnOff();

	virtual void Execute() override;
	virtual void Undo() override;

private:
	std::weak_ptr<Light> m_Light;
	bool m_bIsOn;
};

