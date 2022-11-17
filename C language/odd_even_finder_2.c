#include<stdio.h>
void main()
{
	int i, num;
	
	printf("\n Enter last Digit to find even or odd : ");
	scanf("%d", &num);
	
	printf("\n Even and Odd Numbers are : \n");
	for( i = 1 ; i <= num ; i++)
	{
		if(i%2==0)
		{
			printf("\n \t Number %d is Even", i);
		}
		else
		{
			printf("\n \t Number %d is Odd", i);
		}
	}
	
}
