#include<stdio.h>
int main(){
	int x, y;
	printf("\nNhap x :  ");	scanf("%d",&x);
	printf("\nNhap y :  ");	scanf("%d",&y);
	printf("\n-----------------------\n");
	int *p;
	p = &x;	*p = 12;
	printf("\nGia tri cua x sau khi thay doi la :  %d",*p);
	printf("\n-----------------------\n");
	p = &y;	*p = 25;
	printf("\nGia tri cua y sau khi thay doi la :  %d",*p);
	return 0;
}
