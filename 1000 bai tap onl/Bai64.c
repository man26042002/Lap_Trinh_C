#include<stdio.h>
int main(){
	double a, b;
	printf("\nNhap lan luot a va b thoa max ax + b = 0");
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	if(a == 0){
		if(b == 0){
			printf("\nPhuong trinh co vo so nghiem !!!");
		}else{
			printf("\nPhuong trinh vo nghiem !!!");
		}
	}else{
		printf("\nPhuong trinh co nghiem duy nhat x = %.4lf",-b/a);
	}
	return 0;
}
