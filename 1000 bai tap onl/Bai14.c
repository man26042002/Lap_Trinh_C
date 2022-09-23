#include<stdio.h>
int main(){
	int n;	double x;
	do{
		printf("\nNhap so  nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n---------------------------------\n");
	double s = 0, t = x;
	for(int i = 1; i <= n; i++){
		t *= x*x;	s += t;
	}
	printf("\nS(x, n) = x + x^3 + ... + x^(2n+1) =  %.4lf",s);
	return 0;
}
