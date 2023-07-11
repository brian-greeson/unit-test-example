#include <zephyr/logging/log.h>
#include "my_custom_code.h"
LOG_MODULE_REGISTER(things, LOG_LEVEL_DBG);

static int a = 0;
void do_something()
{
  LOG_DBG("%d\n", a);
}
int do_something_else()
{
  a = a + 100;
  return a;
}