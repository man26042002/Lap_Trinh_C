#include<stdio.h>

void tichmatran(int m, int n, int p, int q, int a[10][10], int b[10][10], int c[10][10]){
	if(n != p){
		printf("\n2 ma tran khong kha tich !!!");
	}else{
		c[0][0] = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				for(int k = 0; k < p; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
	}
}
int main(){
	int m, n, p, q, a[10][10], b[10][10], c[10][10];
	do{
		printf("\nNhap so hang ma tran a :  ");	scanf("%d",&m);
	}while(m < 1);
	do{
		printf("\nNhap so cot ma tran a :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------------------\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------\n");
	printf("\nMa tran a :\n\n");	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------\n");
	do{
		printf("\nNhap so hang ma tran b :  ");	scanf("%d",&p);
	}while(p < 1);
	do{
		printf("\nNhap so cot ma tran b :  ");	scanf("%d",&q);
	}while(q < 1);
	printf("\n----------------------------------\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("\nb[%d][%d] =  ",i,j);	scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------\n");
	printf("\nMa tran b :\n\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------------------\n");
	tichmatran(m,n,p,q,a,b,c);
	printf("\nMa tran tich la :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
