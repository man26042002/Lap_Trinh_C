#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c;
	
	printf("\nNhap a, b, c thoa man a.x^2 + b.x + c = 0\n");
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	printf("\nNhap c :  ");	scanf("%lf",&c);
	printf("\n----------------------------\n");
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("\nPhuong trinh co vo so nghiem !!!");
			}else{
				printf("\nPhuong trinh vo nghiem !!!");
			}
		}else{
			printf("\nPhuong trinh co nghiem duy nhat x = %.4lf",-c/b);
		}
	}else{
		double d = b*b - 4*a*c;
		if(d < 0){
			printf("\nPhuong trinh vo nghiem !!!");
		}else if(d == 0){
			printf("\nPhuong trinh co nghiem kep x1 = x2 =  %.4lf",-b/(2*a));
		}else{
			double x1 = (-b - sqrt(d))/(2*a);
			double x2 = (-b + sqrt(d))/(2*a);
			printf("\nPhuong trinh co 2 nghiem phan biet x1 = %.4lf, x2 = %.4lf",x1,x2);
		}
	}
	return 0;
}
