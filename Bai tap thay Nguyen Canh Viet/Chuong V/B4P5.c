#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;	int *p;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n-----------------------------\n");
	// Cap phat dong 
	p = (int*)malloc(n*sizeof(int));
	if(p == NULL){
		printf("\nKhong cap duoc vung nho !!!");
		exit(0);
	}
	// Nhap mang
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%d",p+i);
	}
	printf("\n-----------------------------\n");
	// Thuat toan xep giam dan
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(*(p+i) < *(p+j)){
				int temp = *(p+i);	*(p+i) = *(p+j);	*(p+j) = temp;
			}
		}
	}
	// In ra man hinh mang da duoc sap xep
	printf("\nMang duoc sap xep theo thu tu giam dan la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%d\t",*(p+i));
	}
	free(p);
	return 0;
}
