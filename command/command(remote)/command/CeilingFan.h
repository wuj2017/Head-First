#pragma once
#include <string>
using namespace std;

/*∆æ” “∑Á…»*/
class CeilingFan
{
private:
	int level;
	string location;
public:
	CeilingFan();
	CeilingFan(string location);
	~CeilingFan();
	static const int HIGH = 2;
	static const int MEDIUM = 1;
	static const int LOW = 0;
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
};

