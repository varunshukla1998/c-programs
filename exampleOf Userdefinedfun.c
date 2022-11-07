#include<stdio.h>

// Declaring a function
void add();
void sun();
void mul();
void div();

void main()
{
	int num1, num2, ans;
	
	printf("\n Enter Number 1 : ");
	scanf("%d", &num1);
	
	printf("\n Enter Number 2 : ");
	scanf("%d", &num2);
	
	printf("\n ********************************* \n");
	printf("\n *******Answer is as below******** \n");
	printf("\n ********************************* \n");
	
	add(num1,num2,ans);
	sub(num1,num2,ans);
	mul(num1,num2,ans);
	div(num1,num2,ans);
	//calling a function	
}

// Function Defination
void add(num1,num2,ans) 
{
	ans= num1+num2;
	printf("\n \t Sum of both numbers is %d \n", ans);
}

void sub(num1,num2,ans) 
{
	ans= num1-num2;
	printf("\n \t Subtraction of both numbers is %d \n", ans);
}

void mul(num1,num2,ans) 
{
	ans= num1*num2;
	printf("\n \t Multiplication of both numbers is %d \n", ans);
}

void div(num1,num2,ans) 
{
	ans= num1/num2;
	printf("\n \t Division of both numbers is %d \n", ans);
}
