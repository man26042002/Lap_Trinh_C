#include<stdio.h>
int main(){
	int n;	double x;	double s = 1, ts = 1, ms = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n----------------------------------\n");
	for(int i = 1; i <= n; i++){
		ts *= x*x;	ms *= (2*i)*(2*i-1);	s += ts/ms;
	}
	printf("\nS(x, n) = 1 + x^2/2! + ... +x^(2n)/(2n)! =  %.4lf",s);
	return 0;
}
