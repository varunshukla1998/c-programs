#include<stdio.h>
// function declarations 
addition();
subtraction();
multiplication();
division();
void main()
{
	//Initializing Variables
	int choice, number1 , number2, ans;
	
	
	//Displaying Menu items to select
	printf("\n ----------MENU--------- \n");
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	printf("\n 5. Exit");
	
	
	//Getting Users choice and Numbers to calculate 
	printf("\n \n Enter Your Choice : ");
	scanf("%d", &choice);
	
	printf("\n \n Enter First Number : ");
	scanf("%d", &number1);
					
	printf("\n \n Enter Second Number : ");
	scanf("%d", &number2);
	
	
	 // use switch statement to call an operation  
	switch(choice)
	{
		case 1: 
				addition(ans,number1,number2);
				/* It call the addition() function  to add the given numbers */  
				break;	
				
		case 2: 
				subtraction(ans,number1,number2);
				/* It call the subtract() function  to subtract the given numbers */  
				break;
		
		case 3: 
				multiplication(ans,number1,number2);
				/* It call the multiply() function  to multiply the given numbers */  
				break;
				
		case 4: 
				multiplication(ans,number1,number2);
				/* It call the divide() function  to divide the given numbers  */  
				break; 
				// break the function  
				
		default:
				printf(" Something Went Wrong");
				break;
		
	}
}

// function definition

// use addition() function to add two numbers  
addition(ans,number1,number2)
{
	ans = number1+number2;
	printf("\n Addition = %d ", ans);
}

// use subtract() function to subtract two numbers  
subtraction(ans,number1,number2)
{
	ans= number1-number2;
	printf("\n Subtraction = %d ", ans);
}

// use multiply() function to multiply two numbers
multiplication(ans,number1,number2)
{
	ans= number1*number2;
	printf("\n Multiplication = %d ", ans);
}

// use divide() function to divide two numbers  
division(ans,number1,number2)
{
	ans= number1/number2;
	printf("\n Division = %d ", ans);
}
