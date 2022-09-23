#include<stdio.h>
int main(){
	int n, check = 1, s = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			s += i;
		}
	}
	if(s == n){
		printf("\nDay la so hoan thien !!!");
	}else{
		printf("\nDay khong phai so hoan thien !!!");
	}
	return 0;
}
