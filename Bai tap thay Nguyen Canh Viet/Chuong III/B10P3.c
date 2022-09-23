#include<stdio.h>

int main(){
	int n, m;	double a[10], b[10], c[20];
	// Nhap va xuat mang a
	do{
		printf("\nNhap so phan tu cua mang a :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n--------------------------------\n");
	printf("\nMang a la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n--------------------------------\n");
	// Nhap va xuat mang b
	do{
		printf("\nNhap so phan tu mang b :  ");	scanf("%d",&m);
	}while(m < 1);
	printf("\n--------------------------------\n");
	for(int i = 0; i < m; i++){
		printf("\nb[%d] =  ",i);	scanf("%lf",&b[i]);
	}
	printf("\n--------------------------------\n");
	printf("\nMang b la :\n\n");
	for(int i = 0; i < m; i++){
		printf("%.3lf\t",b[i]);
	}
	printf("\n--------------------------------\n");
	// ghep 2 mang
	int k = 0;
	for(int i = 0; i < n; i++){
		c[i] = a[i];
	}
	for(int i = n; i < n+m; i++){
		c[i] = b[k++];
	}
	// Xuat mang vua ghep ra man hinh
	printf("\nMang sau khi ghep 2 mang tren la :\n\n");
	for(int i = 0; i < n+m; i++){
		printf("%.3lf\t",c[i]);
	}
	return 0;
}
