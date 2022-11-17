#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
//	for(i=n;i>=1;i--)
//	{
//		
//		for(j=n;j>=i;j--)
//		{
//			printf("*");
//		}
//		
//		printf("\n");
//	}

	for(j=n;j>=1;j--)
	{
		
		for(i=n;i>j;i--)
		{
			printf("\n");
		}
		
		printf("*");
	}

}
