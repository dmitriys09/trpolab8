#include <stdio.h>

int check(int *d, int *s)	
{
	if(*d<0 || *d>365)
	{
		printf("ERROR");
		return -1;
	}
	
	
	
	if (*s<10000)
	{
		printf("ERROR");
		return -1;
	}
	else
	{
		printf("\n");
		return 0;
	}
}

void tabl(int *d, int *s, int *i)
{
	if (*d<=30)
	{
		if (*s <100000)
		{
			*i=(*s/100)*90;
		}
		else
		{
			*i=(*s/100)*90;
		}	
	}
	
	if (*d>=31 && *d<=120)
	{
		if (*s <100000)
       	 	{
            		*i=(*s/100)*102;
        	}
        	else
        	{
        	    *i=(*s/100)*103;
        	}

	}
	
	if (*d>=121 && *d<=240)
	{
	        if (*s <100000)
	        {
	            *i=(*s/100)*106;
	        }
        	else
        	{
        	    *i=(*s/100)*108;
        	}
     
    	}	
    
    	if (*d>=241 && *d<=365)
    	{
        	if (*s <100000)
        	{
        	    *i=(*s/100)*112;
        	}
        	else
        	{
        	    *i=(*s/100)*115;
        	}
     
    	}
}

