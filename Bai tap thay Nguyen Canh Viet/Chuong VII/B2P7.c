#include<stdio.h>

int checksnt(int n){
	int check = 1;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			check++;
		}
	}
	return check;
}

int main(){
	int n;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------\n");
	if(checksnt(n) == 1){
		printf("\nDay la so nguyen to !!!");
	}else{
		printf("\nDay khong phai so nguyen to !!!");
	}
	return 0;
}
