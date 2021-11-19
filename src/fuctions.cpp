#include "fuctions.h" // player.h must be in the current directory. or use relative or absolute path to it. e.g #include "include/player.h"

// Get vex stuff
#include "robot-config.h"
#include "vex.h"

triport ThreeWireport = vex::triport( PORT22 );
digital_out clawAir( ThreeWireport.H );
//led LED = led(Brain.ThreeWirePort.G );

void clawUp() {
  //Claw.spinTo(0, deg);
  clawAir.set(false);
  //LED.off();
}

void clawDown() {
  //Claw.spinTo(-440, deg);
  clawAir.set(true);
  //LED.on();
}

void liftUp() {
  BigLift.spinTo(930, deg);
  
}

void liftDown() {
  BigLift.spinTo(0, deg);
  
}

void debug() {
  Brain.Screen.setCursor(1, 1);
  Brain.Screen.print("BackLift");
  Brain.Screen.setCursor(2, 1);
  Brain.Screen.print(Forklift.position(deg));

  Brain.Screen.setCursor(3, 1);

  Brain.Screen.setCursor(5, 1);
  Brain.Screen.print("Drivetrain");
  Brain.Screen.setCursor(6, 1);
  Brain.Screen.print(Drivetrain.position(deg));

  Brain.Screen.setCursor(7, 1);
  Brain.Screen.print("BigLift");
  Brain.Screen.setCursor(8, 1);
  Brain.Screen.print(BigLift.position(deg));
}

void buttons() {
  if (Controller1.ButtonL1.pressing()) {
    clawUp();
    
  } else if (Controller1.ButtonL2.pressing()) {
    clawDown();
    
  } else {
    
  }

  if (Controller1.ButtonR1.pressing()) {
    BigLift.spin(forward);
    
  } else if (Controller1.ButtonR2.pressing()) {
    BigLift.spin(reverse);
    
  } else {
    BigLift.stop(brakeType::hold);
    
  }

  if (Controller1.ButtonUp.pressing()) {
    Forklift.spin(forward);
    
  } else if (Controller1.ButtonDown.pressing()) {
    Forklift.spin(reverse);
    
  } else {
    Forklift.stop(brakeType::hold);
    
  }
  
}

void test() {
  // code
}

void driveControl() {
  Left.spin(directionType::fwd,
            (Controller1.Axis2.value() + Controller1.Axis4.value()),
            velocityUnits::pct); //(Axis3+Axis4)/2;

  Right.spin(directionType::fwd,
             (Controller1.Axis2.value() - Controller1.Axis4.value()),
             velocityUnits::pct); //(Axis3-Axis4)/2;
}