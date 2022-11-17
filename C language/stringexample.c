#include<stdio.h>
void main(){
	
	//Declaring the variables
	char c, name[20];
	
	//Scanning single character
	printf("\n Enter Single Character (y or n) : ");
	scanf("%c", &c);
	
	//Clearing the screen
	fflush(stdin);
	
	//Getting whole string as an input
	printf("\n Enter your name : ");
	gets(name);
	
	//Printing Output to concole
	printf("\n Single Character is : %c", c);
	printf("\n Your name is : %s ", name);
	
}
