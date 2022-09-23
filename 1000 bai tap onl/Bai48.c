#include<stdio.h>
int main(){
	int n, t = 1, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(i % 2 == 1){
			t *= i;
		}
	}while(n /= 10);
	printf("\nTich cac chu so le cua n la : %d",t);
	return 0;
}
