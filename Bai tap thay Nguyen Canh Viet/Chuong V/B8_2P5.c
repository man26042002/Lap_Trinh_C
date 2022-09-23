#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a = NULL, n;	int s = 0, bp = 0;
	printf("\nNhap kich thuoc ma tran :  ");	scanf("%d",&n);
	printf("\n----------------------------\n");
	// Khai bao dong 
	a = (int*)malloc(n*n*sizeof(int));
	// Nhap ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",a+i*n+j);
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	// Xuat ma tran 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+i*n+j));
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	// Tinh tong cac phan tu tren duong cheo chinh
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				s += *(a+i*n+j);
			}
		}
	}
	printf("\na) Tong cac phan tu tren duong cheo chinh la :  %d",s);
	printf("\n----------------------------\n");
	// Tinh tong binh phuong thoa (i-j) chan
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i-j) % 2 == 0){
				bp += *(a+i*n+j) * *(a+i*n+j);
			}
		}
	}
	printf("\nb) Tong binh phuong cac phan tu thoa (i-j) chan la :  %d",bp);
	// Giai phong bo nho
	free(a);
	return 0;
}
