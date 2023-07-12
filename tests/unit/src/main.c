#include <zephyr/ztest.h>
#include <my_custom_code.h>
#include <zephyr/fff.h>

DEFINE_FFF_GLOBALS;
FAKE_VOID_FUNC(z_log_minimal_printk);

ZTEST(unit_tests, test_mytest)
{
  int result = do_something_else();
  zassert_equal(result, 100, "Expected 100, got: %d", result);
}

ZTEST_SUITE(unit_tests, NULL, NULL, NULL, NULL, NULL);