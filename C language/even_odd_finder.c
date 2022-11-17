#include<stdio.h>
void main()
{
	int num1;
	
	printf("Enter Number to check Even or Odd : ");
	scanf("%d", &num1);
	
	if(num1%2==0)
	{
		printf("Number %d is Even", num1);
	}
	else
	{
		printf("Number %d is Odd", num1);
	}
}
