#include "gpio.h"

//// Input
void gpio_set_input(unsigned int pins) {
  REGISTER32_RW(GPIO_DATA_DIRECTION) &= ~pins;
}
unsigned int gpio_read_input(unsigned int pins) {
  return REGISTER32_RW(GPIO_DATA) & pins;
}
//// Output
void gpio_set_output(unsigned int pins, unsigned int pin_outputs) {
  REGISTER32_RW(GPIO_DATA_DIRECTION) |= pins;
  REGISTER32_RW(GPIO_DATA) &= ~pins;
  REGISTER32_RW(GPIO_DATA) |= pins & pin_outputs;
}
//// Interrupts
void gpio_interrupt_enable_posedge(unsigned int pins) {
  REGISTER32_RW(GPIO_NEGATIVE_EDGE) &= ~pins;
  REGISTER32_RW(GPIO_POSITIVE_EDGE) |= pins;
  REGISTER32_RW(GPIO_INTERRUPT_ENABLE) |= pins;
}
void gpio_interrupt_disable_posedge(unsigned int pins) {
REGISTER32_RW(GPIO_INTERRUPT_ENABLE) &= ~pins;
REGISTER32_RW(GPIO_POSITIVE_EDGE) &= ~pins;
}

void gpio_interrupt_enable_negedge(unsigned int pins) {
  REGISTER32_RW(GPIO_POSITIVE_EDGE) &= ~pins;
  REGISTER32_RW(GPIO_NEGATIVE_EDGE) |= pins;
  REGISTER32_RW(GPIO_INTERRUPT_ENABLE) |= pins;
}
void gpio_interrupt_disable_negedge(unsigned int pins) {
  REGISTER32_RW(GPIO_INTERRUPT_ENABLE) &= ~pins;
  REGISTER32_RW(GPIO_NEGATIVE_EDGE) &= ~pins;
}

void gpio_interrupt_clear(unsigned int pins) {
  REGISTER32_RW(GPIO_INTERRUPT_CLEAR) |= pins;
}

unsigned int gpio_interrupt_status(unsigned int pins) {
  return REGISTER32_RW(GPIO_INTERRUPT_STATUS) & pins;
}
