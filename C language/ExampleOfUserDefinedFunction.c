#include<stdio.h>

// Declaring a function
void add();

void main()
{
	add();
	//calling a function	
}

// Function Defination
void add() 
{
	int num1, num2, ans;
	
	printf("Enter Number 1 : ");
	scanf("%d", &num1);
	
	printf("Enter Number 2 : ");
	scanf("%d", &num2);
	
	ans= num1+num2;
	
	printf("Sum of both numbers is %d", ans);
}
