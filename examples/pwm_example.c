#include "../pwm.h"
#include "../csim_macros.h"

unsigned int melody_length = 80;
unsigned int melody[] = { // source: https://www.princetronics.com/supermariothemesong/
  2637, 2637, 0, 2637,
  0, 2093, 2637, 0,
  3136, 0, 0,  0,
  1568, 0, 0, 0,

  2093, 0, 0, 1568,
  0, 0, 1319, 0,
  0, 1760, 0, 1976,
  0, 1865, 1760, 0,

  1568, 2637, 3136,
  3520, 0, 2794, 3136,
  0, 2637, 0, 2093,
  2349, 1976, 0, 0,

  2093, 0, 0, 1568,
  0, 0, 1319, 0,
  0, 1760, 0, 1976,
  0, 1865, 1760, 0,

  1568, 2637, 3136,
  3520, 0, 2794, 3136,
  0, 2637, 0, 2093,
  2349, 1976, 0, 0
};

int main() {
  MAIN_INIT;
  pwm_set_frequency(PWMN(0), melody[0]);
  pwm_enable(PWMN(0)); 
  /*for(int i = 0; i < melody_length; i++) {
    pwm_set_frequency(PWMN(0), melody[i]);
    pwm_enable(PWMN(0)); 
  }*/
  MAIN_RETURN;
}
