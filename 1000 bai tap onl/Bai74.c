#include<stdio.h>
#include<math.h>
int main(){
	int n;	double x, ts, ms = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------\n");
	double s = 1-x;
	for(int i = 1; i <= n; i++){
		ts = pow(-1,i+1)*pow(x,2*i+1);
		ms *= (2*i+1)*(2*i);
		s += ts/ms;
	}
	printf("\nS = 1 - x + x^3/3! - ... + (-1)^(n+1)*x^(2n+1)/(2n+1)! =  %.4lf",s);
	return 0;
}
