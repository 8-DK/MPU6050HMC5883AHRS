#ifndef _CONFIG_H
#define _CONFIG_H

typedef enum MOT_TYPE{
  EM_DC_BRUSH,
  EM_SERVO,
  EM_MOT_TYPE_MAX  
}MOT_TYPE;

typedef enum AXIS_OF_ROT{
  EM_THROT = 0,
  EM_ROLL,
  EM_PITCH,
  EM_YAW,
  EM_AXIS_MAX
}AXIS_OF_ROT;

typedef enum FRAME_TYPE{
  EM_PLANE = 0,
  EM_QUAD,
  EM_HEX,
  EM_FRAME_MAX,
}FRAME_TYPE;

typedef enum MOT_CHANNEL{
  EM_MOT_CH1 = 0,
  EM_MOT_CH2,
  EM_MOT_CH3,
  EM_MOT_CH4,
  EM_MOT_CH5,
  EM_MOT_CH6,
  EM_MOT_CH7,
  EM_MOT_CH8, 
  EM_MOT_CH_MAX,  
}MOT_CHANNEL;

/////////////////////User Configer
#define SELECTED_FRAME EM_PLANE

int Ch_Pin[EM_MOT_CH_MAX] ={ 2,3,4,5,6,7,8,9 };

/////////////////////Default Mixer

/////////////////////Dont Change
#define NUM_AXIS 3

#define NUM_MOT_CHANNELS EM_MOT_CH_MAX


#endif
