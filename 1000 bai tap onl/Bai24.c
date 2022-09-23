#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	printf("\nLiet ke cac uoc so le cua n :\n\n");
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			if(i % 2 == 1){
				printf("%d\t",i);
			}
		}
	}
	return 0;
}
