#include<stdio.h>
int main(){
	double a, b, c, d, max, min;
	printf("\nNhap 4 so a, b, c, d :  ");	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	max = a;
	if(max < b)	max = b;
	if(max < c)	max = c;
	if(max < d)	max = d;
	printf("\nMax(a,b,c,d) =  %.4lf",max);
	printf("\n-----------------------------\n");
	min = a;
	if(min > b)	min = b;
	if(min > c)	min = c;
	if(min > d)	min = d;
	printf("\nMin(a,b,c,d) =  %.4lf",min);
	return 0;
}
