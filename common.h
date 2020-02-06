#ifndef COMMON_H
#define COMMON_H

#define REGISTER32_RW(addr)             (*(volatile unsigned int*)(addr))

unsigned int register32_read(unsigned int register32);
void register32_write(unsigned int register32, unsigned int value32);
void register32_and(unsigned int register32, unsigned int value32);
void register32_or(unsigned int register32, unsigned int value32);

#endif
