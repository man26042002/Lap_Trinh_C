#include<stdio.h>
#include<math.h>
int main(){
	int n;	double x;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------------------\n");
	double s = 0;
	for(int i = 1; i <= n; i++){
		s += pow(-1.0,i+1)*pow(x,i);
	}
	printf("\nS = x - x^2 + ... + (-1)^(n+1)*x^n =  %.4lf",s);
	return 0;
}
