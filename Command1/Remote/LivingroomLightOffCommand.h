#include"SimpleRemote.h"

class LivingroomLightOffCommand : public Command 
{
public: 
	LivingroomLightOffCommand(  Light* light ) :light( light ) 
	{
		assert( light );
	}
	void execute() const
	{
		light->off();
	}
private:
	Light* light;
};