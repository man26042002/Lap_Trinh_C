#include<stdio.h>
#include<math.h>
int main(){
	int n;	double s = sqrt(0), t = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = 1; i <= n; i++){
		t *= i;	s = sqrt(t + s);
	}
	printf("\nS = sqrt(n! + sqrt(...+sqrt(1!))) =  %.4lf",s);
	return 0;
}
