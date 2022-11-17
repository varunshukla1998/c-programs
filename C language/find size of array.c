#include<stdio.h>
void main()
{
	int arr[5], i;

	for (i=1;i<=5;i++)
	{
		printf("\n %u \n", &arr[i]);
		// " %u " is used to check the size of any datatype
	}
}
