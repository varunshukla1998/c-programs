#include<stdio.h>
void main()
{
	//declaring and initializing a variable
	int n, sum, i;
	
	// Getting Input from user
	printf("\n \t Enter Number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n ;i++)
	{
		sum+=i;
		//printf("\n \t Sum of %d is : %d", n,sum);
	}
		
	// Printing Output to console / User
	printf("\n \t Sum of %d is : %d", n, sum);
}
