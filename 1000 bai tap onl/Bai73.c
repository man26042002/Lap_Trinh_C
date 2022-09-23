#include<stdio.h>
#include<math.h>
int main(){
	int n;	double x, ts, ms = 1, s = -1;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------\n");
	for(int i = 1; i <= n; i++){
		ts = pow(-1,i+1)*pow(x,2*i);
		ms *= (2*i)*(2*i-1);
		s += ts/ms;
	}
	printf("\nS = -1 + x^2/2! - x^4/4! + ... + (-1)^(n+1)*x^(2n)/(2n)! =  %.4lf",s);
	return 0;
}
