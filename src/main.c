#include <stdio.h>
#include "deposit.h"
int main()
{
	int day, sum, flag;
	
	printf("input days: ");
	scanf("%d",&day);
	
	printf("\ninput sum: ");
	scanf("%d",&sum);
	
	flag=check(day, sum);
	if (flag==-1)
	{
		return 0;
	}

	
	printf("\nIncome: %d",tabl(day, sum));

	return 0;
	
}
