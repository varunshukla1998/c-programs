#include<stdio.h>
void main()
{
	//declaring and initializing a variable
	int i;
	
	for(i=0; i<11; i++)
	{
		if((i==4) || (i==9))
		
			continue;
			printf("\n \t Value of i is : %d \n",i);
			
	}
	// "Continue" statement skip the current iteration and continue with next iteration
	
}
