#include<stdio.h>

void main(){
	
	float c, f;
	
	printf("\n Enter the Celcious :");
	scanf("%f",&c);
	
	printf("\n The Celcious is %f \n", c);
	
	printf("\n Converting celcious to Fahrenheit... \n");
	
	f = (c * 1.8) + 32;
	printf("\n Converted Fahrenheit is %f \n", f);
	
	
	printf("\n *************************************** \n");
	
	printf("\n Enter the Fahrenheit :");
	scanf("%f",&f);
	
	printf("\n The Fahrenheit is %f \n", f);
	
	printf("\n Converting Fahrenheit to celcious... \n");
	
	c = (f - 32) / 1.8;
	printf("\n Converted Celcious is %f", c);
	
	
	
	
}
