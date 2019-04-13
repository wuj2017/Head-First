// command.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"
#include "GarageDoorCloseCommand.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "Stereo.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include "MacroCommand.h"
#include <iostream>

using namespace std;

int main()
{
	/*遥控器是调用者，会传入一个命令对象，可以用来发出请求*/
	RemoteControl remoteControl;
	
	/*创建一个电灯对象，对象也就是请求接收者*/
	Light light("Living Room");
	CeilingFan ceilingFan("Living Room");
	GarageDoor garageDoor("Garage");
	Stereo stereo("Linving Room");
	
	/*创建一个命令，然后将接收者传给它*/
	LightOnCommand lightOn(light);
	LightOffCommand lightOff(light);
	StereoOnWithCDCommand StereoOn(stereo);
	StereoOffCommand StereoOff(stereo);
	CeilingFanOnCommand ceilingFanOn(ceilingFan);
	CeilingFanOffCommand ceilingFanOff(ceilingFan);
	GarageDoorOpenCommand garageDoorOpen(garageDoor);
	GarageDoorCloseCommand garageDoorClose(garageDoor);

	vector<Command*> partyOn = { &lightOn, &StereoOn, &ceilingFanOn, &garageDoorOpen };
	vector<Command*> partyOff = { &lightOff, &StereoOff, &ceilingFanOff, &garageDoorClose };

	MacroCommand partyOnMacro(partyOn);
	MacroCommand partyOffMacro(partyOff);

	remoteControl.setCommand(0, &partyOnMacro, &partyOffMacro);
	/*把命令传给调用者,然后模拟按下按钮*/

	cout << remoteControl.toString() << endl;
	cout << "----- Pushing Macro On -----" << endl;
	remoteControl.onButtonWasPushed(0);
	cout << "----- Pushing Macro Off -----" << endl;
	remoteControl.offButtonWasPushed(0);

	return 0;
}

