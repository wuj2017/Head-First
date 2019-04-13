#include"SimpleRemote.h"

class CeilingFanOnCommand : public Command 
{
public: 
	CeilingFanOnCommand(  CeilingFan* ceilingFan ) :ceilingFan( ceilingFan ) 
	{
		assert( ceilingFan );
	}
	void execute() const 
	{
		ceilingFan->high();
	}
private:
	CeilingFan* ceilingFan;
};