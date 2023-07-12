#include <zephyr/logging/log.h>
#include "my_custom_code.h"
LOG_MODULE_REGISTER(basicLog, LOG_LEVEL_DBG);

static int a = 0;

void log_100()
{
  LOG_DBG("%d\n", a);
}

int add_100()
{
  a = a + 100;
  return a;
}