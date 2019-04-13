#pragma once

#include <string>
#include <iostream>

using namespace std;
class PopcornPopper
{
public:
	PopcornPopper(){}
	~PopcornPopper(){}

	string description;

	PopcornPopper(string description) {
		this->description = description;
	}

	void on() {
		cout<<description + " on"<<endl;
	}

	void off() {
		cout<<description + " off"<<endl;
	}

	void pop() {
		cout << description + " popping popcorn!" << endl;
	}


	string toString() {
		return description;
	}
};

