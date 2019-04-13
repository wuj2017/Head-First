#include"SimpleRemote.h"

class GarageDoorUpCommand : public Command 
{

private:
	GarageDoor* garageDoor;

public:
	GarageDoorUpCommand( GarageDoor* garageDoor ) :garageDoor( garageDoor )
	{ 
		assert( garageDoor );
	}
public: void execute() const
		{
			garageDoor->up();
		}
};
