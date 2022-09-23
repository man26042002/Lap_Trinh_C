#include<stdio.h>

float tbc(int a, int b, int c){
	return (a+b+c)/3.0;
}
int main(){
	int a, b, c;
	printf("\nNhap lan luot 3 so a, b, c:\n\n");
	printf("\na =  ");	scanf("%d",&a);
	printf("\nb =  ");	scanf("%d",&b);
	printf("\nc =  ");	scanf("%d",&c);
	printf("\n-----------------------------\n");
	printf("\nTrung binh cong cua 3 so tren la :  %.3f",tbc(a,b,c));
	return 0;
}
