#include<stdio.h>
int main(){
	double a, b;
	printf("\nNhap chieu rong :  ");	scanf("%lf",&a);
	printf("\nNhap chieu dai :  ");		scanf("%lf",&b);
	printf("\nDien tich hcn:  %.4lf, Chu vi hcn :  %.4lf\n",a*b,2*(a+b));
	return 0;
}
