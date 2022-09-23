#include<stdio.h>
int main(){
	int n;	double x, t = 1;
	do{
		printf("\nNhap so  nguyen duong n :  ");	scanf("%d",&n);
	} while(n < 1);
	printf("\n---------------------------------\n");
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		t *= x;
	}
	printf("\nS(x, n) = x^n =  %.4lf",t);
	return 0;
}
