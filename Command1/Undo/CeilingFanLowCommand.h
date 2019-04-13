#ifndef _CEILINGFANLOWCOMMAND_H
#define _CEILINGFANLOWCOMMAND_H
#include"Undo.h"

class CeilingFanLowCommand:public Command
{
public:
	CeilingFanLowCommand(const CeilingFan *ceilingFan):ceilingFan(ceilingFan)
	{
		assert(ceilingFan);
		preSpeed = ceilingFan->getSpeed();
	}
	void execute()const
	{
		preSpeed = ceilingFan->getSpeed();
		ceilingFan->low();
	}
	void undo() const
	{
			if(preSpeed == CeilingFan::HIGH)
			{
				ceilingFan->high();
			}
			else if(preSpeed == CeilingFan::MEDIUM)
			{
				ceilingFan->medium();
			}
			else if(preSpeed == CeilingFan::LOW)
			{
				ceilingFan->low();
			}
			else if(preSpeed == CeilingFan::OFF)
			{
				ceilingFan->off();
			}
	}
private:
	const CeilingFan *ceilingFan;
	mutable int preSpeed;
};
#endif