#include "vex.h"
#include "robot-config.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Claw                 motor         1               
// MotorGroup2          motor_group   2, 3         
//    
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "onTon.h"
#include "fuctions.h"

using namespace vex;
vex::competition Competition;

void drivea() {
  while (true) {
    debug();
    driveControl();
    buttons();
  }
}

int main() {
  Forklift.setVelocity(100, percent);
  BigLift.setVelocity(100, percent);
  Drivetrain.setVelocity(70, percent);

  //Competition.autonomous(onTonV2);
  //Competition.autonomous(Skills);
  Competition.autonomous(SkillsV2);
  Competition.drivercontrol(drivea);
}
