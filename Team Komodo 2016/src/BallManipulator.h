/*
 * BallManipulator.h
 *
 *  Created on: Jan 30, 2016
 *      Author: Alex
 */

#ifndef SRC_BALLMANIPULATOR_H_
#define SRC_BALLMANIPULATOR_H_

#include "Definitions.h"
#include "WPILib.h"



//
class BallManipulator {
public:
	// Our constructor class
	BallManipulator();	// DO NOT CALL
	BallManipulator(unsigned int lift, unsigned int pinch, unsigned int open, unsigned int close, Encoder &eEncoder);

	// Classes to manually make the lifter go up or down
	void Tilt(float speed);
	void Pinch();
	void StopTilt();
	void StopPinch();
	void TempPinch(float speed);

	float pinchSpeed;
	bool openFlag;
	bool closeFlag;
	bool pinchFlag; //Flag to disable pinching in case we break a limit switch




private:
	VictorSP liftMotor;
	VictorSP pinchMotor;
	DigitalInput openSwitch;
	DigitalInput closeSwitch;
	Encoder *ballManipulatorEncoder;
};



#endif /* SRC_BALLMANIPULATOR_H_ */
