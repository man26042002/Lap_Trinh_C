#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a = NULL, n;
	do{
		printf("\nNhap kich thuoc cua ma tran vuong :  ");	scanf("%d",&n);
	}while(n < 1);
	a = (int*)malloc(n*n*sizeof(int));
	printf("\n--------------------------------\n");
	// Nhap ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",a+i*n+j);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	// Xuat ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+i*n+j));
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	printf("\nMa tran chuyen vi :\n\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+j*n+i));
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	int b, c, h;
	printf("\nNhap lan luot 2 hang can hoan doi vi tri :\n");
	printf("\nVi tri hang 1 :  ");	scanf("%d",&b);
	printf("\nVi tri hang 2 :  ");	scanf("%d",&c);
	printf("\n--------------------------------\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			h = *(a + (b-1)*n + j);	
			*(a + (b-1)*n + j) = *(a + (c-1)*n + j);
			*(a + (c-1)*n + j) = h;
		}
	}
	// Xuat ra ma tran sau khi doi vi tri hang
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+i*n+j));
		}
		printf("\n");
	}
	free(a);
	return 0;
}
