#include"SimpleRemote.h"

class CeilingFanOffCommand : public Command 
{

public:
	CeilingFanOffCommand(CeilingFan* ceilingFan ) :ceilingFan( ceilingFan ) 
	{
		assert( ceilingFan );
	}
	void execute() const {
		ceilingFan->off();
	}
private: 
	CeilingFan* ceilingFan;
};
