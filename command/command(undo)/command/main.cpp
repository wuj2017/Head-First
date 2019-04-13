// command.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "CeilingFanMediumCommand.h"
#include <iostream>

using namespace std;

int main()
{
	/*ң�����ǵ����ߣ��ᴫ��һ��������󣬿���������������*/
	RemoteControl remoteControl;
	
	/*����һ����ƶ��󣬶���Ҳ�������������*/
	//Light livingRoomLight("Living Room");
	CeilingFan ceilingFan("Living Room");
	
	/*����һ�����Ȼ�󽫽����ߴ�����*/
	//LightOnCommand livingRoomLightOn(livingRoomLight);
	//LightOffCommand livingRoomLightOff(livingRoomLight);
	CeilingFanMediumCommand ceilingFanMedium(ceilingFan);
	CeilingFanOnCommand ceilingFanHigh(ceilingFan);
	CeilingFanOffCommand ceilingFanOff(ceilingFan);

	/*�������������,Ȼ��ģ�ⰴ�°�ť*/
	//remoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
	remoteControl.setCommand(0, &ceilingFanMedium, &ceilingFanOff);
	remoteControl.setCommand(0, &ceilingFanHigh, &ceilingFanOff);
	
	
	remoteControl.onButtonWasPushed(0);
	remoteControl.offButtonWasPushed(0);
	cout << remoteControl.toString() << endl;
	remoteControl.undoButtonWasPushed();

	remoteControl.onButtonWasPushed(2);
	cout << remoteControl.toString() << endl;
	remoteControl.undoButtonWasPushed();

	//remoteControl.onButtonWasPushed(1);
	//remoteControl.offButtonWasPushed(1);
	//cout << remoteControl.toString() << endl;
	//remoteControl.undoButtonWasPushed();

	//remoteControl.onButtonWasPushed(2);
	//remoteControl.offButtonWasPushed(2);
	//cout << remoteControl.toString() << endl;
	//remoteControl.undoButtonWasPushed();

	return 0;
}

