
#ifndef _SUPER_ROBOT_H__
#define _SUPER_ROBOT_H__

#include <Arduino.h>    // include servo library
#include <Servo.h>    // include servo library


extern int spd;  // Speed of walking motion, larger the number, the slower the speed
extern int high;   // How high the robot is standing

// Define 8 Servos
extern Servo myServo1; // Front Left Pivot Servo
extern Servo myServo2; // Front Left Lift Servo
extern Servo myServo3; // Back Left Pivot Servo
extern Servo myServo4; // Back Left Lift Servo
extern Servo myServo5; // Back Right Pivot Servo
extern Servo myServo6; // Back Right Lift Servo
extern Servo myServo7; // Front Right Pivot Servo
extern Servo myServo8; // Front Right Lift Servo

void dance();
void wave();
void bow();
void lean_left();
void lean_right();
void trim_left();
void trim_right();
void forward();
void back ();
void turn_left ();
void turn_right ();
void center_servos();
void increase_speed();
void decrease_speed();
void srv( int  p11, int p21, int p31, int p41, int p12, int p22, int p32, int p42, int sp1, int sp2, int sp3, int sp4);
long get_distance(bool unit);

#endif
