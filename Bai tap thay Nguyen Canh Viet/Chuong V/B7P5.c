#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a = NULL, m, n;
	printf("\nNhap so hang cua ma tran :  ");	scanf("%d",&m);
	printf("\nNhap so cot cua ma tran :  ");	scanf("%d",&n);
	a = (int*)malloc(m*n*sizeof(int));
	printf("\n----------------------------\n");
	printf("\nNhap ma tran :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",(a + i*m + j));
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	printf("\nGia tri ma tran :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a + i*m + j));
		}
		printf("\n");
	}
	printf("\n----------------------------\n");
	printf("\nDia chi ma tran :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",(a + i*m + j));
		}
		printf("\n");
	}
	// Giai phong bo nho
	free(a);
	return 0;
}
