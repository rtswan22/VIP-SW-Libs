//#include "lib_apb/common.h"

void myFunc() {
  return;
}

void main() {
  asm volatile ("li sp, 0x000083FC;");
  while(1);
}
