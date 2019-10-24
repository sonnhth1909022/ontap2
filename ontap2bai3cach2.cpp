#include <stdio.h>
int main()
{
	int S = 0;
	
	for (int i = 0, j = 1; i < 100 ; j++)
	{ 
	    if (j%2 != 0)
		{		
		     S += j;
		     i++;		     
		}
	}
	
	printf ("tong 100 so le dau tien la: %d ", S);
	
	return 0;
}
