#include<stdio.h>
int main(){
	int n, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		s += n%10;
	}while(n /= 10);
	printf("\nTong cac chu so cua n la :  %d",s);
	return 0;
}
