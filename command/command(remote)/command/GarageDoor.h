#pragma once
#include <string>

using namespace std;
class GarageDoor
{
private:
	string location;
public:
	GarageDoor();
	GarageDoor(string location);
	~GarageDoor();
	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();
};

