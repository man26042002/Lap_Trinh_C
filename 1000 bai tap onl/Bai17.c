#include<stdio.h>
int main(){
	int n;	double x;	double s = 0, ts = 1, ms = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n----------------------------------\n");
	for(int i = 1; i <= n; i++){
		ts *= x;	ms *= i;	s += ts/ms;
	}
	printf("\nS(x, n) = x + x^2/2! + ... + x^n/n! =  %.4lf",s);
	return 0;
}
