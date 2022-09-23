#include<stdio.h>
int main(){
	int a, b;
	do{
		printf("\nNhap so nguyen duong a :  ");
		scanf("%d",&a);
	}while(a < 1);
	printf("\n----------------------------\n");
	do{
		printf("\nNhap so nguyen duong b :  ");
		scanf("%d",&b);
	}while(b < 1);
	printf("\n----------------------------\n");
	while(a != b){
			if(a > b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
	printf("\nUoc chung lon nhat cua a va b la :  %d",a);
	return 0;
}
