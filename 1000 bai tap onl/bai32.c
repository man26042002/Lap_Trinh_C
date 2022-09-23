#include<stdio.h>
#include<math.h>
int main(){
	int x, y;
	do{
		printf("\nNhap vao 1 so nguyen duong :  ");	scanf("%d",&y);
	}while(y < 1);
	printf("\n----------------------------------\n");
	x = sqrt(y);
	if(x*x == y){
		printf("\nDay la so chinh phuong !!!");
	}else{
		printf("\nDay khong phai so chinh phuong !!!");
	}
	return 0;
}
