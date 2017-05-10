#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include "deposit.h"

//check the functions "check"
CTEST(check, test1)
{
	ASSERT_EQUAL(0, check(365, 10000));
}










