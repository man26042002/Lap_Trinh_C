#include<stdio.h>

int main(){
	int n, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		s += i*i;
	}
	printf("\nS = 1^2 + 2^2 + ... + n^2 =  %d",s);
	return 0;
}
