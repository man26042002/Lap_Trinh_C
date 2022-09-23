#include<stdio.h>
int main(){
	int n;	double s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 0; i <= n; i++){
		s += (float) (2*i + 1)/(2*i + 2);
	}
	printf("\nS = 1/2 + 3/4 + ... + (2n+1)/(2n+2) =  %.4lf",s);
	return 0;
}
