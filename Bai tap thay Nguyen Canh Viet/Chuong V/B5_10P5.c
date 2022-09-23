#include<stdio.h>
#include<stdlib.h>
int main(){
	int m, n, k = 0;	int *a;	int*b;	int*c;
	do{
		printf("\nNhap so phan tu cua mang a :  ");	scanf("%d",&n);
	}while(n < 1);
	// Khai bao dong mang a
	a = (int*)malloc(n*sizeof(int));
	if(a == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	printf("\n----------------------------------\n");
	// Nhap mang a 
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%d",a+i);
	}
	printf("\n----------------------------------\n");
	// Xuat mang a
	for(int i = 0; i < n; i++){
		printf("%d\t",*(a+i));
	} 
	printf("\n----------------------------------\n");
	// Mang b
	do{
		printf("\nNhap so phan tu cua mang b :  ");	scanf("%d",&m);
	}while(m < 1);
	// Khai bao dong mang b
	b = (int*)malloc(m*sizeof(int));
	if(b == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	printf("\n----------------------------------\n");
	// Nhap mang b
	for(int j = 0; j < m; j++){
		printf("\n*(b + %d) =  ",j);	scanf("%d",b+j);
	}
	printf("\n----------------------------------\n");
	for(int j = 0; j < m; j++){
		printf("%d\t",*(b + j));
	}
	printf("\n----------------------------------\n");
	c = (int*)malloc((m+n)*sizeof(int));
	if(c == NULL){
		printf("\nKhong the cap phat bo nho !!!");
		exit(0);
	}
	for(int i = 0; i < n; i++){
		*(c + i) = *(a + i);
	}
	for(int i = n; i < m+n; i++){
		*(c + i) = *(b + k++);
	}
	printf("\nMang sau khi ghep 2 mang tren la :\n\n");
	for(int i = 0; i < m+n; i++){
		printf("%d\t",*(c + i));
	}
	// Giai phong bo nho
	free(a);	free(b);	free(c);
	return 0;
}
