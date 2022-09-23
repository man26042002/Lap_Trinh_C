#include<stdio.h>
int main(){
	double a, b;
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	if(a*b < 0){
		printf("\n2 so trai dau !!!");
	}else{
		printf("\n2 so cung dau !!!");
	}
	return 0;
}
