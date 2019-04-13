#pragma once

#include <string>
#include <iostream>

using namespace std;

class Screen
{
public:
	Screen(){}
	~Screen(){}
	string description;

	Screen(string description) {
		this->description = description;
	}

	void up() {
		cout<<description + " going up"<<endl;
	}

	void down() {
		cout<<description + " going down"<<endl;
	}


	string toString() {
		return description;
	}
};

