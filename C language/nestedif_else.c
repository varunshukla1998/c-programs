#include<stdio.h>
void main(){
	
	//Declaring the variables
	int age;
	
	//Scanning Number
	printf("\n Enter Number 1 : ");
	scanf("%d", &age);
	
	//Printing Output in concole
	//printf("\n Value of Number 1 is : %d", num1);
	
	if(age>14)
	{
		
		if(age>=18)
		{
			printf("\n Adult");
		}
		else
		{
			printf("\n Teenager");
		}
	}
	else 
	{
		if(age<5)
		{
			printf("\n Child");
		}
		else
		{
			printf("\n Something Went Wrong");
		}
	}
	
}
