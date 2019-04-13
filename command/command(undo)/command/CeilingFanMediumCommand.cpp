#include "stdafx.h"
#include "CeilingFanMediumCommand.h"


CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan ceilingfan)
{
	this->ceilingfan = ceilingfan;
}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{
}

void CeilingFanMediumCommand::execute()
{
	prevSpeed = ceilingfan.getSpeed();
	ceilingfan.off();
}
void CeilingFanMediumCommand::undo()
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
