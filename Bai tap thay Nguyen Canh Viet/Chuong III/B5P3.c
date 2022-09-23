#include<stdio.h>
int main(){
	int n;	double a[15];
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n-------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n-------------------------------\n");
	printf("\nMang vua nhap la :\n\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n-------------------------------\n");
	printf("\nMang am :\n\n");
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			printf("%.3lf\t",a[i]);
		}
	}
	printf("\n-------------------------------\n");
	printf("\nMang duong :\n\n");
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			printf("%.3lf\t",a[i]);
		}
	}
	return 0;
}
