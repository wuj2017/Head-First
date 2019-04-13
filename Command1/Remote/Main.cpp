#include "SimpleRemote.h"

using namespace std;

int main( int argc, char* argv[] ) {

	auto_ptr< RemoteControl > remoteControl(
		new RemoteControl() );

	auto_ptr< Light > livingRoomLight(new Light( "Living Room" ) );
	auto_ptr< Light > kitchenLight(new Light( "Kitchen" ) );
	auto_ptr< CeilingFan > ceilingFan(new CeilingFan( "Living Room" ) );
	auto_ptr< GarageDoor > garageDoor(new GarageDoor( "Garage" ) );
	auto_ptr< Stereo > stereo(new Stereo( "Living Room" ) );

	auto_ptr< LightOnCommand > livingRoomLightOn(new LightOnCommand( livingRoomLight.get() ) );
	auto_ptr< LightOffCommand > livingRoomLightOff(new LightOffCommand( livingRoomLight.get() ) );
	auto_ptr< LightOnCommand > kitchenLightOn(new LightOnCommand( kitchenLight.get() ) );
	auto_ptr< LightOffCommand > kitchenLightOff(new LightOffCommand( kitchenLight.get() ) );

	auto_ptr< CeilingFanOnCommand > ceilingFanOn( new CeilingFanOnCommand( ceilingFan.get() ) );
	auto_ptr< CeilingFanOffCommand > ceilingFanOff( new CeilingFanOffCommand( ceilingFan.get() ) );

	auto_ptr< GarageDoorUpCommand > garageDoorUp(new GarageDoorUpCommand( garageDoor.get() ) );
	auto_ptr< GarageDoorDownCommand > garageDoorDown(new GarageDoorDownCommand( garageDoor.get() ) );

	auto_ptr< StereoOnWithCDCommand > stereoOnWithCD(new StereoOnWithCDCommand( stereo.get() ) );
	auto_ptr< StereoOffCommand > stereoOff(new StereoOffCommand( stereo.get() ) );

	remoteControl->setCommand( 0, livingRoomLightOn.get(), livingRoomLightOff.get() );
	remoteControl->setCommand( 1, kitchenLightOn.get(), kitchenLightOff.get() );
	remoteControl->setCommand( 2, ceilingFanOn.get(), ceilingFanOff.get() );
	remoteControl->setCommand( 3, stereoOnWithCD.get(), stereoOff.get() );
	remoteControl->setCommand( 4, garageDoorUp.get(), garageDoorDown.get() );

	cout << remoteControl->toString() << endl;

	remoteControl->onButtonWasPushed( 0 );
	remoteControl->offButtonWasPushed( 0 );
	remoteControl->onButtonWasPushed( 1 );
	remoteControl->offButtonWasPushed( 1 );
	remoteControl->onButtonWasPushed( 2 );
	remoteControl->offButtonWasPushed( 2 );
	remoteControl->onButtonWasPushed( 3 );
	remoteControl->offButtonWasPushed( 3 );
	remoteControl->onButtonWasPushed( 4 );
	remoteControl->offButtonWasPushed( 4 );

	return 0;
}
