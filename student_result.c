#include<stdio.h>
void main(){
	
	//Declaring the variables
	int marks;
	
	//Scanning Number
	printf("\n Enter marks of student : ");
	scanf("%d", &marks);
	
	//Printing Output in concole
	//printf("\n Value of Number 1 is : %d", num1);
	
	if(marks>70 && marks<=80)
	{
			printf("\n First Class");
	}
	else if(marks>60 && marks<=70)
	{
			printf("\n Second Class");
	}
	else if(marks>=35 && marks<=60)
	{
			printf("\n Just Pass");
	}
	else if(marks<35)
	{
		printf("\n Fail");
	}
	else
	{
		printf("\n Something went wrong");
	}
	
}
