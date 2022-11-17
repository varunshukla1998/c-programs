#include<stdio.h>

void main(){
	int r, ans;
	const float pi=3.14;
	
	printf("\n Enter the Radius of circle :");
	scanf("%d",&r);
	
	printf("\n The Radius of circle is : %d \n", r);
	
	printf("\n Finding Area Of Circle... \n");
	
	ans= pi*(r*r);
	printf("\n Area Of Circle is %d", ans);
	
	
}
