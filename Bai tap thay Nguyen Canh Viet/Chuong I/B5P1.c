#include<stdio.h>
#include<math.h>
int main(){
	double r, cv, dt;
	printf("\nNhap ban kinh :  ");	scanf("%lf",&r);
	cv = 2 * r * M_PI;	dt = r * r * M_PI;
	printf("\nDien tich hinh tron :  %.4lf",dt);
	printf("\nChu vi hinh tron :  %.4lf",cv);
	return 0;
}
