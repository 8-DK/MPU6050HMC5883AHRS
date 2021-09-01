#ifndef __MOTOR_MIXER_H
#define __MOTOR_MIXER_H
//http://autoquad.org/wiki/wiki/configuring-autoquad-flightcontroller/frame-motor-mixing-table/

#include "config.h"

class MotorMixer{
 public:
  int numberOfChannels;
  //Hold motor channel mapping
  MOT_CHANNEL motChannels[NUM_MOT_CHANNELS] = {EM_MOT_CH1,EM_MOT_CH2,EM_MOT_CH3,EM_MOT_CH4,EM_MOT_CH5,EM_MOT_CH6,EM_MOT_CH7,EM_MOT_CH8};
  //hold custome mixing table
  int mixingTable[EM_FRAME_MAX][NUM_MOT_CHANNELS]; 
}

class MotorCtrl{

  int motorCount
  public: 
  MotorCtrl();
  ~MotorCtrl();
  
}
#endif

