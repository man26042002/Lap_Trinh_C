#include<stdio.h>
int main(){
	int n, check = 1;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			check++;
		}
	}
	if(check == 1){
		printf("\nDay la so nguyen to !!!");
	}else{
		printf("\nDay khong phai so nguyen to !!!");
	}
	return 0;
}
