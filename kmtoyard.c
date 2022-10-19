#include<stdio.h>

void main(){
	
	float km, yard;
	
	float number = 1093.613298;
	
	printf("\n Enter the kilometer to convert :");
	scanf("%f",&km);
	
	printf("\n The Kilometer is %f \n", km);
	
	printf("\n Converting Km to Yard... \n");
	
	yard = km*number;
	printf("\n Converted value is %f yard \n", yard);
	
	
	printf("\n *************************************** \n");
	
	printf("\n Enter the yard :");
	scanf("%f",&yard);
	
	printf("\n The value is %f yard \n", yard);
	
	printf("\n Converting Yard to Km... \n");
	
	km = yard/number;
	printf("\n Converted km is %f km", km);
		
}
