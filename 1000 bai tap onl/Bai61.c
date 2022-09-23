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
	for(int i = max; i <= max*min; i++){
		if(i % a == 0 && i % b == 0){
			printf("\nBoi chung nho nhat cua a va b la :  %d",i);
			break;
		}
	}
	return 0;
}
