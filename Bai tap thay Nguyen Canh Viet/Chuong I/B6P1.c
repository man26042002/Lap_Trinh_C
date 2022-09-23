#include<stdio.h>
#include<math.h>
int main(){
	double x1, x2, y1, y2, d;
	printf("\nNhap toa do A(x1, y1) :\n");	scanf("%lf%lf",x1,y1);
	printf("\nNhap toa do B(x2, y2) :\n");	scanf("%lf%lf",x2,y2);
	printf("\n-----------------------------\n");
	 d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	printf("\nKhoang cach AB la :  %.4lf",d);
	return 0;
}
