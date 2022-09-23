#include<stdio.h>
#include<math.h>
int main(){
	int n;	double s = sqrt(0);
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = 1; i <= n; i++){
		s = sqrt(2 + s);
	}
	printf("\nS = can(can(...Can2)) =  %.4lf",s);
	return 0;
}
