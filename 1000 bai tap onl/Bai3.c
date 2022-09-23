#include<stdio.h>
int main(){
	int n;	double  s= 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		s += 1.0/i;
	}
	printf("\nS = 1 + 1/2 + ... + 1/n =  %.4lf",s);
	return 0;
}
