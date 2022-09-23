#include<stdio.h>
int main(){
	int n, max = 0, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(max < i){
			max = i;
		}
	}while(n /= 10);
	printf("\nChu so lon nhat trong n la :  %d",max);
	return 0;
}
