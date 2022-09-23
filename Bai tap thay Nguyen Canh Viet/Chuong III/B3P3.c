#include<stdio.h>
int main(){
	int n;	int a[20];
	do{
		printf("\nNhap so phan tu cua day Fibonacci :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------\n");
	for(int i = 2; i <= n; i++){
		a[0] = 0;	a[1] = 1;	a[i] = a[i-1] + a[i-2];
	}
	printf("\nDay cac so Fibonacci chua n phan tu :\n\n");
	for(int i = 0; i <= n; i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
