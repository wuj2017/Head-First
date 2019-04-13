#include"SimpleRemote.h"

class HottubOnCommand : public Command 
{
public:
	HottubOnCommand(  Hottub* hottub ) :hottub( hottub ) 
	{ 
		assert( hottub );
	}
	void execute() const 
	{
		hottub->on();
		hottub->heat();
		hottub->bubblesOn();
	}
private:
	Hottub* hottub;
};
