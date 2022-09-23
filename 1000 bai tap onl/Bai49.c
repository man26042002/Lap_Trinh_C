#include<stdio.h>
int main(){
	int n, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
	}while(n /= 10);
	printf("\nChu so dau tien cua n la :  %d",i);
	return 0;
}
