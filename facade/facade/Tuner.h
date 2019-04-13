#pragma once

#include <string>
#include <iostream>
#include "Amplifier.h"

using namespace std;

class Tuner
{
public:
	Tuner(){}
	~Tuner(){}
	string description;
	Amplifier amplifier;
	double frequency;

	Tuner(string description, Amplifier amplifier) {
		this->description = description;
	}

	void on() {
		cout<<description + " on"<<endl;
	}

	void off() {
		cout<<description + " off"<<endl;
	}

	void setFrequency(double frequency) {
		cout<<description + " setting frequency to " + frequency<<endl;
		this->frequency = frequency;
	}

	void setAm() {
		cout<<description + " setting AM mode"<<endl;
	}

	void setFm() {
		cout<<description + " setting FM mode"<<endl;
	}

	string toString() {
		return description;
	}
};

