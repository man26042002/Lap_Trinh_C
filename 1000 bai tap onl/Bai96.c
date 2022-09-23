#include<stdio.h>
int main(){
	double x;
	printf("\nNhap x:  ");
	scanf("%lf",&x);
	double y = (x < 5) ? (-2*x*x + 4*x - 9) : (2*x*x + 5*x +9);
	printf("\nGia tri cua y :  %.4lf",y);
	return 0;
}
