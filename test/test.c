#include "acutest.h"

void
test_sum(void)
{
	int a = 0;
	int b = 1;
	TEST_CHECK(a + b >= 1);
}
TEST_LIST = {{"example", test_sum}, {NULL, NULL}};