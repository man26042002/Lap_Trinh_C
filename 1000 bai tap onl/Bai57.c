#include<stdio.h>
int main(){
	int n, check = 1, dao = 0;
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	int i = n; // Gan bien n cho 1 bien khac 
	printf("\n----------------------------\n");
	do{
		dao = dao*10 + i%10;// Tim so nghich dao
	}while(i /= 10);
	// Sau cac phep bien doi n giu nguyen gia tri
	if(dao == n){
		printf("\nDay la so doi xung !!!");
	}else{
		printf("\nDay khong phai so doi xung !!!");
	}
	return 0;
}
