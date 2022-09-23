#include<stdio.h>
int main(){
	float a;
	do{
		printf("\nNhap 1 so a khac 0 :  ");	scanf("%f",&a);
	}while(a == 0);
	printf("\na = %.4f",a);
	return 0;
}
