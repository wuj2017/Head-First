#pragma once
#include "Command.h"
#include "Stereo.h"
class StereoOffCommand : public Command
{
	Stereo stereo;
public:
	StereoOffCommand(Stereo stereo);
	~StereoOffCommand();
	void execute();
};

