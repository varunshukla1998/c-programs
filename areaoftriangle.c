#include<stdio.h>

void main(){
	
	int height, base, ans;
	
	printf("\n Enter the Length of Triangle :");
	scanf("%d",&height);
	
	printf("\n Enter the Breath of Triangle :");
	scanf("%d",&base);
	
	printf("\n The Length is %d and Breath of Triangle is %d \n", height,base);
	
	printf("\n Finding Area Of Triangle... \n");
	
	ans= (height*base)/2;
	printf("\n Area Of Triangle is %d", ans);
	
	
}
