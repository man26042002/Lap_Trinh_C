#include<stdio.h>
int main(){
	int n;	double x, ts = 1, ms = 1, s = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\nNhap x :  ");	scanf("%lf",&x);
	for(int i = 1; i <= n; i++){
		ts *= x;	ms *= i;	s += ts/ms;
	}
	printf("\nS(x, n) = 1 + x/1! + ... + x^n/n! =  %.4lf",s);
	return 0;
}
