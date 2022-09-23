#include<stdio.h>
int main(){
	int n, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------\n");
	for(int i = 1; i < n; i++){
		if(i % 2 == 1){
			s += i;
		}
	}
	printf("\nTong cac so nguyen duong le nho hon n : %d",s);
	return 0;
}
