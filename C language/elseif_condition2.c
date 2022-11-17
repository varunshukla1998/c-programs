#include<stdio.h>
void main(){
	
	//Declaring the variables
	int num1;
	
	//Scanning Number
	printf("\n Enter Number 1 : ");
	scanf("%d", &num1);
	
	//Printing Output in concole
	printf("\n Value of Number 1 is : %d", num1);
	
	if(num1==10){
		printf("\n Number 1 is :%d ", num1);
	}
	else if(num1==20){
		printf("\n Number 1 is %d ", num1);	
	}
	else if(num1==30){
		printf("\n Number 1 is %d ", num1);	
	}
	else{
		printf("\n Something is wrong ");	
	}
	
}
