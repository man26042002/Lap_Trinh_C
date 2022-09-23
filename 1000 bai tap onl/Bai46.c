#include<stdio.h>
int main(){
	int n, i, dem = 0;
	
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(i % 2 == 1){
			dem++;
		}
	}while(n /= 10);
	
	printf("\nSo luong cac chu so le cua n la :  %d",dem);
	return 0;
}
