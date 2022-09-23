#include<stdio.h>
int main(){
	double a, b, c, d, e, f, D, Dx, Dy;
	printf("\nNhap lan luot a, b, c, d, e, f thoa man he :");
	printf("\na*x + b*y = c");
	printf("\nd*x + e*y = f");
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	printf("\nNhap c :  ");	scanf("%lf",&c);
	printf("\nNhap d :  ");	scanf("%lf",&d);
	printf("\nNhap e :  ");	scanf("%lf",&e);
	printf("\nNhap f :  ");	scanf("%lf",&f);
	D = a*e - b*d;	Dx = c*e - b*f;	Dy = a*f - c*d;
	if(D == 0){
		printf("\nHe phuong trinh vo nghiem !!!");
	}else{
		printf("\nHe phuong trinh co nghiem duy nhat x = %.4lf, y = %.4lf",Dx/D,Dy/D);
	}
	return 0;
}
