#include <zephyr/ztest.h>

#include <my_custom_application_code.h>
#include <zephyr/fff.h>

DEFINE_FFF_GLOBALS;
FAKE_VOID_FUNC(z_log_minimal_printk);
FAKE_VALUE_FUNC(int64_t, k_uptime_get);

ZTEST(application_unit_tests, test_mytest)
{
  k_uptime_get_fake.return_val = 200;
  int result = add_200();
  zassert_equal(result, 200, "Expected 200, got: %d", result);
}

ZTEST_SUITE(application_unit_tests, NULL, NULL, NULL, NULL, NULL);