#include<stdio.h>
int main(){
	int n;	double a[15];
	do{
		printf("\nNhap so phan tu cua mang :  ");	scanf("%d",&n);
	}while(n < 1);
	printf("\n----------------------\n");
	for(int i = 0; i < n; i++){
		printf("\na[%d] =  ",i);	scanf("%lf",&a[i]);
	}
	printf("\n----------------------\n");
	for(int i = 0; i < n; i++){
		printf("%.3lf\t",a[i]);
	}
	printf("\n----------------------\n");
	double s = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
	}
	printf("\na) Tong cac phan tu cua mang la :  %.4lf",s);
	printf("\n----------------------\n");
	double tb = 0, ts = 0;	int ms = 0;
	for(int i = 0; i < n; i++){
		ts += a[i];	ms++;	tb = ts/ms;
	}
	printf("\nb) Trung binh cong cac phan tu cua mang la :  %.4lf",tb);
	printf("\n----------------------\n");
	double min = a[0];
	for(int i = 0; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("\nc.1) Min cua mang la :  %.4lf",min);
	double max = a[0];
	for(int i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("\nc.2) Max cua mang la :  %.4lf",max);
	return 0;
}
