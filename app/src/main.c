/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include "my_custom_code.h"

int main(void)
{
	int a = 100;
	a = a + 1;
	while (1)
	{
		k_sleep(K_SECONDS(2));
		do_something();
		k_sleep(K_SECONDS(2));
		do_something_else();
	}
}
