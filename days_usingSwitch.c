#include<stdio.h>
void main()
{
	int days;
	
	printf("Enter Number : ");
	scanf("%d", &days);
	
	switch(days)
	{
		case 1: 
				printf("Sunday");
				break;
				
		case 2: 
				printf("Monday");
				break;
		
		case 3: 
				printf("Tuesday");
				break;
				
		default:
				printf("Something Went Wrong");
		
	}
}
