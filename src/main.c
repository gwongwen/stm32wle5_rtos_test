/*
 * Copyright (c) 2023
 * Regis Rousseau, INSA Lyon, CITI Lab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/sys/printk.h>
#include <zephyr/kernel.h>
#include <stdio.h>

int main(void)
{
    printk("Hello World! %s\n", CONFIG_BOARD);
	return 0;
}


