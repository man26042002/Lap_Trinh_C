#include<stdio.h>
int main(){
	int n, t = 1;
	
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	
	printf("\n----------------------------\n");
	do{
		t *= n%10;
	}while(n /= 10);
	
	printf("\nTich cac chu so cua n la :  %d",t);
	
	return 0;
}
