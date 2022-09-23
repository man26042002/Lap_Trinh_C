#include<stdio.h>
int main(){
	int n, t = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		t *= i;
	}
	printf("\nS = 1*2*...*n =  %d",t);
	return 0;
}
