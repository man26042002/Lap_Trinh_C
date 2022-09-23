#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 2);
	printf("\n------------------\n");
	printf("\nCac uoc so cua n :\n");
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d\t",i);
		}
	}
	return 0;
}
