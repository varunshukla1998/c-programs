#include<stdio.h>
void main()
{
	int arr[5]={2,7,8,9,5};

	arr[0]=15; // Overwrite 0th position value to 15
	
	printf("\n %d \n", arr[0]);
	
	printf("\n %d \n", arr[2]);
	
	printf("\n %d \n", arr[4]);
}
