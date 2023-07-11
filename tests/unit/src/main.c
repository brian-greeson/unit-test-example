#include <zephyr/ztest.h>

ZTEST(unit_tests, test_mytest)
{
  /* Verify standard behavior */
  zassert_equal(1, 1, "One is not One");
}

ZTEST_SUITE(unit_tests, NULL, NULL, NULL, NULL, NULL);