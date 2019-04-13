// command.cpp : �������̨Ӧ�ó������ڵ㡣
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
	/*ң�����ǵ����ߣ��ᴫ��һ��������󣬿���������������*/
	RemoteControl remoteControl;
	
	/*����һ����ƶ��󣬶���Ҳ�������������*/
	Light light("Living Room");
	CeilingFan ceilingFan("Living Room");
	GarageDoor garageDoor("Garage");
	Stereo stereo("Linving Room");
	
	/*����һ�����Ȼ�󽫽����ߴ�����*/
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
	/*�������������,Ȼ��ģ�ⰴ�°�ť*/

	cout << remoteControl.toString() << endl;
	cout << "----- Pushing Macro On -----" << endl;
	remoteControl.onButtonWasPushed(0);
	cout << "----- Pushing Macro Off -----" << endl;
	remoteControl.offButtonWasPushed(0);

	return 0;
}

