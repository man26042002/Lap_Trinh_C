#include<stdio.h>
int main(){
	int n, dem = 1, max = 0, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(max == i){
			dem++;
		}if(max < i){
			max = i;
		}
	}while(n /= 10);
	printf("\nChu so lon nhat cua n la :  %d",max);
	printf("\n----------------------------\n");
	printf("\nSo luong chu so lon nhat cua n la :  %d",dem);
	return 0;
}
