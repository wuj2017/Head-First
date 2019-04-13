#pragma once
#include "Command.h"
#include "Stereo.h"
class StereoOnWithCDCommand : public Command
{
	Stereo stereo;
public:
	StereoOnWithCDCommand(Stereo stereo);
	~StereoOnWithCDCommand();
	void execute();
};

