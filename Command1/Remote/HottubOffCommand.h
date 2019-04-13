#include"SimpleRemote.h"

class HottubOffCommand : public Command 
{
public:
	HottubOffCommand( Hottub* hottub ) :hottub( hottub ) 
	{
		assert( hottub );
	}
	void execute() const 
	{
		hottub->cool();
		hottub->off();
	}
private:
	Hottub* hottub;
};