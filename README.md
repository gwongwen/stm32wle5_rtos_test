# Code for 6sens Omnitilt Project : simple "Hello World!" test for my Own MAMWLExx (based on STM32WLEx) Board

## Overview
This application prints "Hello World" to the console and allows us that the device tree board file is correct.

**First Board used** :  Cicecrone board by Move-X

**Second Board used** : Original MAMWLExx board, powered by battery/solar panel. (see 6sens_omnitilt repository/hardware part, for more information)

## Building and Running
Pyocd doesn't work. I had to install stm32programmer to implement the existing code.

The following commands clean build folder, build and flash the sample:

**Command to use**

west build -t pristine

west build -b stm32wl_dw1000_iot_board applications/stm32wle5_rtos_test

west flash --runner stm32cubeprogrammer