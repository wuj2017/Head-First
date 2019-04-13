#include"Undo.h"

class DimmerLightOffCommand:public Command
{
public:
	DimmerLightOffCommand(const Light *light):light(light)
	{
		assert(light);
		preLevel=light->getLevel();
	}
	void execute() const
	{
		preLevel = light->getLevel();
		light->off();
	}
	void undo()const
	{
		light->dim(preLevel);
	}
private:
	const Light* light;
	mutable int preLevel;
};