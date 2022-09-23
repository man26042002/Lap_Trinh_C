#include<stdio.h>
#include<math.h>

double f(double x){
	return x*x*x-5*x+1;
}

double df(double x){
	return 3*x*x-5;
}

int main(){
	double a, b;
	printf("Nhap khoang a , b : "); scanf("%lf %lf",&a,&b);
	double x0, x1, tol=1e-12; int k=0;
	x1=b;
	while(fabs(x1-x0)>tol){
		x0=x1;
		x1=x0-f(x0)/df(x0);
		k++;
	}
	printf("Nghiem cua pt = %lf\n",x1);
	printf("So vong lap = %d\n",k);
}
