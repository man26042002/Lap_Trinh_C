#include<stdio.h>
int main(){
	int n;	double s = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 1; i <= n; i++){
		s += 1.0/(2*i+1);
	}
	printf("\nS = 1 + 1/3 + ... + 1/(2n+1) =  %.4lf",s);
	return 0;
}
