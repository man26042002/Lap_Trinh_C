#include<stdio.h>
int main(){
	double a, b, h;
	printf("\nNhap canh 1 :  ");	scanf("%lf",&a);
	printf("\nNhap canh 2 :  ");	scanf("%lf",&b);
	printf("\nNhap chieu cao :  ");	scanf("%lf",&h);
	printf("\nDien tich hinh thang :  %.4lf",(a+b)*h/2);
	return 0;
}
