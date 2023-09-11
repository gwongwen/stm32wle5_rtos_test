/*
 * Copyright (c) 2023
 * Regis Rousseau
 * Univ Lyon, INSA Lyon, Inria, CITI, EA3720
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/sys/printk.h>
#include <zephyr/kernel.h>
#include <stdio.h>

int main(void)
{
    //printf("Hello World! %s\n", CONFIG_BOARD);
    printk("Hello World! %s\n", CONFIG_BOARD);
	return 0;
}