#include<stdio.h>
int main(){
	int n, vt;	double a[15];
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n---------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n---------------------------------\n");
	printf("\nMang vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n---------------------------------\n");
	printf("\nNhap vi tri can xoa :	");	scanf("%d",&vt);
	// Thuat toan xoa phan tu duoc chon
	for(int i = vt; i < n-1; i++){
		a[i] = a[i+1];
	}
	--n;
	// in ra mang sau khi xoa
	printf("\nMang sau khi xoa la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	return 0;
}
