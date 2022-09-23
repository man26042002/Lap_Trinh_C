#include<stdio.h>
#include<math.h>
#define eps 0.000001

double emux(double x){
	double s, t, ts, ms = 1;
	s = t = ts = 1;
	for(int i = 1; t > eps; i++){
		t = (ts *= x)/(ms *= i);	s += t;
	}
	return s;	
}

int main(){
	double x;
	printf("\nNhap x :  ");	scanf("%lf",&x);
	printf("\n--------------------------\n");
	printf("\ne^x tinh theo cong thuc Taylor :  %lf",emux(x));
	printf("\n--------------------------\n");
	printf("\ne^x tinh theo ham math.h :  %lf",exp(x));
	return 0;
}
