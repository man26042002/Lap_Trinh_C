#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------\n");
	int dem = 0;
	while(n != 0){
		dem++;
		n /= 10;
	}
	printf("\nSo luong chu so cua n la :  %d",dem);
	return 0;
}
