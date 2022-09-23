#include<stdio.h>
int main(){
	int n;	double a[10][10];
	do{
		printf("\nNhap kich thuoc cua ma tran :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n-----------------------------------\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%lf",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	printf("\nMa tran vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	// Chuyen hang thanh cot
	printf("\n-----------------------------------\n");
	printf("\nMa tran sau khi chuyen hang thanh cot la :\n\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[j][i]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	int h1, h2;
	printf("\nNhap 2 hang can doi vi tri :  ");	scanf("%d%d",&h1,&h2);
	for(int i = 0; i < n; i++){
		int temp = a[h1][i];	a[h1][i] = a[h2][i];	a[h2][i] = temp;
	}
	printf("\nMa tran sau khi doi vi tri 2 hang ten la :\n\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
