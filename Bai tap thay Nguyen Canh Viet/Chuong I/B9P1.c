#include<stdio.h>
int main(){
	double x, y;
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n-----------------------\n");
	y = (x > 0) ? x*x : (x + 1);
	printf("\ny =  %.4lf",y);
	return 0;
}
