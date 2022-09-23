#include<stdio.h>
int main(){
	int m, n;	double a[10][10], min, max;
	do{
		printf("\nNhap so hang cua ma tran :  ");	scanf("%d",&m);
	}while(m < 1);
	do{
		printf("\nNhap so cot cua ma tran :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------------\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%lf",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	printf("\nMa tran vua nhap la :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	min = a[0][0], max = a[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(max < a[i][j])	max = a[i][j];
			if(min > a[i][j])	min = a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(min == a[i][j]){
				printf("\nVi tri cua phan tu min la :  a[%d][%d]",i,j);
			}
			if(max == a[i][j]){
				printf("\nVi tri cua phan tu max la :  a[%d][%d]",i,j);
			}
		}
	}
	return 0;
}
