#include<stdio.h>
int main(){
	int n;	double x;	double s = 0, t = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		t *= x*x;	s += t;
	}
	printf("\nS(x, n) = x^2 + x^4 + ... + x^2n =  %.4lf",s);
	return 0;
}
