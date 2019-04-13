#pragma once
#include "Compareble.h"
#include<string>

using namespace std;
class Duck : public Compareble
{
private:
	string name;
	int weight;

public:
	Duck(){}
	Duck(string name,int weight)
	{
		this->name = name;
		this->weight = weight;
	}
	string toString()
	{
		return name + "weghts " + to_string(weight);
	}
	int compareTo()
	{
		Duck otherDuck=
	}
	~Duck(){}
};

