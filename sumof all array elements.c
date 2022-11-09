#include<stdio.h>
main()
{
	int arry[]={2,4,5,6,8};
	int i, sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n %d = %d \n",i+1,arry[i]);
		sum+=arry[i];	
	}
	
	printf("\n Sum of all array elements is : %d \n",sum);
}
