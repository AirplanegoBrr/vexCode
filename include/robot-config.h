#include "vex.h"
using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;

extern vex::motor FrontRightMotor;
extern vex::motor FrontLeftMotor;
extern vex::motor TopRight;

extern vex::motor BackLeftMotor;
extern vex::motor BackRightMotor;
extern vex::motor TopLeft;

extern vex::motor ForkLeft;
extern vex::motor ForkRight;
extern vex::motor Forklift;

extern vex::motor_group Drivetrain;
extern vex::motor_group Right;
extern vex::motor_group Left;
extern vex::motor_group BigLift;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );