#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a, n, vt;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	// Khai bao dong
	a = (int*)malloc(n*sizeof(int));
	if(a == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	printf("\n-----------------------------\n");
	// nhap mang
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%d",a+i);
	}
	printf("\n-----------------------------\n");
	// Xuat mang
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	}
	printf("\n-----------------------------\n");
	// Xoa 1 phan tu duoc chon ra khoi mang
	printf("\nNhap vi tri can xoa :  ");	scanf("%d",&vt);
	for(int i = vt-1; i < n; i++){
		*(a + i) = *(a + i + 1);
	}
	// cap phat lai bo nho
	a = (int *)realloc(a, (n - 1) * sizeof(int));
	n--;
	// In ra mang sau khi xoa
	printf("\n-----------------------------\n");
	printf("\nMang sau khi xoa vt %d la :\n\n",vt);
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	}
	// Giai phong bo nho
	free(a);
	return 0;
}
