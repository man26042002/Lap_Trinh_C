#include<stdio.h>
int main(){
	int m, n;	double a[10][10];
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
	return 0;
}
