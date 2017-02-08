#include "BallManipulator.h"
#include "WPILib.h"
#include "Definitions.h"



// DO NOT CALL
BallManipulator::BallManipulator()
	: liftMotor(0),
	  pinchMotor(0),
	  openSwitch(0),
	  closeSwitch(0)
{

}

BallManipulator::BallManipulator(unsigned int lift, unsigned int pinch, unsigned int open, unsigned int close, Encoder &eEncoder)
	: liftMotor(lift),
	  pinchMotor(pinch),
	  openSwitch(open),
	  closeSwitch(close),
	  ballManipulatorEncoder(&eEncoder)
{
	ballManipulatorEncoder->Reset();
	pinchSpeed = B_MANIPULATOR_PINCH_SPEED;
	openFlag = true;  //Given the current formulation of the code, THESE MUST BE OPPOSITE!!!!
	closeFlag = false;//Otherwise, the pinchers will try to open and close at the same time.
	pinchFlag = true;

}



////////////////////////////////////////
/////////////   Divider!   /////////////
////////////////////////////////////////



// Sets the lifter to go up
void BallManipulator::Tilt(float speed) {
	liftMotor.SetSpeed(speed);
}


void BallManipulator::Pinch() {
  if(pinchFlag) {
	if(openFlag && !openSwitch.Get()){
	pinchMotor.SetSpeed(pinchSpeed);
	}
	else if(closeFlag && !closeSwitch.Get()){
	pinchMotor.SetSpeed(-pinchSpeed);
	}
	else{
	StopPinch();
	}
  }
}


void BallManipulator::StopTilt() {
	liftMotor.SetSpeed(0);

}

void BallManipulator::StopPinch() {
	pinchMotor.SetSpeed(0);

}

void BallManipulator::TempPinch(float speed){ //TEMP FUNCTION! REMOVE THIS WHEN LIMIT SWITCHES HAVE BEEN ATTACHED!!!
	pinchMotor.SetSpeed(speed);
}

