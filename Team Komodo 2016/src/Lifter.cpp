#include "Lifter.h"
#include "WPILib.h"
#include "Definitions.h"


// DO NOT CALL
Lifter::Lifter()
	: liftMotor(0),
	  tiltMotor(0)
{
	// Doesn't do anything yet
}

Lifter::Lifter(unsigned int jaguarLift, unsigned int jaguarTilt, Encoder &eEncoder)
	: liftMotor(jaguarLift),
	  tiltMotor(jaguarTilt),
	  lifterEncoder(&eEncoder)
{
	lifterEncoder->Reset();
}



////////////////////////////////////////
/////////////   Divider!   /////////////
////////////////////////////////////////



// Extends or retracts the lifter arm
void Lifter::ExtendRetract(float speed) {
	liftMotor.SetSpeed(speed*LIFTER_EXT_SCALE_FACTOR);
}

//Tilts the lifter arm
void Lifter::Tilt(float speed) {
	tiltMotor.SetSpeed(speed*LIFTER_TILT_SCALE_FACTOR);
}


void Lifter::StopAll() {
	liftMotor.SetSpeed(0);
	tiltMotor.SetSpeed(0);
}
