#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include "deposit.h"

//check the functions "check"
CTEST(check, test1)
{
	ASSERT_EQUAL(0, check(365, 10000));
}
CTEST(check, test2)
{
	ASSERT_EQUAL(-1, check(366, 10000));
}
CTEST(check, test3)
{
	ASSERT_EQUAL(-1, check(365, 9999));
}
CTEST(check, test4)
{
	ASSERT_EQUAL(-1, check(366, 9999));
}
CTEST(check, test5)
{
	ASSERT_EQUAL(-1, check(-10, 10000));
}
CTEST(check, test6)
{
	ASSERT_EQUAL(-1, check(365, -10000));
}










