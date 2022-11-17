#include<stdio.h>   
void main() { 
 
    char name[50];
    int length;
    
    printf("\n Enter String :- "); 
	gets(name);
	
	length=strlen(name) ;
	  
    printf(" Length of string (Total No. of character) : %d \n", length);  
    
}  
