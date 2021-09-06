#ifndef __MOTOR_MIXER_H
#define __MOTOR_MIXER_H
//http://autoquad.org/wiki/wiki/configuring-autoquad-flightcontroller/frame-motor-mixing-table/

#include "config.h"
#include <Arduino.h>
#include <Servo.h>

class MotorMixer{
 public:
  int numberOfChannels;
  //Hold motor channel mapping
  MOT_CHANNEL motChannels[NUM_MOT_CHANNELS] = {EM_MOT_CH1,EM_MOT_CH2,EM_MOT_CH3,EM_MOT_CH4,EM_MOT_CH5,EM_MOT_CH6,EM_MOT_CH7,EM_MOT_CH8};
  //hold custome mixing table
  int mixingTable[EM_FRAME_MAX][EM_AXIS_MAX][NUM_MOT_CHANNELS] = 
  {
   /*Plane*/ {{/*EM_THROT*/100,100,0,0,0,0,0,0},{/*EM_ROL*/0,0,100,0,0,0,0,0},{/*EM_PITCH*/0,0,0,100,0,0,0,0},{/*EM_YAW*/100,-100,0,0,0,0,0,0}} 
   //Ch1 = Left Motor, Ch2=Right Motor, Ch3= Eleron Servo, Ch4= Elevator Servo
  };
  MOT_TYPE mixingTableMotType[EM_FRAME_MAX][NUM_MOT_CHANNELS]= 
  {
   /*Plane*/ {EM_DC_BRUSH, EM_DC_BRUSH, EM_SERVO, EM_SERVO, EM_DC_BRUSH, EM_DC_BRUSH, EM_DC_BRUSH, EM_DC_BRUSH}   
  };

  Servo m_servo[NUM_MOT_CHANNELS];
};

class MotorCtrl{

  int motorCount;
  public: 
  MotorCtrl();
  ~MotorCtrl();

  void setRoll(double m_val);
  void setPitch(double m_val);
  void setYaw(double m_val);

  void setMotSpeed(MOT_CHANNEL m_ch,double m_speed);
  void setServoAngle(MOT_CHANNEL m_ch,double angle);
  
};
#endif

