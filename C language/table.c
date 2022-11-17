#include<stdio.h>
void main()
{
	//declaring and initializing a variable
	int num, ans, i;
	
	// Getting Input from user
	printf("\n \t Enter Number : ");
	scanf("%d", &num);
	
	printf("\n \t Table of %d is as below... \n",num);
	
	for(i=1; i<=10 ;i++)
	{
		ans= num*i;
		printf("\n \t %d * %d = %d ", num,i, ans );
	}
	
}
