#include<stdio.h>
void main()
{
	int choice, number1 , number2, ans;
	
	printf("\n ----------MENU--------- \n");
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	printf("\n 5. Exit");
	
	printf("\n \n Enter Your Choice : ");
	scanf("%d", &choice);
	
	printf("\n \n Enter First Number : ");
	scanf("%d", &number1);
					
	printf("\n \n Enter Second Number : ");
	scanf("%d", &number2);
	
	switch(choice)
	{
		case 1: 
				ans = number1+number2;
				printf(" Addition = %d ", ans);
			
				break;	
				
		case 2: 
				ans= number1-number2;
				printf(" Subtraction = %d ", ans);
				
				break;
		
		case 3: 
				ans= number1*number2;
				printf(" Multiplication = %d ", ans);
				
				break;
				
		case 4: 
				ans= number1/number2;
				printf(" Division = %d ", ans);
				
				break;
				
		default:
				printf(" Something Went Wrong");
				break;
		
	}
}
