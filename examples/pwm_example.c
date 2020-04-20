#include "../pwm.h"
#include "../csim_macros.h"

int main() {
  MAIN_INIT;
  
  pwm_set_frequency(PWMN(0), 25000000);
  pwm_enable(PWMN(0)); 
  
  pwm_set_frequency(PWMN(0), 20000000);
  pwm_enable(PWMN(0)); 
  
  pwm_set_frequency(PWMN(0), 15000000);
  pwm_enable(PWMN(0)); 
  
  pwm_set_frequency(PWMN(0), 10000000);
  pwm_enable(PWMN(0)); 
  
  pwm_set_frequency(PWMN(0), 5000000);
  pwm_enable(PWMN(0)); 
  
  MAIN_RETURN;
}
