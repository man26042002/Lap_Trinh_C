#include<stdio.h>
int main(){
	double a, b, c;
	printf("\nNhap a :  ");	scanf("%lf",&a);
	printf("\nNhap b :  ");	scanf("%lf",&b);
	printf("\nNhap c :  ");	scanf("%lf",&c);
	printf("\n--------------------------\n");
	// Max
	double max = a;
	if(max < b)	max = b;
	if(max < c) max = c;
	// Min
	double min = a;
	if(min > b) min = b;
	if(min > c) min = c;
	printf("\nMax(a,b,c) =  %.4lf",max);
	printf("\nMin(a,b,c) =  %.4lf",min);
	return 0;
}
