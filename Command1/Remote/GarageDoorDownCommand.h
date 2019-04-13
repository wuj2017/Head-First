#include"SimpleRemote.h"

class GarageDoorDownCommand : public Command 
{
public: 
	GarageDoorDownCommand( GarageDoor* garageDoor ) :garageDoor( garageDoor )
	{ 
		assert( garageDoor );
	}
	void execute() const 
	{
		garageDoor->down();
	}
private: 
	GarageDoor* garageDoor;
};