#include "stdafx.h"
#include "StereoOnWithCDCommand.h"


StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo stereo)
{
	this->stereo = stereo;
}
StereoOnWithCDCommand::~StereoOnWithCDCommand()
{
}
void StereoOnWithCDCommand::execute()
{
	stereo.on();
	stereo.setCD();
	stereo.setVolume(12);
}
