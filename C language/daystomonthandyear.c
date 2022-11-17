#include<stdio.h>

void main(){
	
	int days, month, year;
	
	//float number1 = 0.032855 , number2 = 0.0027379;
	
	printf("\n Enter number of days :");
	scanf("%d",&days);
	
	printf("\n Converting Days into Months and Years...");
	
	month =  (12 * days) / 365 ;
	printf("\n %d days = %d months", days, month);
	
	year = days / 365;
	printf("\n %d days = %d years", days, year);
		
}
