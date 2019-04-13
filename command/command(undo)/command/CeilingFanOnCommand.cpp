#include "stdafx.h"
#include "CeilingFanOnCommand.h"


CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan ceilingfan)
{
	this->ceilingfan = ceilingfan;
}

CeilingFanOnCommand::~CeilingFanOnCommand()
{
}
void CeilingFanOnCommand::execute()
{
	prevSpeed = ceilingfan.getSpeed();
	ceilingfan.high();
}
void CeilingFanOnCommand::undo()
{
	ceilingfan.off();
}