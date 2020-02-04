#ifndef GPIO_H
#define GPIO_H

// GPIO (0x8000 0000 - 0x8000 FFFF)
#define GPIO_REGISTER_READ(addr)             (*(volatile unsigned int*)(addr)) //CHECK: does there need to be * before
#define GPIO_REGISTER_WRITE(addr)            ((volatile unsigned int*)(addr)) //CHECK: does there need to be * before

#define GPIO                            (0x80000000)
#define GPIO_DATA                       (GPIO + 0x04)
#define GPIO_DATA_DIRECTION             (GPIO + 0x08)
#define GPIO_INTERRUPT_ENABLE           (GPIO + 0x0C)
#define GPIO_POSITIVE_EDGE              (GPIO + 0x10)
#define GPIO_NEGATIVE_EDGE              (GPIO + 0x14)
#define GPIO_INTERRUPT_CLEAR            (GPIO + 0x18)
#define GPIO_INTERRUPT_STATUS           (GPIO + 0x1C)

#define GPIO0                           (1 << 0)
#define GPIO1                           (1 << 1)
#define GPIO2                           (1 << 2)
#define GPIO3                           (1 << 3)
#define GPIO4                           (1 << 4)
#define GPIO5                           (1 << 5)
#define GPIO6                           (1 << 6)
#define GPIO7                           (1 << 7)
#define GPIO8                           (1 << 8)
#define GPIO9                           (1 << 9)
#define GPIO10                          (1 << 10)
#define GPIO11                          (1 << 11)
#define GPIO12                          (1 << 12)
#define GPIO13                          (1 << 13)
#define GPIO14                          (1 << 14)
#define GPIO15                          (1 << 15)
#define GPIO16                          (1 << 16)
#define GPIO17                          (1 << 17)
#define GPIO18                          (1 << 18)
#define GPIO19                          (1 << 19)
#define GPIO20                          (1 << 20)
#define GPIO21                          (1 << 21)
#define GPIO22                          (1 << 22)
#define GPIO23                          (1 << 23)
#define GPIO24                          (1 << 24)
#define GPIO25                          (1 << 25)
#define GPIO26                          (1 << 26)
#define GPIO27                          (1 << 27)
#define GPIO28                          (1 << 28)
#define GPIO29                          (1 << 29)
#define GPIO30                          (1 << 30)
#define GPIO31                          (1 << 31)
#define GPIOALL                         (0xFFFFFFFF)

// Funciton Prototypes
// CHECK: want success and failure return values for register writes?
// CHECK: how should registers be typed? uint32_t? unsigned int?
void gpio_set_input(unsigned int pins);
unsigned int gpio_read_input(unsigned int pins);
void gpio_set_output(unsigned int pins, unsigned int pin_outputs);
void gpio_interrupt_enable_posedge(unsigned int pins); //are posedge and negedge mutually exclusive? should they be?
void gpio_interrupt_enable_negedge(unsigned int pins); //are posedge and negedge mutually exclusive? should they be?
void gpio_interrupt_clear(unsigned int pins);
unsigned int gpio_input(unsigned int pins);

#endif
