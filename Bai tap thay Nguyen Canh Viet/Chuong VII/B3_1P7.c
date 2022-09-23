#include<stdio.h>

double tong(int n, double x){
	double s = 1, ts = 1, ms = 1;
	for(int i = 1; i <= n; i++){
		ts *= x;	ms *= i;	s += ts/ms;
	}
	return s;
}

int main(){
	int n;	double x;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------------------\n");
	printf("\nS(x, n) = 1 + x/1! + ... + x^n/n! =  %.4lf",tong(n,x));
	return 0;
}
