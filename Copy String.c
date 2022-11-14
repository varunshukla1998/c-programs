#include<stdio.h>   
void main() { 
 
    char str[20]="Welcome to Tops";
    char str1[20];
    
    printf("\n Before Coping :- ");  
    
    printf("\n Actual string : %s \n", str);  
    printf(" Coping string : %s \n", str1);  
    
    strcpy(str1,str);
    
    printf("\n After Coping :- ");  
    
    printf("\n Actual string : %s \n", str);  
    printf(" Coping string : %s \n", str1);  
    
}  
