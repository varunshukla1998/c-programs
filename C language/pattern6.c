#include<stdio.h>
void main()
{
	int i,j,rows;
	
	printf("\n Enter Number : ");
	scanf("%d",&rows);
	
	for(i=rows;i>=0;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}

/*Output :
 
*****
****
***
**
*

 */
