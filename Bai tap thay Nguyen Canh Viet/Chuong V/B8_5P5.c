#include<stdio.h>
#include<stdlib.h>

int main(){
	int m, n, p, q;	int *a;	int *b;	int *c;
	do{
		printf("\nNhap so hang ma tran a :  ");	scanf("%d",&m);
	}while(m < 1);
	do{
		printf("\nNhap so cot ma tran a :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------------\n");
	// Khai bao dong ma tran a
	a = (int*)malloc(m*n*sizeof(int));
	// Nhap ma tran a
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%d",a+i*n+j);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	// Xuat ma tran a
	printf("\nMa tran a :\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t",*(a+i*n+j));
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	do{
		printf("\nNhap so hang ma tran b :  ");	scanf("%d",&p);
	}while(p < 1);
	do{
		printf("\nNhap so cot ma tran b :  ");	scanf("%d",&q);
	}while(q < 1);
	printf("\n--------------------------------\n");
	// Khai bao dong ma tran b
	b = (int*)malloc(p*q*sizeof(int));
	// nhap ma tran b
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("\nb[%d][%d] =  ",i,j);	scanf("%d",b+i*p+j);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	// Xuat ma tran b
	printf("\nMa tran b :\n\n");
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			printf("%d\t",*(b+i*p+j));
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	// Tich 2 ma tran
	if(n != p){
		printf("\n2 Ma tran tren khong kha tich !!!");
	}else{
		c = (int*)malloc(m*q*sizeof(int));
		*(c + 0*m + 0) = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){				
				for(int k = 0; k < n; k++){
					*(c + i*m + j) += *(a + i*m + k) * *(b + k*n + j);
				}
			}
		}
		printf("\nMa tran tich cua 2 ma tran tren la :\n\n");
		for(int i = 0; i < m; i++){
			for(int j = 0; j < q; j++){
				printf("%d\t",*(c + i*m + j));
			}
			printf("\n");
		}	
	}
	// giai phong bo nho
	free(a);	free(b);	free(c);
	return 0;
}
