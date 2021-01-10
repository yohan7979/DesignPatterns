#include "Command_LightOnOff.h"

Command_LightOnOff::Command_LightOnOff(std::shared_ptr<Light>& InLight, bool bIsOn)
	: m_Light(InLight)
	, m_bIsOn(bIsOn)
{

}

Command_LightOnOff::~Command_LightOnOff()
{

}

void Command_LightOnOff::Execute()
{
	std::shared_ptr<Light> pSharedLight = m_Light.lock();
	if (Light* pLight = pSharedLight.get())
	{
		if (m_bIsOn)
		{
			pLight->On();
		}
		else
		{
			pLight->Off();
		}
	}
}

void Command_LightOnOff::Undo()
{
	std::shared_ptr<Light> pSharedLight = m_Light.lock();
	if (Light* pLight = pSharedLight.get())
	{
		if (m_bIsOn)
		{
			pLight->Off();
		}
		else
		{
			pLight->On();
		}
	}
}
