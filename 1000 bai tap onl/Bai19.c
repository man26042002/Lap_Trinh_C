#include<stdio.h>
int main(){
	int n;	double x;	double s , ts, ms = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n----------------------------------\n");
	ts = x;	s = 1 + x;
	for(int i = 1; i <= n; i++){
		ts *= x*x;	ms *= (2*i+1)*(2*i);	s += ts/ms;
	}
	printf("\nS(x, n) = 1 + x + ... + x^(2n+1)/(2n+1) =  %.4lf",s);
	return 0;
}
