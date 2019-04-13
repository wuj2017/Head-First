#include "stdafx.h"
#include "CeilingFanOffCommand.h"


CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan ceilingfan)
{
	this->ceilingfan = ceilingfan;
}

CeilingFanOffCommand::~CeilingFanOffCommand()
{
}
void CeilingFanOffCommand::execute()
{
	ceilingfan.off();
}
