#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a, n, vtchen, gtchen;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	// Khai bao dong
	a = (int*)malloc(n*sizeof(int));
	if(a == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	printf("\n---------------------------------\n");
	// Nhap mang
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%d",a+i);
	}
	printf("\n---------------------------------\n");
	// Xuat mang
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	}
	printf("\n---------------------------------\n");
	// Chen them phan  tu vao vi tri duoc chon
	printf("\nNhap vi tri can chen :  ");	scanf("%d",&vtchen);
	printf("\nNhap gia tri can chen :  ");	scanf("%d",&gtchen);
	for(int i = n; i > vtchen; i--){
		*(a+i) = *(a+i-1);
	}
	a = (int*)realloc(a, (n+1)*sizeof(int));
	a[vtchen] = gtchen;
	n++;
	// Xuat mang duoc chen
	printf("\n---------------------------------\n");
	printf("\nMang sau khi chen la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	}
	// Giai phong bo nho
	free(a);
	return 0;
}
