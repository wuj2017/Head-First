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
	prevSpeed = ceilingfan.getSpeed();
	ceilingfan.off();
}
void CeilingFanOffCommand::undo()
{
	if (prevSpeed == ceilingfan.HIGH) {
		ceilingfan.high();
	}
	else if (prevSpeed == ceilingfan.MEDIUM) {
		ceilingfan.medium();
	}
	else if (prevSpeed == ceilingfan.LOW) {
		ceilingfan.low();
	}
	else if (prevSpeed == ceilingfan.OFF) {
		ceilingfan.off();
	}
}
