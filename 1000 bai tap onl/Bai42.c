#include<stdio.h>
int main(){
	int n, s = 0, i = 0;
	do{
		printf("\nNhap so nguyen duong n:  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	while(s < n){
		 s += i;	++i;
	}
	printf("\nSo k thoa man 1 + 2 + ... + k < n la :  %d",i);
	return 0;
}
