#ifndef PWM_H
#define PWM_H

#include "common.h"

// PWM (0x8001 0000 - 0x8001 FFFF)
// APB Registers
#define PWM                             (0x80010000)
#define PWM_PERIOD                      (PWM + 0x00)
#define PWM_DUTY                        (PWM + 0x04)
#define PWM_CONTROL                     (PWM + 0x08)

#define PWM_CONTROL_DISABLE            ~(1 << 0)
#define PWM_CONTROL_ENABLE              (1 << 0)
#define PWM_CONTROL_ACTIVE_HIGH        ~(1 << 1)
#define PWM_CONTROL_ACTIVE_LOW          (1 << 1)
#define PWM_CONTROL_ALIGN_LEFT         ~(1 << 2)
#define PWM_CONTROL_ALIGN_CENTER        (1 << 2)

#define PWM_CHANNEL_SIZE                (0x0C)
#define PWM(channel_number)             (channel_number * PWM_CHANNEL_SIZE)
/*#define PWM0                            (0 << PWM_CHANNEL_SIZE)
#define PWM1                            (1 << PWM_CHANNEL_SIZE)
#define PWM2                            (2 << PWM_CHANNEL_SIZE)
#define PWM3                            (3 << PWM_CHANNEL_SIZE)
#define PWM4                            (4 << PWM_CHANNEL_SIZE)
#define PWM5                            (5 << PWM_CHANNEL_SIZE)
#define PWM6                            (6 << PWM_CHANNEL_SIZE)
#define PWM7                            (7 << PWM_CHANNEL_SIZE)
#define PWM8                            (8 << PWM_CHANNEL_SIZE)
#define PWM9                            (9 << PWM_CHANNEL_SIZE)*/

// Function Prototypes
//// Period
void pwm_set_period(unsigned int channel, unsigned int period);
//// Duty
void pwm_set_duty(unsigned int channel, unsigned int duty);
//// Control
void pwm_disable(unsigned int channel);
void pwm_enable(unsigned int channel);
void pwm_set_active_high(unsigned int channel);
void pwm_set_active_low(unsigned int channel);
void pwm_set_align_left(unsigned int channel);
void pwm_set_align_center(unsigned int channel);

#endif PWM_H
