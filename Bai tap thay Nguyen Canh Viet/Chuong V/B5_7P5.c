#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;	int *a; // Khai bao con tro
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n-----------------------------\n");
	// Khai bao dong
	a = (int*)malloc(n*sizeof(int));
	if(a == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	// Nhap mang
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%d",a+i);
	}
	printf("\n-----------------------------\n");
	// Xuat mang
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	}
	printf("\n-----------------------------\n");
	// Mang dao nguoc
	printf("\nMang sau khi dao nguoc la :\n\n");
	for(int i = n-1; i >= 0; i--){
		printf("%d\t",*(a+i));
	}
	// Giai phong bo nho
	free(a);
	return 0;
}
