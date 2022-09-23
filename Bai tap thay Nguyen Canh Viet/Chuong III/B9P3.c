#include<stdio.h>
int main(){
	int n, vtchen;	double a[15], ptchen;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n--------------------------------\n");
	printf("\nMang vua nhap :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n--------------------------------\n");
	printf("\nNhap vi tri can chen :  ");	scanf("%d",&vtchen);
	printf("\nNhap phan tu can chen :  ");	scanf("%lf",&ptchen);
	printf("\n--------------------------------\n");
	// Thuat toan chen them phan tu
	for(int i = n; i > vtchen; i--){
		a[i] = a[i-1];
	}
	a[vtchen] = ptchen;
	n++;
	// In ra mang sau khi chen
	printf("\nMang sau khi chen them la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	return 0;
}
