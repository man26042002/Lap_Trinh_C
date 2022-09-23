#include<stdio.h>
#include<math.h>

double f(double x){
	return x*x*x-5*x+1;
}

int main(){
	double a, b;
	printf("Nhap khoang a, b : "); scanf("%lf %lf",&a,&b);
	double mid, tol=1e-12;
	int k=0;
	while(fabs(b-a)>tol){
		mid=(a+b)/2;
		if(f(a)*f(mid)>0) a=mid;
		else b=mid;
		k++;
	}
	printf("Nghiem cua pt = %lf\n",mid);
	printf("So buoc lap = %d\n",k);
	return 0;
}
