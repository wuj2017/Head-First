#pragma once
#include <iostream>
class Goose
{
public:
	Goose(){}
	~Goose(){}
	void honk()
	{
		std::cout << "Honk\n";
	}

	std::string toString()
	{
		return "Goose";
	}
};

