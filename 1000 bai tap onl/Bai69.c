#include<stdio.h>
#include<math.h>
int main(){
	int n; double x;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n---------------------------\n");
	double s = x;
	for(int i = 1; i <= n; i++){
		s += pow(-1,i)*pow(x,2*i+1);
	}
	printf("\nS = x - x^3 + ... + (-1)^n*x^(2*n+1) =  %.4lf",s);
	return 0;
}
