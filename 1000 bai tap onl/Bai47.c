#include<stdio.h>
int main(){
	int n, s = 0, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(i % 2 == 0){
			s += i;
		}
	}while(n /= 10);
	printf("\ntong cac chu so chan cua n la :  %d",s);
	return 0;
}
