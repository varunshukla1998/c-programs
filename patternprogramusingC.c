#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
