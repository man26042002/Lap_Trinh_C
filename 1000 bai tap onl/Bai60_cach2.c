#include<stdio.h>
int main(){
	int a, b;
	do{
		printf("\nNhap so nguyen duong a :  ");
		scanf("%d",&a);
	}while(a < 1);
	printf("\n----------------------------\n");
	do{
		printf("\nNhap so nguyen duong b :  ");
		scanf("%d",&b);
	}while(b < 1);
	printf("\n----------------------------\n");
	int max = (a > b) ? a : b;
	int min = (a < b) ? a : b;
	for(int i = max; i >= 1; i--){
		if((a % i == 0) && (b % i == 0)){
			printf("\nUoc so lon nhat cua a va b la :  %d",i);	
			break;
		}
	}
	
	return 0;
}
