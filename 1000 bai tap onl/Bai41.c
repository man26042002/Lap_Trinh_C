#include<stdio.h>
#include<math.h>
int main(){
	int n;	double s = pow(1.0, -1);
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	for(int i = 1; i <= n; i++){
		s = pow((1 + s)*1.0, -1);
	}
	printf("\nS =  %.4lf",s);
	return 0;
}
