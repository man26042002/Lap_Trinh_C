#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nNhap 1 so nguyen duong thuoc [1; 7] :  ");	scanf("%d",&n);
	}while(n < 1 || n > 7);
	
	switch(n){
		case 1: printf("\nChu Nhat !!!");	break;
		case 2: printf("\nThu Hai !!!");	break;
		case 3: printf("\nThu Ba !!!");		break;
		case 4: printf("\nThu Tu !!!");		break;
		case 5: printf("\nThu Nam !!!");	break;
		case 6:	printf("\nThu Sau !!!");	break;
		case 7: printf("\nThu Bay !!!");	break;
	}
	return 0;
}
