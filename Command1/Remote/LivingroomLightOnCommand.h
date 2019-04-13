#include"SimpleRemote.h"

class LivingroomLightOnCommand : public Command 
{
public:
	LivingroomLightOnCommand(  Light* light ) :light( light ) 
	{ 
		assert( light );
	}
	void execute() const {
		light->on();
	}
private:
	Light* light;

};