#include<stdio.h>
void main(){
	int num1, num2, ans;

	printf("\n Enter First Number = ");
	scanf("%d", &num1);
	
	printf("\n Enter Second Number = ");
	scanf("%d", &num2);

	printf("\n First Number is %d", num1);
	printf("\n Second Number is %d", num2);

	ans = num1 + num2;

	printf("\n Addition Of both is %d", ans);
}
