# VIP-SW-Libs
Libraries for senior design 

lib_apb: All software library files

rtl_builder: All files related to building the code for running
- pull the riscv tools using: $ ./get_riscv_tools
- add riscv tools to your .bashrc as similar to the following:
```
export RISCV=~/rtl_builder/riscv-tools
export PATH=~/rtl_builder/riscv-tools/bin:$PATH
```
- run code using: $ python src_to_rom.py myfilename.c

periphs.tcl: Basic waveform setup for viewing GPIO, PWM, Timer, and CRC
