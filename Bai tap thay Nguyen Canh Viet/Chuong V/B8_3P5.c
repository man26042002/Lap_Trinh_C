#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a = NULL, m, n, max, min;
	printf("\nNhap so hang ma tran :  ");	scanf("%d",&m);
	printf("\nNhap so cot ma tran :  ");	scanf("%d",&n);
	printf("\n----------------------------\n");
	// Khai bao dong
	a = (int*)malloc(m*n*sizeof(int));
	// Nhap Ma tran
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",a+i*m+j);	
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	// In ma tran
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+i*n+j));
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	// Tim vi tri max va min
	min = *(a+0*m+0);	max = *(a+0*m+0);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(max < *(a+i*m+j))	max = *(a+i*m+j);
			if(min > *(a+i*m+j))	min = *(a+i*m+j);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(max == *(a+i*m+j)){
				printf("\nVi tri phan tu max la a[%d][%d]",i,j);
			}
			if(min == *(a+i*m+j)){
				printf("\nVi tri phan tu min la a[%d][%d]",i,j);
			}
		}
	}
	// Giai phong bo nho
	free(a);
	return 0;
}
