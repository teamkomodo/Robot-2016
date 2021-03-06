/*
 * Definitions.h
 *
 *  Created on: Jan 16, 2016
 *      Author: Alex
 */

#ifndef SRC_DEFINITIONS_H_
#define SRC_DEFINITIONS_H_


//////////////////////////////////////////////


// To know what int values are assigned to the left and right joysticks channels
#define RIGHT_JOYSTICK_INPUT_CHANNEL	0
#define LEFT_JOYSTICK_INPUT_CHANNEL		1


// The int values for the joystick axis
#define X_AXIS		0
#define Y_AXIS		1


// Int values for motors
#define RIGHT_MOTOR		0
#define LEFT_MOTOR		1


// Int values for left/right stick axis
#define LEFT_STICK_X	0
#define LEFT_STICK_Y	1

#define RIGHT_STICK_X   0
#define RIGHT_STICK_Y   1

// For the gamepad
#define GAMEPAD_INPUT_CHANNEL	2


// Gamepad button stuff
#define GAMEPAD_LEFT_STICK_X		0
#define GAMEPAD_LEFT_STICK_Y		1

#define GAMEPAD_RIGHT_STICK_X		4
#define GAMEPAD_RIGHT_STICK_Y		5

#define GAMEPAD_LEFT_BUMPER			5
#define GAMEPAD_RIGHT_BUMPER		6

#define GAMEPAD_BUTTON_Y			4
#define GAMEPAD_BUTTON_B			2
#define GAMEPAD_BUTTON_A			1
#define GAMEPAD_BUTTON_X			3

#define GAMEPAD_N_POV				1
#define GAMEPAD_NE_POV				GAMEPAD_N_POV + 1
#define GAMEPAD_E_POV				GAMEPAD_NE_POV + 1
#define GAMEPAD_SE_POV				GAMEPAD_E_POV + 1
#define GAMEPAD_S_POV				GAMEPAD_SE_POV + 1
#define GAMEPAD_SW_POV				GAMEPAD_S_POV + 1
#define GAMEPAD_W_POV				GAMEPAD_SW_POV + 1
#define GAMEPAD_NW_POV				GAMEPAD_W_POV + 1

// To account for joystick/gamepad drift
#define JOYSTICK_STANDARD_DRIFT		0.1
#define GAMEPAD_STANDARD_DRIFT		0.05

#define TANK_TURN_THRESHOLD			0.09



// Drive modes
#define ARCADE_1			1
#define ARCADE_2			2

#define ARCADE_GAMEPAD_1	3
#define ARCADE_GAMEPAD_2	ARCADE_GAMEPAD_1 + 1

#define TANK_GAMEPAD		ARCADE_GAMEPAD_2 + 1
#define TANK_2				TANK_GAMEPAD + 1

#define AUTOBOT				TANK_2 + 1


//Autonomous functions
#define ROUGH_TERRAIN		0 //For rough terrain and low bar, maybe rock wall and moat?
#define RAMPARTS			1 //All the rest are just for one defense
#define CHEVAL				2
#define PORTCULIS			3
#define DRAWBRIDGE			4
#define GATE				5



// Values for the encoders
#define ENCODER_CHANNEL_RA				0
#define ENCODER_CHANNEL_RB				1

#define ENCODER_CHANNEL_LA				2
#define ENCODER_CHANNEL_LB				3

#define ENCODER_CHANNEL_MA				4
#define ENCODER_CHANNEL_MB				5 //Ball Manipulator

#define ENCODER_CHANNEL_UA				6
#define ENCODER_CHANNEL_UB				7 //Lifter

#define ONE_FOOT_LEFT_ENCODER			1867.53 //Change these for practice bot. On competition bot, left is 1867.53 and right is 3813.92
#define ONE_FOOT_RIGHT_ENCODER			3813.92 //ALL RIGHT ENCODER VALUES ARE NEGATIVE FOR FORWARDS!!!





// Gyro stuff
#define GYRO_INPUT_CHANNEL				0
#define GYRO_DRIFT_VALUE_MIN	   		-0.5
#define GYRO_DRIFT_VALUE_MAX			0.5
#define GYRO_DRIFT_VALUE_AVERAGE		0
#define GYRO_SCALE_FACTOR 				0.09

#define GYRO_DRIFT_VALUE				0.01
#define GYRO_RUSH_SPEED					30



// Stuff for the manipulators below
#define LIFTER_CHANNEL_EXTEND			5
#define LIFTER_CHANNEL_TILT				4

#define LIFTER_TILT_SCALE_FACTOR		0.75
#define LIFTER_EXT_SCALE_FACTOR			0.75

#define B_MANIPULATOR_CHANNEL_LIFT		2
#define B_MANIPULATOR_CHANNEL_PINCH		3
#define OPEN_SWITCH						0	//CHANGE THESE!
#define CLOSE_SWITCH					1	//CHANGE THESE!

#define B_MANIPULATOR_SCALE_FACTOR		-0.5
#define B_MANIPULATOR_PINCH_SPEED		0.5



//////////////////////////////////////////////


#endif /* SRC_DEFINITIONS_H_ */
