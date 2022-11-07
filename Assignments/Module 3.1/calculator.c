#include<stdio.h>
void main(){
	int num1, num2, ans;
	
	printf("\n Enter Number - 1 :");
	scanf("%d",&num1);
	
	printf("\n Enter Number - 2 :");
	scanf("%d",&num2);
	
	printf("\n All Maths Operators Ans is below");
	
	ans= num1+num2;
	printf("\n Addition of Num1 and Num2 is %d", ans);
	
	ans= num1-num2;
	printf("\n Subtraction of Num1 and Num2 is %d", ans);
	
	ans= num1*num2;
	printf("\n Multiplication of Num1 and Num2 is %d", ans);
	
	ans= num1/num2;
	printf("\n Division of Num1 and Num2 is %d", ans);
	
	ans= num1%num2;
	printf("\n Modulo of Num1 and Num2 is %d", ans);
}
