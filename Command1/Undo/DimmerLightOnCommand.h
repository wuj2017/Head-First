#include"Undo.h"

class DimmerLightOnCommand:public Command
{
public:
	DimmerLightOnCommand(const Light *light):light(light)
	{
		assert(light);
		preLevel=light->getLevel();
	}
	void execute() const
	{
		preLevel = light->getLevel();
		light->dim(75);
	}
	void undo()const
	{
		light->dim(preLevel);
	}
private:
	const Light* light;
	mutable int preLevel;
};