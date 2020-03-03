#include "common.h"
#include "gpio.h"
#include "pwm.h"
#include "crc.h"
#include "timer.h"

int main() {
  // GPIO
  gpio_enable_output(GPIOALL_AFTX05, GPIOALL_AFTX05);

  // PWM
  pwm_set_period(PWMN(0), 10);
  pwm_set_duty(PWMN(0), 5);
  pwm_set_active_high(PWMN(0));
  pwm_set_align_left(PWMN(0));
  pwm_enable(PWMN(0));

  return 0;
}
