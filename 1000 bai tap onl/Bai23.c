#include<stdio.h>
int main(){
	int n, dem = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nliet ke cac uoc so cua n :\n\n");
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d\t",i);	dem++;
		}
	}
	printf("\n----------------------------------\n");
	printf("\nSo luong uoc so cua n la :  %d",dem);
	return 0;
}
