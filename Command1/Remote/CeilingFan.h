#include"SimpleRemote.h"

class CeilingFan {
public: static const int HIGH = 2;
		static const int MEDIUM = 1;
		static const int LOW = 0;

public: CeilingFan( const std::string location ) :
	level( LOW ), location( location ) {
	}
	void high() const {
		level = HIGH;
		std::cout << location << " ceiling fan is on high" << std::endl;
	} 
	void medium() const {
		level = MEDIUM;
		std::cout << location << " ceiling fan is on medium" << std::endl;
	}
	void low() const {
		level = LOW;
		std::cout << location << " ceiling fan is on low" << std::endl;
	}
	void off() const {
		level = 0;
		std::cout << location << " ceiling fan is off" << std::endl;
	}
	int getSpeed() const {
		return level;
	}
private:
	int mutable level;
	std::string location;
};