#include<stdio.h>
#include<math.h>
int main(){
	int x, y;
	do{
		printf("\nNhap so nguyen duong y :  ");	scanf("%d",&y);
	}while(y < 1);
	printf("\n-----------------------\n");
	printf("\ny co phai so chinh phuong khong ?\n");
	x = sqrt(y);
	if(x * x == y){
		printf("\nCo !!!");
	}else{
		printf("\nKhong !!!");
	}
	return 0;
}
