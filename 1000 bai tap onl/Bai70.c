#include<stdio.h>
#include<math.h>
int main(){
	int n, ts, ms = 0;	double s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------\n");
	for(int i = 1; i <= n; i++){
		ts = pow(-1,i+1);	ms += i;	s += ts/ms;
	}
	printf("\nS = 1 - 1/(1+2) +... +(-1)^(n+1)/(1+2+...+n) =  %.4lf",s);
	return 0;
}
