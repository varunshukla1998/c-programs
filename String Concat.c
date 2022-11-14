#include<stdio.h>
void main()
{
	char ch1[10]={'h','e','l'};
	char ch2[10]={'l','o'};
	
	printf("\n String 1 is : %s \n", ch1);
	printf("\n String 2 is : %s \n", ch2);
	
	strcat(ch1,ch2);
	
	printf("\n String After Concat Operation : %s \n", ch1);
}
