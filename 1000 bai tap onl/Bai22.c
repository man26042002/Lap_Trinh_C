#include<stdio.h>
int main(){
	int n, t = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nLiet ke cac uoc so cua n :\n\n");
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d\t",i);	t *= i;
		}
	}
	printf("\n----------------------------------\n");
	printf("\nTich cac uoc so cua n la :  %d",t);
	return 0;
}
