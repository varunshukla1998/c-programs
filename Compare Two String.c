#include<stdio.h>   
void main() { 
 
    char str1[20], str2[20], ans;
    
    printf("\n Enter String One :- "); 
	scanf("%s", str1);
	
	printf("\n Enter String Two :- "); 
	scanf("%s", str2);
	
	ans=strcmp(str1,str2) ;
	 
	if(ans!=0)
	{
		printf("\n Strings are not Equal ");  
	} 
    else
    {
    	printf("\n Strings are Equal ");  
	}
    
}  
