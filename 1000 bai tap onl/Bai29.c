#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = n-1; i >= 1; i--){
		if(n % i == 0){
			printf("\nUoc so lon nhat nho hon n la :  %d",i);	break;
		}		
	}
	return 0;
}
