#include "stdafx.h"
#include "Stereo.h"
#include <iostream>

Stereo::Stereo()
{
}
Stereo::Stereo(string location)
{
	this->location = location;
}
Stereo::~Stereo()
{
}
void Stereo::on() {
	cout<<location + " stereo is on"<<endl;
}
void Stereo::off() {
	cout<<location + " stereo is off"<<endl;
}

void Stereo::setCD() {
	cout<<location + " stereo is set for CD input"<<endl;
}

void Stereo::setDVD() {
	cout<<location + " stereo is set for DVD input"<<endl;
}

void Stereo::setRadio() {
	cout << location + " stereo is set for Radio" << endl;
}
void Stereo:: setVolume(int volume) {
	// code to set the volume
	// valid range: 1-11 (after all 11 is better than 10, right?)
	cout << location + " Stereo volume set to " << volume << endl;
}