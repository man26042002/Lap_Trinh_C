#include<stdio.h>
#include<math.h>
#define eps 0.000001

double cosx(double x){
	double s, t, ts, ms = 1;	int dau = -1;
	s = t = ts = 1;
	for(int i = 1; t > eps; i++, dau = -dau){
		t = (ts *= x*x)/(ms *= (2*i)*(2*i-1));	s += dau*t;
	}
	return s;
}

int main(){
	double x;
	printf("\nNhap x (radian) :  ");	scanf("%lf",&x);
	printf("\n------------------------\n");
	printf("\ncos(x) tinh theo cong thuc Taylor :  %lf",cosx(x));
	printf("\n------------------------\n");
	printf("\ncos(x) theo ham math.h :  %lf",cos(x));
	return 0;
}
