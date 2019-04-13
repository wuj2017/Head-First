#include"SimpleRemote.h"

class StereoOnWithCDCommand:public Command
{
public:
	StereoOnWithCDCommand(Stereo* stereo)
	{
		this->stereo = stereo;
	}
	void execute()const
	{
		stereo->on();
		stereo->setCD();
		stereo->setVolume(11);
	}

private:
	Stereo* stereo;


};