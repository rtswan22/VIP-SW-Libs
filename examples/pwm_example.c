#include "../common.h"
#include "../pwm.h"
#include "../../inc/ccode_macros.h"

int main() {
  MAIN_INIT;
  pwm_set_frequency(PWMN(0), PWM_MAX_FREQ);
  MAIN_RETURN;
}
