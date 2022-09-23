#include<stdio.h>
int main(){
	int n;
	do{
		printf("\nMoi nhap vao mot thang trong nam :  ");
		scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------\n");
	switch(n){
		case 1: case 2: case 3:
			printf("\nQuy I !!!");	break;
		case 4: case 5: case 6:
			printf("\nQuy II !!!");	break;
		case 7: case 8: case 9:
			printf("\nQuy III !!!"); break;
		case 10: case 11: case 12:
			printf("\nQuy IV !!!");	break;
	}
	return 0;
}
