#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
#include "my_custom_code.h"
LOG_MODULE_REGISTER(things, LOG_LEVEL_DBG);

static int a = 0;

void do_something()
{
  uint64_t timeNow = k_uptime_get();
  LOG_DBG("%lld\n", timeNow);
}

int do_something_else()
{
  a = a + 100;
  return a;
}