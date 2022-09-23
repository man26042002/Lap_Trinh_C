#include<stdio.h>
#include<math.h>
int main(){
	int n;	double s = sqrt(0);
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = n; i >= 1; i--){
		s = sqrt(i + s);
	}
	printf("\nS = can(1 + can(2 +can(...+can(n)))) =  %.4lf",s);
	return 0;
}
