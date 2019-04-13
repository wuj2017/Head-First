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
	static const int HIGH = 3;
	static const int MEDIUM = 2;
	static const int LOW = 1;
	static const int OFF = 0;
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
};

