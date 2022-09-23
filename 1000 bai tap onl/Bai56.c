#include<stdio.h>
int main(){
	int n, check = 1, i;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------\n");
	do{
		i = n%10;
		if(i % 2 == 1){
			check++;
		}
	}while(n /= 10);
	
	if(check == 1){
		printf("\nn gom toan chu so chan !!!");
	}else{
		printf("\nn khong gom toan chu so chan !!!");
	}
	return 0;
}
