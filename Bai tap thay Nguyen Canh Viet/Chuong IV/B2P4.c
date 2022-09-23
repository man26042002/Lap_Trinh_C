#include<stdio.h>
int main(){
	int n;	double a[10][10];
	do{
		printf("\nNhap kich thuoc cua ma tran :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n--------------------------------\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\na[%d][%d] =  ",i,j);	scanf("%lf",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	printf("\nMa tran vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%.3lf\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------------------------\n");
	double s = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				s += a[i][j];
			}
		}
	}
	printf("\na) Tong cac phan tu tren duong cheo chinh la :  %.3lf",s);
	printf("\n--------------------------------\n");
	double s1 = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i-j) % 2 == 0){
				s1 += a[i][j] * a[i][j];
			}
		}
	}
	printf("\nb) Tong binh phuong cac phan tu thoa man (i-j) chan la :  %.3lf",s1);
	return 0;
}
