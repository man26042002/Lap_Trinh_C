#include<stdio.h>
#include<math.h>
int main(){
	int n;	double x, ts = 1, ms = 1, t, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	
		scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------\n");
	for(int i = 1; i <= n; i++){
		ts *= x;	ms *= i;
		t = pow(-1,i)*(ts/ms);
		s += t;
	}
	printf("\nS = -x + x^2/2! -... + (-1)^n*x^n/n! =  %.4lf",s);
	return 0;
}
