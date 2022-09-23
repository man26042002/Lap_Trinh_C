#include<stdio.h>
int main(){
	int n, check = 1;	
	do{
		printf("\nNhap so nguyen duong n :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------\n");
	int i = n;	int csc = i%10;	  i /= 10;
	while(i != 0){
		int cskc = i%10;	i /= 10;
		if(csc > cskc){
			check++;
		}else{
			csc = cskc;
		}
	}
	if(check == 1){
		printf("\nCac chu so giam dan tu trai sang phai !!!");
	}else{
		printf("\nCac chu so khong giam dan tu trai sang phai !!!");
	}
	return 0;
}
