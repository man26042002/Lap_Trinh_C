#include<stdio.h>

void nhap(int m, int n, int a[10][10]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}

void xuat(int m, int n, int a[10][10]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m, n, a[10][10];
	printf("\nNhap so hang cua ma tran :  ");	scanf("%d",&m);
	printf("\nNhap so cot cua ma tran :  ");	scanf("%d",&n);
	printf("\n------------------------------------\n");
	nhap(m,n,a);
	printf("\n------------------------------------\n");
	xuat(m,n,a);
	return 0;
}
