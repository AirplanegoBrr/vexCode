#include "onTon.h"  // player.h must be in the current directory. or use relative or absolute path to it. e.g #include "include/player.h"
#include "fuctions.h"

//Get vex stuff
#include "vex.h"
#include "robot-config.h"

void onTonV1(){
  Drivetrain.spinTo(1600, deg);
  clawDown();
  Drivetrain.spinTo(0, deg);
}

void onTonV2(){

  Forklift.setVelocity(60, percent);
  BigLift.setVelocity(60, percent);
  Drivetrain.setVelocity(60, percent);
  //Drive to goal
  Drivetrain.rotateFor(-1500, deg);
  //Close claw
  wait(0.5, sec);
  clawDown();
  BigLift.rotateFor(100, deg);
  Forklift.rotateFor(-1000, deg);
  //Turn to face back towards middle goal
  Left.rotateFor(800, deg);
  //Go back
  Drivetrain.rotateFor(1000, deg);
  //Pick up goal

  Forklift.rotateFor(600, deg);
  
  //Make robot spin so we can just drive fwd
  //Right.rotateFor(500, deg);
  //Drives back to starts
  Left.rotateFor(150,deg);
  Drivetrain.rotateFor(-1900, deg);


  Forklift.setVelocity(100, percent);
  BigLift.setVelocity(100, percent);
  Drivetrain.setVelocity(60, percent);
}

void onTonV3(){
  
  Forklift.setVelocity(60, percent);
  BigLift.setVelocity(60, percent);
  Drivetrain.setVelocity(60, percent);
  //Drive to goal
  Drivetrain.rotateFor(-1500, deg);
  //Close claw
  wait(0.5, sec);
  clawDown();
  BigLift.rotateFor(100, deg);
  Forklift.rotateFor(-1000, deg);
  //Turn to face back towards middle goal
  Left.rotateFor(800, deg);
  //Go back
  Drivetrain.rotateFor(1000, deg);
  //Pick up goal

  Forklift.rotateFor(600, deg);
  
  //Make robot spin so we can just drive fwd
  //Right.rotateFor(500, deg);
  //Drives back to starts
  Left.rotateFor(150,deg);
  Drivetrain.rotateFor(-1900, deg);


  Forklift.setVelocity(100, percent);
  BigLift.setVelocity(100, percent);
  Drivetrain.setVelocity(60, percent);
}

void onTonLeft(){

}

void onTonRight(){

}

void Skills(){
  clawDown();
  liftUp();
  Drivetrain.rotateFor(-100, deg);
  Right.rotateFor(-600, deg);
  Left.rotateFor(-650, deg);
  Right.rotateFor(450, deg);
  Drivetrain.rotateFor(2500, deg);
  clawUp();
}

void SkillsV2(){
  clawDown(); //Grabs G1
  Left.rotateFor(100, deg); 
  Drivetrain.rotateFor(-200, deg); //Drives to G2 going in REV!! and pushes it

  Right.rotateFor(100, deg); // Rotates to P1 

  liftUp();
  Drivetrain.rotateFor(100, deg); //Drives to P1 FORWARD!

  Left.rotateFor(100, deg); //Faces P1
  clawUp(); //Drops goal

  Left.rotateFor(150, deg); //Faces G3

  liftDown();

  Drivetrain.rotateFor(100, deg); //Drives to G3

  clawDown();
  liftUp();

  Left.rotateFor(-100, deg); //Faces G4

  Drivetrain.rotateFor(-100, deg); //Drives to G4 in REV

  Forklift.rotateFor(100, deg); //Picks up G4

  Right.rotateFor(100, deg); //Faces P1

  Drivetrain.rotateFor(100, deg); //Drives to P1
}
