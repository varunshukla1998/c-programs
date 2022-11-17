#include<stdio.h>
void main()
{
	int a[100],i,n,min,max;
	
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
	printf("\n Enter Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	min=max=a[0];
	
	for(i=1;i<a[i];i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	
	printf("\n Min Number is : %d ", min);
	printf("\n Max Number is : %d ", max);

}
