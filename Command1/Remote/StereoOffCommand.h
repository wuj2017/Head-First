#include"SimpleRemote.h"

class StereoOffCommand : public Command 
{
public: 
	StereoOffCommand( Stereo* stereo ) :stereo( stereo ) 
	{ 
		assert( stereo );
	}
	void execute() const 
	{
		stereo->off();
	}
private: 
	Stereo* stereo;
};