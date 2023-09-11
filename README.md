# Simple Test for my Own MAMWLExx (based on STM32WLEx) Board

## Overview

This application prints "Hello World" to the console.

**First Board used** :  Cicecrone board by Move-X

**Second Board used** : Original MAMWLExx board (powered by battery/solar panel)

## Programming
Pyocd doesn't work.
I had to install stm32programmer to implement the existing code.

**Command to use**

west build -p always -b stm32wl_dw1000_iot_board applications/stm32wle5_rtos_test

west flash --runner stm32cubeprogrammer

