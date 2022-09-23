#include<stdio.h>
int main(){
	int n, check = 1;
	do{
		printf("\nNhap so nguyen duong n >= 2 :  ");	scanf("%d",&n);
	}while(n < 2);
	printf("\n---------------------------\n");
	printf("\nn co phai so nguyen to hay khong ?\n");
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			check++;
		}
	}
	if(check == 1){
		printf("\nCo !!!");
	}else{
		printf("\nKhong !!!");
	}
	return 0;
}
