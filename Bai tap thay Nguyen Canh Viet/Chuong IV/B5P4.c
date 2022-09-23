#include<stdio.h>
int main(){
	int m, n, p, q;	double a[10][10], b[10][10], c[10][10];
	printf("\nNhap so hang ma tran a :  ");	scanf("%d",&m);
	printf("\nNhap so cot ma tran a :  ");	scanf("%d",&n);
	printf("\n-----------------------------------\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%lf",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	printf("\nMa tran a :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	printf("\nNhap so hang ma tran b :  ");	scanf("%d",&p);
	printf("\nNhap so cot ma tran b :  ");	scanf("%d",&q);
	printf("\n-----------------------------------\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%lf",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	printf("\nMa tran b :\n\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------\n");
	if(n != p){
		printf("\n2 ma tran khong kha tich !!!");
	}else{
		c[0][0] = 0;
		// Tinh tich 2 ma tran
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k]*a[k][j];
				}
			}
		}
		printf("\nMa tran tich la :\n\n");
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				printf("%.3lf\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
