#include<stdio.h>
#include<math.h>
int main(){
	int n;	double x, s = sqrt(0), t = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n----------------------------\n");
	for(int i = 1; i <= n; i++){
		t *= x;		s = sqrt(t + s);
	}
	printf("\nS(x, n) = sqrt(x^n + sqrt(...+sqrt(x))) =  %.4lf",s);
	return 0;
}
