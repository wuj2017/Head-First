// command.cpp : 定义控制台应用程序的入口点。
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
	/*遥控器是调用者，会传入一个命令对象，可以用来发出请求*/
	RemoteControl remoteControl;
	
	/*创建一个电灯对象，对象也就是请求接收者*/
	//Light livingRoomLight("Living Room");
	CeilingFan ceilingFan("Living Room");
	
	/*创建一个命令，然后将接收者传给它*/
	//LightOnCommand livingRoomLightOn(livingRoomLight);
	//LightOffCommand livingRoomLightOff(livingRoomLight);
	CeilingFanMediumCommand ceilingFanMedium(ceilingFan);
	CeilingFanOnCommand ceilingFanHigh(ceilingFan);
	CeilingFanOffCommand ceilingFanOff(ceilingFan);

	/*把命令传给调用者,然后模拟按下按钮*/
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

