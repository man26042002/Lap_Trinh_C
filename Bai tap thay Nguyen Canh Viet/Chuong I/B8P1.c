#include<stdio.h>
int main(){
	double x, y;
	printf("\nNhap x :  ");	scanf("%lf",&x);
	y = x/(x*x + 1);
	printf("\nf(x) = x/(x^2 + 1) =  %.4lf",y);
	return 0;
}
