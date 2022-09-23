#include<stdio.h>
#include<math.h>
#define eps 0.000001
int main(){
	double x, ts, ms = 1, s, t;
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n-----------------------\n");
	 s = ts = t = 1;
	 for(int i = 1; t > eps; i++){
	 	t = (ts *= x)/(ms *= i);	s += t;
	 }
	 printf("\ne^x tinh theo cong thuc Taylor :  %lf",s);
	 printf("\ne^x tinh theo thu vien Math.h :  %lf",exp(x));
	return 0;
}
