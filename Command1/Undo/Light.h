#include"Undo.h"

class Light
{
public:
	Light(const std::string location):location(location),level(0){}
	void on()const
	{
		level=100;
		std::cout<<location<<" light is on"<<std::endl;
	}
	void off()const 
	{
		level =0;
		std::cout<<location<<" light is off"<<std::endl;
	}
	void dim(int level) const
	{
		this->level =level;
		if(level ==0)
		{
			off();
		}
		else
		{
			std::cout<<"Level is dimmed to "<<level<<"%"<<std::endl;
		}
	}
	int getLevel()const
	{
		return level;
	}
private:
	std::string location;
	mutable int level;
};
