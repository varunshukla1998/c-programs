#include<stdio.h>
void main(){
	int p, r, n, ans;
	
	printf("\n Enter - P :");
	scanf("%d",&p);
	
	printf("\n Enter - R :");
	scanf("%d",&r);
	
	printf("\n Enter - n :");
	scanf("%d",&n);
	
	printf("\n Finding Simple Intrest...");
	
	ans= (p*r*n)/100;
	printf("\n Simple Intrest is %d", ans);
	
	
}
