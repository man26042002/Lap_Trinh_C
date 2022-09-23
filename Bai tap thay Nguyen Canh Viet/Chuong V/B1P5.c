#include<stdio.h>

int main(){
	int x = 6;
	int *p = &x;
	printf("\nDia chi bien x thong qua con tro p :  %d",p);
	printf("\n-----------------------------\n");
	printf("\nGia tri bien x thong qua con tro p :  %d",*p);
	printf("\n-----------------------------\n");
	x = 14;
	printf("\nGia tri cua x sau khi thay doi thong qua con tro p :  %d",*p);
	printf("\n-----------------------------\n");
	printf("\nDia chi bien x sau khi thay doi gia tri :  %d",p);
	return 0;
}
