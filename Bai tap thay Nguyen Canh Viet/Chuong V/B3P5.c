#include<stdio.h>
#include<stdlib.h>
int main(){
	short n;	short *a;	short s = 0;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%hd",&n);
	}while(n < 1);
	printf("\n-----------------------------\n");
	// Cap phat dong dung malloc()
	a = (short*)malloc(n*sizeof(short));
	if(a == NULL){
		printf("\nKhong cap duoc vung nho !!!");
		exit(0); // Ham exit dung de thoat khoi chuong trinh
	}
	// Nhap mang
	for(int i = 0; i < n; i++){
		printf("\n*(a + %d) =  ",i);	scanf("%hd",(a+i));
	}
	printf("\n-----------------------------\n");
	// In dia chi
	printf("\nDia chi cua mang :\n\n");
	for(int i = 0; i < n; i++){
		printf("%hd\t",a+i);
	}
	printf("\n-----------------------------\n");
	// Tinh tong 
	for(int i = 0; i < n; i++){
		s += *(a+i);
	}
	printf("\nTong cua cac phan tu trong mang :  %hd",s);
	free(a);
	return 0;
}
