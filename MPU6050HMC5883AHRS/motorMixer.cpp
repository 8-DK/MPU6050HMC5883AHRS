#include "motorMixer.h"

MotorCtrl::MotorCtrl()
{
  analogWriteResolution(12); //change arduino analog write resolution
  for (int i = 0 ; i < EM_MOT_CH_MAX; i++)
  {
    if (mixingTableMotType[SELECTED_FRAME][i] ==   EM_DC_BRUSH)
    {
      pinMode(Ch_Pin[i], OUTPUT);
      analogWrite(Ch_Pin[i], 0);
    }
    else if ( mixingTableMotType[SELECTED_FRAME][i] == EM_SERVO)
    {
      m_servo[i].attach(Ch_Pin[i]);
      m_servo[i].write(90); 
    }
  }
}

void MotorCtrl::setRoll(double m_val)
{
  m_val = constrain(m_val,-180.0,180.0);
}

void MotorCtrl::setPitch(double m_val)
{
  m_val = constrain(m_val,-90.0,90.0);
}

void MotorCtrl::setYaw(double m_val)
{
  m_val = constrain(m_val,-180,180);
}


void MotorCtrl::setMotSpeed(MOT_CHANNEL m_ch, double m_speed)
{
  m_speed = constrain(m_speed,0.0,100.0);
  analogWrite(ch,map(m_speed, 0.0, 100.0, 0.0, 4095.0);
}

void MotorCtrl::setServoAngle(MOT_CHANNEL m_ch, double m_angle)
{
   m_angle = constrain(m_angle,0,180);
   m_servo[i].write(m_angle); 
}

