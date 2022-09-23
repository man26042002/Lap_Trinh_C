#include<stdio.h>
int main(){
	int n, check = 1;
	do{
		printf("\nNhap vao mot so nguyen duong :  ");
		scanf("%d",&n);
	}while(n < 2);
	// Check So nguyen to
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
