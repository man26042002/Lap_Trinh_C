#include<stdio.h>
int main(){
	int n;	double a[15];
	do{
		printf("\nNhap so nguyen duong n :	");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------\n");
	for(int i = 0; i < n; i++){
		printf("\a[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n----------------------\n");
	printf("\nMang vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n----------------------\n");
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){ // Tang dan
				double change = a[i];	a[i] = a[j];	a[j] = change;
			}
		}
	}
	printf("\nMang sap xep theo thu tu tang dan la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	return 0;
}
