#include<stdio.h>
void main()
{
	//declaring and initializing a variable
	int n, sum=0, i=0;
	
	// Getting Input from user
	printf("\n \t Enter Number : ");
	scanf("%d", &n);
	
	// Created a goto lable
	lable:
		
		//incrementing i by 1
		i++;
		
		sum+=i;
		//i.e. sum= sum+i;
		
		if(i<n)
		//going to the keyword lable
		goto lable;
		
	// Printing Output to console / User
	printf("\n \t Sum of %d is : %d", n,sum);
}
