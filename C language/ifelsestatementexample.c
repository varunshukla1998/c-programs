#include<stdio.h>
void main(){
	
	//Declaring the variables
	int num1,num2;
	
	//Scanning Number
	printf("\n Enter Number 1 : ");
	scanf("%d", &num1);
	
	//Scanning Number
	printf("\n Enter Number 2 : ");
	scanf("%d", &num2);
	
	//Printing Output in concole
	printf("\n Value of Number 1 is : %d", num1);
	printf("\n Value of Number 2 is : %d", num2);
	
	if(num1>num2){
		printf("\n Number 1 (%d) is greater ", num1);
	}
	else{
		printf("\n Number 2 (%d) is greater ", num2);	
	}
	
}
