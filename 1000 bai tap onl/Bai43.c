#include<stdio.h>
int main(){
	int n, dem = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		dem++;
	}while(n /= 10);
	printf("\nSo luong chu so cua n la :  %d",dem);
	return 0;
}
