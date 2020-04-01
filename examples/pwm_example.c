#include "../common.h"
#include "../pwm.h"

int main() {
  MAIN_INIT;
  pwm_set_frequency(PWM_MAX_FREQ);
  MAIN_RETURN;
}
