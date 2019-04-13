#include"Undo.h"

class CeilingFanMediumCommand:public Command
{
public:
	CeilingFanMediumCommand(const CeilingFan *ceilingFan):ceilingFan(ceilingFan)
	{
		assert(ceilingFan);
		preSpeed = ceilingFan->getSpeed();
	}
	void execute()const
	{
		preSpeed = ceilingFan->getSpeed();
		ceilingFan->medium();
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