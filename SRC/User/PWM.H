#ifndef __PWM_H
#define __PWM_H

#include "stm32f10x.h"

//-----���PWMֵ-----//
#define MAX_PWM 2000

//-----��������-----//
extern void PWM_Set(const u16 pwm1,const u16 pwm2,const u16 pwm3,const u16 pwm4);	// PWM����

#endif