#include<stdio.h>
void main()
{
	int a[100],i,n,min,max;
	
	printf("Enter Size of array : ");
	scanf("%d", &n);
	
	printf("Enter elements : ");
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
	
	printf("Min number : %d ", min);
	printf("Max number : %d ", max);
	
}
