#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
#include "my_custom_code.h"
LOG_MODULE_REGISTER(applicationLog, LOG_LEVEL_DBG);

static int a = 0;

void log_time()
{
  uint64_t timeNow = k_uptime_get();
  LOG_DBG("%lld\n", timeNow);
}

int add_200()
{
  a = a + 200;
  return a;
}