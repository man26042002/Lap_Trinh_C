#include<stdio.h>
int main(){
	int n, i = 0, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------\n");
	while(s < n){
		s += ++i;
	}
	printf("\nn max thoa man 1 + 2 + ... + m < n la : %d",i);
	return 0;
}
