#include <stdio.h>

int check(int day, int sum)	
{
	if(day<0 || day>365)
	{
		printf("ERROR, WRONG NUMBER OF DAYS");
		return -1;
	}
	
	
	
	if (sum<10000)
	{
		printf("ERROR, DEPOSIT MUST BE MORE EQUAL 10 000");
		return -1;
	}
	else
	{
		printf("\n");
		return 0;
	}
}

int tabl(int day, int sum)
{
	int income;
	if (day<=30)
	{
		if (sum <100000)
		{
			income=(sum/100)*90;
		}
		else
		{
			income=(sum/100)*90;
		}	
	}
	
	if (day>=31 && day<=120)
	{
		if (sum <100000)
       	 	{
            	income=(sum/100)*102;
        	}
        	else
        	{
        	    income=(sum/100)*103;
        	}

	}
	
	if (day>=121 && day<=240)
	{
	        if (sum <100000)
	        {
	            income=(sum/100)*106;
	        }
        	else
        	{
        	    income=(sum/100)*108;
        	}
     
    	}	
    
    	if (day>=241 && day<=365)
    	{
        	if (sum <100000)
        	{
        	    income=(sum/100)*112;
        	}
        	else
        	{
        	    income=(sum/100)*115;
        	}
     
    	}
    return income;
}


