#include<stdio.h>

double tong(int n, double a[]){
	double s = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
	}
	return s;
}

void sxtd(int n, double a[]){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				double temp = a[i];	a[i] = a[j]; a[j] = temp;
			}
		}
	}
}

int main(){
	int n;	double a[10];
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n------------------------\n");
	printf("\nMang vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n------------------------\n");
	printf("\nTong cua cac phan tu cua mang la :  %.3lf",tong(n,a));
	printf("\n------------------------\n");
	sxtd(n,a);
	printf("\nMang sau khi duoc sap xep theo thu tu tang dan la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	return 0;
}
