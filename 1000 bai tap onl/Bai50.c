#include<stdio.h>
int main(){
	int n, dao = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		dao = dao*10 + n%10;
	}while(n /= 10);
	printf("\nSo dao nguoc cua n la :  %d",dao);
	return 0;
}
