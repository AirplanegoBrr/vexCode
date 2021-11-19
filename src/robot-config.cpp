#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);

//Right
motor FrontRightMotor = motor(PORT9, ratio18_1, true);
motor BackRightMotor= motor(PORT5, ratio18_1, false);
motor TopRight = motor(PORT19, ratio18_1, false);

//Left
motor FrontLeftMotor = motor(PORT7, ratio18_1, false);
motor BackLeftMotor= motor(PORT10, ratio18_1, true);
motor TopLeft = motor(PORT8, ratio18_1, false);

motor ForkLeft = motor(PORT1, ratio18_1, true);
motor ForkRight = motor(PORT13, ratio18_1, false);

motor Forklift = motor(PORT20, ratio18_1, true);

motor_group Drivetrain = motor_group(FrontRightMotor, FrontLeftMotor, BackLeftMotor, BackRightMotor, TopLeft, TopRight);
motor_group Right = motor_group(FrontRightMotor, BackRightMotor);
motor_group Left = motor_group(FrontLeftMotor, BackLeftMotor);
motor_group BigLift = motor_group(ForkLeft, ForkRight);


// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}