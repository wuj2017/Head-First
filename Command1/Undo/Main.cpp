#include"Undo.h"
using namespace std;
int main()
{
	auto_ptr< RemoteControlWithUndo > remoteControl(new RemoteControlWithUndo() );

	auto_ptr< Light > livingRoomLight(new Light( "Living Room" ) );

	auto_ptr< LightOnCommand > livingRoomLightOn(new LightOnCommand( livingRoomLight.get() ) );
	auto_ptr< LightOffCommand > livingRoomLightOff(new LightOffCommand( livingRoomLight.get() ) );

	remoteControl->setCommand( 0, livingRoomLightOn.get(), livingRoomLightOff.get() );

	remoteControl->onButtonWasPushed( 0 );
	remoteControl->offButtonWasPushed( 0 );
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();
	remoteControl->offButtonWasPushed( 0 );
	remoteControl->onButtonWasPushed( 0 );
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	auto_ptr< CeilingFan > ceilingFan(new CeilingFan( "Living Room" ) );

	auto_ptr< CeilingFanMediumCommand > ceilingFanMedium(new CeilingFanMediumCommand( ceilingFan.get() ) );
	auto_ptr< CeilingFanHighCommand > ceilingFanHigh(new CeilingFanHighCommand( ceilingFan.get() ) );
	auto_ptr< CeilingFanOffCommand > ceilingFanOff(new CeilingFanOffCommand( ceilingFan.get() ) );

	remoteControl->setCommand( 0, ceilingFanMedium.get(), ceilingFanOff.get() );
	remoteControl->setCommand( 1, ceilingFanHigh.get(), ceilingFanOff.get() );

	remoteControl->onButtonWasPushed( 0 );
	remoteControl->offButtonWasPushed( 0 );
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed( 1 );
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	return 0;
}