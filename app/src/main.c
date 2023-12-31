/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include "my_custom_code.h"
#include "my_custom_application_code.h"

int main(void)
{
	int a = 100;
	a = a + 1;
	while (1)
	{
		k_sleep(K_SECONDS(2));
		add_100();
		add_200();
		k_sleep(K_SECONDS(2));
		log_time();
	}
}
