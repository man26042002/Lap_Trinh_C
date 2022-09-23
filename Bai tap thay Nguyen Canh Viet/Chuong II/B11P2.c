#include<stdio.h>
#include<math.h>
#define eps 0.000001
int main(){
	double x, s, t, ts, ms = 1;	int dau = -1;
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n------------------------------\n");
	s = t = ts = 1;
	for(int i = 1; t > eps; i++, dau = -dau){
		t = (ts *= x*x)/(ms *= (2*i)*(2*i-1));	s += dau*t;
	}
	printf("\ncos(x) tinh theo cong thuc Taylor :  %lf",s);
	printf("\ncos(x) tinh theo ham math.h :  %lf",cos(x));
	return 0;
}
