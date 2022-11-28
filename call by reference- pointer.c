#include<stdio.h>
int swap(int *, int *); // Initialization of function

main()
{
	int a=20, b=30; // Atual parameters
	printf("\n Before swaping a=%d and b=%d \n",a ,b);
	
	swap(&a,&b); // Calling a function
	
}

int swap ( int *a, int *b) // Formal parameters, Declaration of function
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b =temp;
	
	printf("\n After swaping a=%d and b=%d \n", *a, *b);
	
}
