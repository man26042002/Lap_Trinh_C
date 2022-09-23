#include<stdio.h>
int main(){
	double a[20];	int n;
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n-------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n-------------------------\n");
	for(int i = 0; i < n; i++){
		printf("%.2lf\t",a[i]);
	}
	return 0;
}
