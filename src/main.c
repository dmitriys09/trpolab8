#include <stdio.h>
#include "deposit.h"
int main()
{
	int day, sum, income;
	
	printf("input days: ");
	scanf("%d",&day);
	
	printf("\ninput sum: ");
	scanf("%d",&sum);
	
	check(&day, &sum);

	tabl(&day, &sum, &income);
	
	printf("\nIncome: %d",income);

	return 0;
	
}
