#include<stdio.h>
int main(){
	int n, min = 9, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(min > i){
			min = i;
		}
	}while(n /= 10);
	printf("\nChu so nho nhat cua n la :  %d",min);
	return 0;
}
