#include<stdio.h>
int main(){
	double a, b, c;
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	printf("\nNhap c :  ");	scanf("%lf",&c);
	printf("\n-------------------------\n");
	if(a < 0) a = -a;
	if(b < 0) b = -b;
	if(c < 0) c = -c;
	printf("\nThay cac so tren bang tri tuyet doi la : %.4lf, %.4lf, %.4lf",a,b,c);
	return 0;
}
