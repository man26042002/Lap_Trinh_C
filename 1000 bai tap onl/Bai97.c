#include<stdio.h>
int main(){
	double a,b,c;
	printf("\nNhap lan luot 3 canh cua tam giac :");
	printf("\nNhap canh thu nhat :  ");	scanf("%lf",&a);
	printf("\nNhap canh thu hai :  ");	scanf("%lf",&b);
	printf("\nNhap canh thu ba :  ");	scanf("%lf",&c);
	printf("\n-----------------------\n");
	if(a + b > c && b + c > a && c + a > b){
		if(a == b && b == c){
			printf("\nDay la tam giac deu !!!");
		}else if( a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
			printf("\nDay la tam giac vuong !!!");
		}else if( a == b || b == c || c == a){
			printf("\nDay la tam giac can !!!");
		}else{
			printf("\nDay la tam giac thuong !!!");
		}
	}else{
		printf("\nDay khong phai tam giac !!!");
	}
	return 0;
}
