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

//check the function "tabl"

CTEST(tabl, test1)
{
	ASSERT_EQUAL(9000, tabl(30, 10000));
}
CTEST(tabl, test2)
{
	ASSERT_EQUAL(90000, tabl(30, 100000));
}
CTEST(tabl, test3)
{
	ASSERT_EQUAL(10200, tabl(31, 10000));
}
CTEST(tabl, test4)
{
	ASSERT_EQUAL(103000, tabl(31, 100000));
}
CTEST(tabl, test5)
{
	ASSERT_EQUAL(10600, tabl(121, 10000));
}
CTEST(tabl, test6)
{
	ASSERT_EQUAL(108000, tabl(121, 100000));
}
CTEST(tabl, test7)
{
	ASSERT_EQUAL(11200, tabl(241, 10000));
}
CTEST(tabl, test8)
{
	ASSERT_EQUAL(115000, tabl(241, 100000));
}










